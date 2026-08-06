// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_Relic_v2Character.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include <Kismet/KismetMathLibrary.h>
#include "AI/Enemy/EnemyCharacter.h"
#include "AI/Enemy/EnemyController.h"
#include "UI/DetectionHUDWidget.h"
#include "Project_Relic_v2PlayerController.h"
#include "Project_Relic_v2.h"


AProject_Relic_v2Character::AProject_Relic_v2Character()
{
	PrimaryActorTick.bCanEverTick = false;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Initalise charatcer moving speed variable
	MoveSpeedMap =
	{
		{   ECharacterMoveSpeed::Slow,      CharacterMoveSpeedDefaults.Slow    },
		{   ECharacterMoveSpeed::Default,   CharacterMoveSpeedDefaults.Default },
		{   ECharacterMoveSpeed::Fast,      CharacterMoveSpeedDefaults.Fast    }
	};

	// Set character move speed to default
	CurrentMoveSpeed = ECharacterMoveSpeed::Default;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeedMap[CurrentMoveSpeed];
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 100.0f, 75.0f);
	CameraBoom->SetRelativeLocation(FVector(0.0f, 0.0f, 10.0f));
	CameraBoom->bUsePawnControlRotation = true;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Crouch defaults
	bIsCrouching = false;

	// Weapon defaults
	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>(TEXT("WeaponComponent"));

	// Inventory defaults
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));

	// Health defaults
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	
	// Stamina defaults
	MaxStamina = 100.0f;
	CurrentStamina = MaxStamina;
	DecrementStamina = 5.0f;
	IncrementStamina = 5.0f;
	DrainStaminaTime = 0.05f;
	RegenerateStaminaTime = 0.05f;

	// Detection defaults
	MaxDetection = 1000.0f;
	InstantDetection = 100.0f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AProject_Relic_v2Character::HandleDeath_Implementation()
{
	// Disable character movement
	GetCharacterMovement()->DisableMovement();

	// Disable Player input
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if(PC)
		DisableInput(PC);
}

bool AProject_Relic_v2Character::HandleMessage(const FTelegram& Msg)
{
	return false;
}



