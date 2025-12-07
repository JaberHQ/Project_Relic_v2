// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"
#include "Project_Relic_v2Character.h"
// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	/* Find the blueprint Primary Gun Class through reference */
	
	static ConstructorHelpers::FClassFinder<ABaseWeapon> PrimaryWeaponFinder(TEXT("/Game/Blueprints/Weapon/BP_AutomaticRifle"));
	if(PrimaryWeaponFinder.Class)
	{
		PrimaryWeaponRef = PrimaryWeaponFinder.Class;
	}

	// ...
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<AProject_Relic_v2Character>(GetOwner());

	if(PrimaryWeaponRef)
	{
		FVector weaponPlacementLocation(20.0f, 20.0f, -20.0f);
		FRotator weaponPlacementRotator(0.0f, 0.0f, 0.0f);

		const FActorSpawnParameters spawnInfo;
		PrimaryWeapon = SpawnWeapon(PrimaryWeaponRef, weaponPlacementLocation, weaponPlacementRotator, spawnInfo);
	}

	if(PrimaryWeapon)
	{
		const FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, true);
		PrimaryWeapon->AttachToComponent(Character->GetMesh(), attachmentRules, FName(TEXT("hand_rSocket")));
	}

	if(APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(FireMappingContext, 1);
		}
		if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Triggered, this, &UWeaponComponent::DoAim);

		}
	}

	InitADSTimeline();

}


// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ABaseWeapon* UWeaponComponent::SpawnWeapon(const TSubclassOf<ABaseWeapon> weaponRef, const FTransform transform, const FActorSpawnParameters spawnInfo)
{
	return GetWorld()->SpawnActor<ABaseWeapon>(weaponRef, transform, spawnInfo);
}

ABaseWeapon* UWeaponComponent::SpawnWeapon(const TSubclassOf<ABaseWeapon> weaponRef, const FVector location, const FRotator rotator, const FActorSpawnParameters spawnInfo)
{
	return GetWorld()->SpawnActor<ABaseWeapon>(weaponRef, location, rotator, spawnInfo);
}

void UWeaponComponent::InitADSTimeline()
{
	if(ADSCameraOffsetCurveFloat && ADSFieldOfViewCurveFloat)
	{
		ADSCurveTimeline = NewObject<UTimelineComponent>(this, FName("ADSTimelineAnimation"));
		ADSCurveTimeline->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;
		Character->BlueprintCreatedComponents.Add(ADSCurveTimeline);

		/* Bind the ADS function to the timeline */
		FOnTimelineFloat cameraOffsetCallback;
		cameraOffsetCallback.BindUFunction(this, FName(TEXT("ADSCameraOffsetProgress")));
		ADSCurveTimeline->AddInterpFloat(ADSCameraOffsetCurveFloat, cameraOffsetCallback);

		FOnTimelineFloat fOVCallback;
		fOVCallback.BindUFunction(this, FName(TEXT("ADSFieldOfViewProgress")));
		ADSCurveTimeline->AddInterpFloat(ADSFieldOfViewCurveFloat, fOVCallback);
		
		ADSCurveTimeline->SetLooping(false);
		ADSCurveTimeline->RegisterComponent();
	}
}

void UWeaponComponent::ADSCameraOffsetProgress(float CameraOffsetX)
{
	FVector cameraOffset = Character->GetCameraSocketOffset();
	FVector offset = FVector(CameraOffsetX, cameraOffset.Y, cameraOffset.Z);
	Character->SetCameraSocketOffset(offset);
}

void UWeaponComponent::ADSFieldOfViewProgress(float FOV)
{
	Character->SetFOV(FOV);
}

void UWeaponComponent::SetIsAiming(bool isAiming)
{
	bIsAiming = isAiming;
}

bool UWeaponComponent::GetIsAiming() const
{
	return bIsAiming;
}

void UWeaponComponent::DoAim()
{
	// Aim
	if(!bIsAiming)
	{
		Character->SetMaxWalkSpeed(150.0f);

		if(ADSCurveTimeline)
			ADSCurveTimeline->Play();

		bIsAiming = true;
	}

	// Stop Aiming
	else
	{
		Character->SetMaxWalkSpeed(500.0f);

		if(ADSCurveTimeline)
			ADSCurveTimeline->Reverse();

		bIsAiming = false;
	}
}