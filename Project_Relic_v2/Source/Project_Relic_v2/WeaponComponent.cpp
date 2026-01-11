// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "EnemyCharacter.h"
#include "Project_Relic_v2Character.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
	:TimeBetweenShots(0.15f)
	, ShootingDistance(2000.0f)
	, WeaponIndex(0)
	, CurrentWeapon(EAmmunitionType::Primary)
	, bCanShoot(true)
	, bIsShooting(false)
	, bIsReloading(false)
	, bIsAiming(false)
	, ReloadTime(2.0f)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	/* Find the blueprint Primary Gun Class through reference */
	static ConstructorHelpers::FClassFinder<ABaseWeapon> PrimaryWeaponFinder(TEXT("/Game/Blueprints/Weapon/BP_AutomaticRifle"));
	if (PrimaryWeaponFinder.Class)
	{
		PrimaryWeaponRef = PrimaryWeaponFinder.Class;
	}

	/* Find the blueprint Secondary Gun Class through reference */
	static ConstructorHelpers::FClassFinder<ABaseWeapon> SecondaryWeaponFinder(TEXT("/Game/Blueprints/Weapon/BP_SingleShotRifle"));
	if (SecondaryWeaponFinder.Class)
	{
		SecondaryWeaponRef = SecondaryWeaponFinder.Class;
	}
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// Get player character reference
	Character = Cast<AProject_Relic_v2Character>(GetOwner());
	if (Character)
	{
		InitInputs();
		InventoryComponent = Character->GetInventoryComponent();
		InitWeapons();
		InitAimingTimeline();
	}
}

//void UWeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
//{
//	if(Character == nullptr)
//	{
//		return;
//	}
//
//	if(APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
//	{
//		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
//		{
//			Subsystem->RemoveMappingContext(FireMappingContext);
//		}
//	}
//}

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

void UWeaponComponent::InitAimingTimeline()
{
	if (AimingCameraOffsetCurveFloat && AimingFieldOfViewCurveFloat)
	{
		/* Initialise curve timeline */
		AimingCurveTimeline = NewObject<UTimelineComponent>(this, FName("AimingTimelineAnimation"));
		AimingCurveTimeline->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;
		Character->BlueprintCreatedComponents.Add(AimingCurveTimeline);

		/* Bind the ADS function to the timeline */
		FOnTimelineFloat CameraOffsetCallback;
		CameraOffsetCallback.BindUFunction(this, FName(TEXT("AimingCameraOffsetProgress")));
		AimingCurveTimeline->AddInterpFloat(AimingCameraOffsetCurveFloat, CameraOffsetCallback);

		/* Bind the ADS function to the timeline */
		FOnTimelineFloat FOVCallback;
		FOVCallback.BindUFunction(this, FName(TEXT("AimingFieldOfViewProgress")));
		AimingCurveTimeline->AddInterpFloat(AimingFieldOfViewCurveFloat, FOVCallback);
		
		AimingCurveTimeline->SetLooping(false);
		AimingCurveTimeline->RegisterComponent();
	}
}

void UWeaponComponent::InitWeapons()
{
	/* Spawn guns */
	const FVector WeaponPlacementLoc(20.0f, 20.0f, -20.0f);
	const FRotator WeaponPlacementRot(0.0f, 0.0f, 0.0f);

	const FActorSpawnParameters SpawnInfo;
	PrimaryWeapon = SpawnWeapon(PrimaryWeaponRef, WeaponPlacementLoc, WeaponPlacementRot, SpawnInfo);
	SecondaryWeapon = SpawnWeapon(SecondaryWeaponRef, WeaponPlacementLoc, WeaponPlacementRot, SpawnInfo);

	/* Set primary gun defaults */
	if (PrimaryWeapon)
	{
		WeaponArray.Add(PrimaryWeapon);
		bIsWeaponActiveMap.Add(EAmmunitionType::Primary, false);
		bIsAutomaticMap.Add(EAmmunitionType::Primary, true);
	}

	/* Set secondary gun defaults */
	if (SecondaryWeapon)
	{
		WeaponArray.Add(SecondaryWeapon);
		bIsWeaponActiveMap.Add(EAmmunitionType::Secondary, false);
		bIsAutomaticMap.Add(EAmmunitionType::Secondary, false);
	}

	AttachWeapon();

	if (!WeaponArray.IsEmpty())
	{
		// Set current weapon as active
		bIsWeaponActiveMap[CurrentWeapon] = true;
	}
}