void AProject_Relic_v2Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) 
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AProject_Relic_v2Character::Move);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AProject_Relic_v2Character::Look);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AProject_Relic_v2Character::Look);

		// Crouching
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AProject_Relic_v2Character::DoCrouch);

		// Sprint
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &AProject_Relic_v2Character::DoSprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AProject_Relic_v2Character::StopSprint);
	}
	else
	{
		UE_LOG(LogProject_Relic_v2, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AProject_Relic_v2Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProject_Relic_v2Character::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<AProject_Relic_v2PlayerController>(GetController());

	// Create a timeline for crouching 
	InitCrouchTimeline();

	InitDetectionMeterTimeline();

	// Add Player HUD UI to viewport 
	if (CharacterHUDWidgetClass)
	{
		CharacterHUDWidget = CreateWidget<UPlayerHUDWidget>(GetWorld(), CharacterHUDWidgetClass);
		CharacterHUDWidget->AddToViewport(0);
	}

	// Add detection indicator HUD to viewport
	if (DetectionHUDWidgetClass)
	{
		DetectionHUDWidget = CreateWidget<UUserWidget>(GetWorld(), DetectionHUDWidgetClass);
		DetectionHUDWidget->AddToViewport(1);
	}
}

void AProject_Relic_v2Character::Move(const FInputActionValue& Value)
{
	// Input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// Route the input
	DoMove(MovementVector.X, MovementVector.Y);
}

void AProject_Relic_v2Character::Look(const FInputActionValue& Value)
{
	// Input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// Route the input
	DoLook(LookAxisVector.X, LookAxisVector.Y);
}

void AProject_Relic_v2Character::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// Find out which way is forward
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// Get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Add movement 
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void AProject_Relic_v2Character::DoLook(float Yaw, float Pitch)
{
	if (GetController() != nullptr)
	{
		// Add yaw and pitch input to controller
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AProject_Relic_v2Character::DoJumpStart()
{
	// Signal the character to jump
	Jump();
}

void AProject_Relic_v2Character::DoJumpEnd()
{
	// Signal the character to stop jumping
	StopJumping();
}

void AProject_Relic_v2Character::DoCrouch()
{
	// Crouch
	if (!bIsCrouching)
	{
		// Slow down the player when crouching 
		SetMaxWalkSpeed(ECharacterMoveSpeed::Slow);

		// This lowers the camera when crouching
		if(CrouchTimelineComponent)
		{
			CrouchTimelineComponent->Play();
		}

		bIsCrouching = true;
	}
	// UnCrouch
	else
	{
		/* Check if player is aiming
			 Without this check, player can speed up incorrectly e.g move really fast while aiming */
		bool isAiming = WeaponComponent->GetIsAiming();
		if (!isAiming)
			SetMaxWalkSpeed(ECharacterMoveSpeed::Default);

		// This will raise the camera back to normal position
		if (CrouchTimelineComponent)
			CrouchTimelineComponent->Reverse();

		bIsCrouching = false;
	}
}

void AProject_Relic_v2Character::DoSprint()
{
	bool isAiming = WeaponComponent->GetIsAiming();

	// If the character is crouching
	if (bIsCrouching)
		DoCrouch();

	// If the character is aiming
	if (isAiming)
	{
		WeaponComponent->StopAiming();
	}

	SetMaxWalkSpeed(ECharacterMoveSpeed::Fast);
	bIsSprinting = true;
	DrainStamina();
}

void AProject_Relic_v2Character::StopSprint()
{
	// If the character is not crouching
	if (!bIsCrouching)
	{
		SetMaxWalkSpeed(ECharacterMoveSpeed::Default);
	}

	// If the character is crouching
	else
	{
		SetMaxWalkSpeed(ECharacterMoveSpeed::Slow);
	}
	bIsSprinting = false;
	RegenerateStamina();
}

void AProject_Relic_v2Character::DrainStamina()
{
	// Decrement the stamina value 
	float Value = CurrentStamina - DecrementStamina;
	CurrentStamina = UKismetMathLibrary::FClamp(Value, 0.0f, MaxStamina);

	// If there is no stamina left, stop sprinting
	if (CurrentStamina == 0.0f)
	{
		StopSprint();
	}
	else
	{
		// If the player is still sprinting, continue draining stamina
		if(bIsSprinting)
		{
			GetWorldTimerManager().SetTimer(SprintHandle, this, &AProject_Relic_v2Character::DrainStamina, DrainStaminaTime, false);
		}
	}
}

void AProject_Relic_v2Character::RegenerateStamina()
{
	// Increment the stamina value 
	float Value = CurrentStamina + IncrementStamina;
	CurrentStamina = UKismetMathLibrary::FClamp(Value, 0.0f, MaxStamina);

	// If there is stamina left to regain
	if (CurrentStamina != MaxStamina)
	{

		// If the player is not sprinting, continue regenerating stamina
		if (!bIsSprinting)
		{
			GetWorldTimerManager().SetTimer(SprintHandle, this, &AProject_Relic_v2Character::RegenerateStamina, RegenerateStaminaTime, false);
		}
	}
}

void AProject_Relic_v2Character::SetIsCrouching(bool isCrouching)
{
	bIsCrouching = isCrouching;
}

void AProject_Relic_v2Character::SetMaxWalkSpeed(ECharacterMoveSpeed MoveSpeed)
{
	CurrentMoveSpeed = MoveSpeed;
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeedMap[CurrentMoveSpeed];
}

void AProject_Relic_v2Character::SetCameraSocketOffset(FVector offset)
{
	CameraBoom->SocketOffset = offset;
}

FVector AProject_Relic_v2Character::GetCameraSocketOffset() const
{
	return CameraBoom->SocketOffset;
}

void AProject_Relic_v2Character::SetFOV(float FOV)
{
	FollowCamera->SetFieldOfView(FOV);
}

void AProject_Relic_v2Character::DisableMovement()
{
	GetCharacterMovement()->DisableMovement();
}

void AProject_Relic_v2Character::UnPossess()
{
	GetController()->UnPossess();
}

void AProject_Relic_v2Character::InitCrouchTimeline()
{
	if (CrouchCurveFloat)
	{
		// Create curve timeline
		CrouchTimelineComponent = NewObject<UTimelineComponent>(this, FName("CrouchTimelineAnimation"));
		CrouchTimelineComponent->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;
		BlueprintCreatedComponents.Add(CrouchTimelineComponent);

		// Bind crouch function to timeline
		FOnTimelineFloat OnTimelineCallback;
		OnTimelineCallback.BindUFunction(this, FName(TEXT("CrouchTimelineProgress")));
		CrouchTimelineComponent->AddInterpFloat(CrouchCurveFloat, OnTimelineCallback);
		CrouchTimelineComponent->SetLooping(false);
		CrouchTimelineComponent->RegisterComponent();
	}
}

void AProject_Relic_v2Character::CrouchTimelineProgress(float Value)
{
	CameraBoom->SetRelativeLocation(FVector(0.0f, 0.0f, Value));
}

void AProject_Relic_v2Character::StartDetection_Implementation(AEnemyCharacter* EnemyCharacter)
{
	EnemyCharacterRef = EnemyCharacter;
	DetectionHUD = Cast<UDetectionHUDWidget>(DetectionHUDWidget);

	if (!DetectionHUD || !EnemyCharacterRef)
		return;

	// Set detection hud to visible
	if (DetectionHUD->GetDetectionMeter()->GetVisibility() != ESlateVisibility::Visible)
	{
		DetectionHUD->SetDetectionMeterVisiblity(ESlateVisibility::Visible);
	}

	// Send enemy character reference to UI
	DetectionHUD->SetEnemyCharacter(EnemyCharacter);

	FVector PlayerLocation = GetActorLocation();
	FVector EnemyLocation = EnemyCharacterRef->GetActorLocation();
	float Distance = FVector::Distance(PlayerLocation, EnemyLocation);

	if (DetectionCurveTimelineComponent)
	{
		// Play the detection meter timeline
		DetectionCurveTimelineComponent->Play();
	}

	//// If player is too close to enemy when seen, instantly detect the player
	//if (Distance <= InstantDetection)
	//{
	//	DetectionHUD->SetDetectionMeterPercent(1.0f);
	//	OnDetected();
	//}
	//else
	//{
	//	if (DetectionCurveTimelineComponent)
	//	{
	//		// Play the detection meter timeline
	//		DetectionCurveTimelineComponent->Play();
	//	}
	//}
	
}

void AProject_Relic_v2Character::StopDetection_Implementation()
{
	if (DetectionCurveTimelineComponent)
	{
		DetectionCurveTimelineComponent->Stop();
		DetectionCurveTimelineComponent->Reverse();

	}
}

void AProject_Relic_v2Character::InitDetectionMeterTimeline()
{
	/* Create detection curve timeline object */
	DetectionCurveTimelineComponent = NewObject<UTimelineComponent>(this, FName("DetectionTimelineAnimation"));
	DetectionCurveTimelineComponent->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;
	BlueprintCreatedComponents.Add(DetectionCurveTimelineComponent);

	/* Bind function that is called while timeline is updating */
	FOnTimelineFloat DetectionMeterCallback;
	DetectionMeterCallback.BindUFunction(this, FName(TEXT("DetectionMeterProgress")));
	DetectionCurveTimelineComponent->AddInterpFloat(DetectionMeterCurveFloat, DetectionMeterCallback);

	/* Bind function that is called when the timeline is finished */
	FOnTimelineEvent DetectionMeterFinishedCallback;
	DetectionMeterFinishedCallback.BindUFunction(this, FName(TEXT("OnDetectionMeterTimelineFinished")));
	DetectionCurveTimelineComponent->SetTimelineFinishedFunc(DetectionMeterFinishedCallback);

	// Timeline defaults
	DetectionCurveTimelineComponent->SetLooping(false);
	DetectionCurveTimelineComponent->RegisterComponent();
}

void AProject_Relic_v2Character::DetectionMeterProgress(float DetectionMeterValue)
{
	// Continously set the UI for the detection meter progress 
	if (DetectionHUD)
	{
		DetectionHUD->SetDetectionMeterPercent(DetectionMeterValue);
	}
}

void AProject_Relic_v2Character::OnDetectionMeterTimelineFinished()
{
	// Get the position of the timeline comoponent
	float Position = DetectionCurveTimelineComponent->GetPlaybackPosition();

	// If the timeline is going backwards
	if (Position <= 0.0f)
	{
		/* Set a timer for detecting the player */
		GetWorldTimerManager().ClearTimer(DetectionMeterDelayHandle);
		GetWorldTimerManager().SetTimer(DetectionMeterDelayHandle, this, &AProject_Relic_v2Character::OnDetectionMeterDelayFinished, 0.5f, false);
	}
	else
	{
		OnDetected();
	}
}

void AProject_Relic_v2Character::OnDetected()
{
	// If the timeline is going forwards
	if (EnemyCharacterRef)
	{
		/* Communicate with the interface and tell the enemy to start chasing the player */
		AEnemyController* EnemyControllerRef = Cast<AEnemyController>(EnemyCharacterRef->GetController());
		if( EnemyControllerRef )
			IDetectionInterface::Execute_StartChase(EnemyControllerRef);
	}

	if (DetectionHUD)
	{
		// Set the meter colour to indicate that the player has been fully detected 
		DetectionHUD->SetDetectionMeterColour(FLinearColor::Red);
	}
}

void AProject_Relic_v2Character::OnDetectionMeterDelayFinished()
{
	/* If the player has not been fully detected */
	if (!DetectionHUD || !EnemyCharacterRef)
		return;

	/* Reset the Detection HUD back to default */
	DetectionHUD->SetDetectionMeterVisiblity(ESlateVisibility::Hidden);
	DetectionHUD->SetDetectionMeterColour(FLinearColor::Yellow);
	DetectionHUD->SetEnemyCharacter(nullptr);

	/* Communicate with the interface and tell the enemy to stop chasing the player */
	AEnemyController* EnemyControllerRef = Cast<AEnemyController>(EnemyCharacterRef->GetController());
	if (EnemyControllerRef)
		IDetectionInterface::Execute_StopChase(EnemyControllerRef);

}

void AProject_Relic_v2Character::OnTakedownComplete()
{
	if (PlayerController)
		PlayerController->Possess(this);
}

void AProject_Relic_v2Character::Takedown_Implementation()
{
	if (bIsCrouching)
		DoCrouch();

	if (AnimTakedown)
		TakedownAnimationTime = PlayAnimMontage(AnimTakedown);

		GetWorldTimerManager().SetTimer(TakedownFinishedHandle, this, &AProject_Relic_v2Character::OnTakedownComplete, TakedownAnimationTime, false);


}