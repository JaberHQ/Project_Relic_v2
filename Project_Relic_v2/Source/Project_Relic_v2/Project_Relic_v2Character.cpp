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
#include "Project_Relic_v2.h"


AProject_Relic_v2Character::AProject_Relic_v2Character()
	:SlowMoveSpeed(150.0f), DefaultMoveSpeed(500.0f)
{
	PrimaryActorTick.bCanEverTick = false;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
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

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
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

	// Create a timeline for crouching 
	InitCrouchTimeline();
}

void AProject_Relic_v2Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// route the input
	DoMove(MovementVector.X, MovementVector.Y);
}

void AProject_Relic_v2Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// route the input
	DoLook(LookAxisVector.X, LookAxisVector.Y);
}

void AProject_Relic_v2Character::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void AProject_Relic_v2Character::DoLook(float Yaw, float Pitch)
{
	if (GetController() != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AProject_Relic_v2Character::DoJumpStart()
{
	// signal the character to jump
	Jump();
}

void AProject_Relic_v2Character::DoJumpEnd()
{
	// signal the character to stop jumping
	StopJumping();
}

void AProject_Relic_v2Character::DoCrouch()
{
	// Crouch
	if(!bIsCrouching)
	{
		// Slow down the player when crouching 
		SetMaxWalkSpeed(SlowMoveSpeed);

		if(CrouchTimelineComponent)
		{
			// This lowers the camera when crouching
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
		if(!isAiming)
			SetMaxWalkSpeed(DefaultMoveSpeed);

		
		if(CrouchTimelineComponent)
			// This will raise the camera back to normal position
			CrouchTimelineComponent->Reverse();

		bIsCrouching = false;
	}
}

void AProject_Relic_v2Character::SetIsCrouching(bool isCrouching)
{
	bIsCrouching = isCrouching;
}

bool AProject_Relic_v2Character::GetIsCrouching() const
{
	return bIsCrouching;
}

void AProject_Relic_v2Character::SetMaxWalkSpeed(float MaxWalkSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
}

void AProject_Relic_v2Character::SetMaxWalkSpeedToSlow()
{
	GetCharacterMovement()->MaxWalkSpeed = SlowMoveSpeed;
}

void AProject_Relic_v2Character::SetMaxWalkSpeedToDefault()
{
	GetCharacterMovement()->MaxWalkSpeed = DefaultMoveSpeed;

}

FVector AProject_Relic_v2Character::GetCameraSocketOffset() const
{
	return CameraBoom->SocketOffset;
}

void AProject_Relic_v2Character::SetCameraSocketOffset(FVector offset)
{
	CameraBoom->SocketOffset = offset;
}

void AProject_Relic_v2Character::SetFOV(float FOV)
{
	FollowCamera->SetFieldOfView(FOV);
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
		FOnTimelineFloat onTimelineCallback;
		onTimelineCallback.BindUFunction(this, FName(TEXT("CrouchTimelineProgress")));
		CrouchTimelineComponent->AddInterpFloat(CrouchCurveFloat, onTimelineCallback);
		CrouchTimelineComponent->SetLooping(false);
		CrouchTimelineComponent->RegisterComponent();
	}
}

void AProject_Relic_v2Character::CrouchTimelineProgress(float Value)
{
	CameraBoom->SetRelativeLocation(FVector(0.0f, 0.0f, Value));
}