void UWeaponComponent::InitInputs()
{

	if (APlayerController* PlayerController = Cast<APlayerController>( Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>( PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext( FireMappingContext, 1 );
		}
		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>( PlayerController->InputComponent))
		{
			/* ADS (Aim Down Sights) input actions
				As the aim button should be held and not toggled, two actions are bound */
			EnhancedInputComponent->BindAction( AimAction, ETriggerEvent::Triggered, this, &UWeaponComponent::StartAiming );
			EnhancedInputComponent->BindAction( AimAction, ETriggerEvent::Completed, this, &UWeaponComponent::StopAiming );

			/* Shooting input actions */
			EnhancedInputComponent->BindAction( ShootAction, ETriggerEvent::Started, this, &UWeaponComponent::StartShooting );
			EnhancedInputComponent->BindAction( ShootAction, ETriggerEvent::Completed, this, &UWeaponComponent::StopShooting );

			/* Weapon input actions */
			EnhancedInputComponent->BindAction( SwitchWeaponsAction, ETriggerEvent::Triggered, this, &UWeaponComponent::SwitchWeapons );
			EnhancedInputComponent->BindAction( ReloadAction, ETriggerEvent::Triggered, this, &UWeaponComponent::StartReloadWeaponTimer );
		}
	}
}

void UWeaponComponent::AimingCameraOffsetProgress(float CameraOffsetX)
{
	// Get the current camera offset from the player character
	FVector CameraOffset = Character->GetCameraSocketOffset();

	// Set the new socket offset
	FVector Offset = FVector(CameraOffsetX, CameraOffset.Y, CameraOffset.Z);
	Character->SetCameraSocketOffset(Offset);
}

void UWeaponComponent::AimingFieldOfViewProgress(float FOV)
{
	Character->SetFOV(FOV);
}

void UWeaponComponent::StartShooting()
{
	bool bIsSprinting = Character->GetIsSprinting();
	if (!bIsSprinting && bIsAiming)
	{
		Shoot();
		if (bIsAutomaticMap[CurrentWeapon])
			// Automatic shooting timer 
			Character->GetWorldTimerManager().SetTimer(HandleRefire, this, &UWeaponComponent::Shoot, TimeBetweenShots, true);
	}

}

void UWeaponComponent::StopShooting()
{
	Character->GetWorldTimerManager().ClearTimer(HandleRefire);
	bIsShooting = false;
}

void UWeaponComponent::Shoot()
{
	if (Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}
	
	if (InventoryComponent)
	{
		// If the player has ammunition and can shoot
		if (GetCurrentAmmoOfCurrentWeapon() != 0 && bCanShoot)
		{
			bIsShooting = true;

			// Decrement ammunition counter of current weapon
			InventoryComponent->ConsumeAmmo(CurrentWeapon);

			// Shoot raycast line
			RaycastShot();

			// Try and play the sound if specified
			PlayGunShotSFX();
		}

		// If the player has no ammunition in magazine
		if (GetCurrentAmmoOfCurrentWeapon() == 0 && bCanShoot)
		{
			if (ShouldPlayerReload())
			{
				StartReloadWeaponTimer();
			}
			else
			{
				StopShooting();
			}
		}
	}
}

void UWeaponComponent::AttachWeapon()
{
	/* Setup weapon attachment */
	const FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	for (int i = 0; i < WeaponArray.Num(); i++)
	{
		WeaponArray[i]->GetWeaponSkeletalMeshComponent()->
			AttachToComponent(Character->GetMesh(), AttachmentRules, FName(TEXT("hand_rSocket")));
	}
	SwitchToNextWeapon();
}

void UWeaponComponent::SwitchWeapons(const FInputActionValue& index)
{
	/* Calculate correct weapon index to switch to */
	const float TempIndex = index.Get<float>();
	const int TempValue = UKismetMathLibrary::FTrunc(TempIndex);
	const int TempWeaponIndex = TempValue + WeaponIndex;

	// Set weapon index
	if (WeaponArray.IsValidIndex(TempWeaponIndex))
	{
		WeaponIndex = TempWeaponIndex;
	}

	// Otherwise go to the top or the bottom of the array depending on the direction of the mouse scroll
	else
	{
		WeaponIndex < 0 ? WeaponIndex = WeaponArray.Num() - 1 : WeaponIndex = 0;
	}

	SwitchToNextWeapon();
	StopShooting();
	ClearReloadWeaponTimer();

	// Automatic reload
	if (GetReserveAmmoOfCurrentWeapon() == 0)
	{
		StartReloadWeaponTimer();
	}
	else
	{
		bCanShoot = true;
	}

	/*if(bIsAiming)
	{
		StopADS();
	}*/
}

void UWeaponComponent::RaycastShot()
{
	FVector Location;
	FRotator Rotation;
	FHitResult Hit;

	Character->GetController()->GetPlayerViewPoint(Location, Rotation); // This can be changed to camera ----

	FVector Start = Location;
	FVector End = Start + (Rotation.Vector() * ShootingDistance);

	// Send line trace from players pov
	FCollisionQueryParams TraceParams;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f); // DEBUG -----------------------

	// If line trace has hit an object
	if (bHit)
	{
		/* If AI has been hit */
		AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(Hit.GetActor());
		if (EnemyCharacter)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Enemy has been hit!")); // DEBUG -----------------------
			DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(5, 5, 5), FColor::Blue, false, 2.0f); // DEBUG -----------------------
			
			EnemyCharacter->GetHealthComponent()->TakeDamage(10.0f);
		}
	}
}

void UWeaponComponent::SwitchToNextWeapon()
{
	/* Set gun actors as invisible */
	for (int i = 0; i < WeaponArray.Num(); i++)
	{
		WeaponArray[i]->SetActorHiddenInGame(true);
	}

	/* Set all gun as inactive */
	for (TPair<EAmmunitionType, bool>& Pair : bIsWeaponActiveMap)
	{
		Pair.Value = false;
	}

	switch (WeaponIndex)
	{
		/* Primary Weapon */
	case 0:

		CurrentWeapon = EAmmunitionType::Primary;
		break;

		/* Secondary Weapon*/
	case 1:

		CurrentWeapon = EAmmunitionType::Secondary;
		break;

	default:
		break;
	}

	// Set current weapon to be visible and active
	WeaponArray[WeaponIndex]->SetActorHiddenInGame(false);
	bIsWeaponActiveMap[CurrentWeapon] = true;
}

void UWeaponComponent::ReloadWeapon()
{
	// Calculate the ammunition counter of the weapon after reload
	InventoryComponent->ReloadWeapon(CurrentWeapon);

	ClearReloadWeaponTimer();

	bIsReloading = false;

	// Allow the player to shoot again
	bCanShoot = true;
}

void UWeaponComponent::StartReloadWeaponTimer()
{
	if (ShouldPlayerReload() && bCanShoot)
	{
		bCanShoot = false; // Stop the player from shooting

		bIsReloading = true;

		StopAiming();

		Character->GetWorldTimerManager().SetTimer(HandleReload, this, &UWeaponComponent::ReloadWeapon, ReloadTime, true);
	}
}

void UWeaponComponent::ClearReloadWeaponTimer()
{
	Character->GetWorldTimerManager().ClearTimer(HandleReload);
}

bool UWeaponComponent::ShouldPlayerReload() const
{
	// If there is reserve ammo left
	if (GetReserveAmmoOfCurrentWeapon() != 0)
	{
		// If the current ammo is less than maximum ammo of catridge
			// Ensures the owner needs to reload
		if (GetCurrentAmmoOfCurrentWeapon() < GetMaxAmmoCatridgeOfCurrentWeapon())
			return true;
	}
	return false;
}

void UWeaponComponent::PlayGunShotSFX()
{
	/*if(WeaponArray[WeaponIndex]->FireSound != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, WeaponArray[WeaponIndex]->FireSound, Character->GetActorLocation());*/
}

int32 UWeaponComponent::GetMaxAmmoCatridgeOfCurrentWeapon() const
{
	return InventoryComponent->GetMaxAmmoInCatridgeCount(CurrentWeapon);
}

int32 UWeaponComponent::GetCurrentAmmoOfCurrentWeapon() const
{
	return InventoryComponent->GetCurrentAmmoCount(CurrentWeapon);
}

int32 UWeaponComponent::GetReserveAmmoOfCurrentWeapon() const
{
	return InventoryComponent->GetReserveAmmoCount(CurrentWeapon);
}

void UWeaponComponent::SetIsAiming(bool IsAiming)
{
	bIsAiming = IsAiming;
}

void UWeaponComponent::StartAiming()
{
	bool bIsSprinting = Character->GetIsSprinting();

	// Aim 
	if (!bIsAiming && !bIsReloading && !bIsSprinting)
	{
		// Set character speed move to slow
		Character->SetMaxWalkSpeed(ECharacterMoveSpeed::Slow);
		
		if(AimingCurveTimeline)
			AimingCurveTimeline->Play();

		bIsAiming = true;
	}
}

void UWeaponComponent::StopAiming()
{
	if (bIsAiming)
	{
		bool bIsCrouching = Character->GetIsCrouching();
		if (!bIsCrouching)
			// Set character speed move to default
			Character->SetMaxWalkSpeed(ECharacterMoveSpeed::Default);

		if (AimingCurveTimeline)
			AimingCurveTimeline->Reverse();

		bIsAiming = false;
	}
}
