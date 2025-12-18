// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
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
	if(PrimaryWeaponFinder.Class)
	{
		PrimaryWeaponRef = PrimaryWeaponFinder.Class;
	}

	/* Find the blueprint Secondary Gun Class through reference */
	static ConstructorHelpers::FClassFinder<ABaseWeapon> SecondaryWeaponFinder(TEXT("/Game/Blueprints/Weapon/BP_SingleShotRifle"));
	if(SecondaryWeaponFinder.Class)
	{
		SecondaryWeaponRef = SecondaryWeaponFinder.Class;
	}
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<AProject_Relic_v2Character>(GetOwner());


	if(Character)
	{
		InitInputs();
		InventoryComponent = Character->GetInventoryComponent();
		InitWeapons();
		InitADSTimeline();
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

void UWeaponComponent::InitWeapons()
{
	/* Spawn guns */
	FVector weaponPlacementLocation(20.0f, 20.0f, -20.0f);
	FRotator weaponPlacementRotator(0.0f, 0.0f, 0.0f);

	const FActorSpawnParameters spawnInfo;
	PrimaryWeapon = SpawnWeapon(PrimaryWeaponRef, weaponPlacementLocation, weaponPlacementRotator, spawnInfo);
	SecondaryWeapon = SpawnWeapon(SecondaryWeaponRef, weaponPlacementLocation, weaponPlacementRotator, spawnInfo);

	/* Set primary gun defaults */
	if(PrimaryWeapon)
	{
		WeaponArray.Add(PrimaryWeapon);
		bIsWeaponActiveMap.Add(EAmmunitionType::Primary, false);
		bIsAutomaticMap.Add(EAmmunitionType::Primary, true);
	}

	/* Set secondary gun defaults */
	if(SecondaryWeapon)
	{
		WeaponArray.Add(SecondaryWeapon);
		bIsWeaponActiveMap.Add(EAmmunitionType::Secondary, false);
		bIsAutomaticMap.Add(EAmmunitionType::Secondary, false);
	}

	AttachWeapon();

	if(!WeaponArray.IsEmpty())
	{
		/* Set current weapon as active */
		bIsWeaponActiveMap[CurrentWeapon] = true;
	}
}

void UWeaponComponent::InitInputs()
{

	if( APlayerController* PlayerController = Cast<APlayerController>( Character->GetController() ) )
	{
		if( UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>( PlayerController->GetLocalPlayer() ) )
		{
			Subsystem->AddMappingContext( FireMappingContext, 1 );
		}
		if( UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>( PlayerController->InputComponent ) )
		{
			/* ADS (Aim Down Sights) input actions
				As the aim button should be held and not toggled, two actions are bound */
			EnhancedInputComponent->BindAction( AimAction, ETriggerEvent::Triggered, this, &UWeaponComponent::ADS );
			EnhancedInputComponent->BindAction( AimAction, ETriggerEvent::Completed, this, &UWeaponComponent::StopADS );

			/* Shooting input actions */
			EnhancedInputComponent->BindAction( ShootAction, ETriggerEvent::Started, this, &UWeaponComponent::StartShooting );
			EnhancedInputComponent->BindAction( ShootAction, ETriggerEvent::Completed, this, &UWeaponComponent::StopShooting );

			/* Weapon input actions */
			EnhancedInputComponent->BindAction( SwitchWeaponsAction, ETriggerEvent::Triggered, this, &UWeaponComponent::SwitchWeapons );
			EnhancedInputComponent->BindAction( ReloadAction, ETriggerEvent::Triggered, this, &UWeaponComponent::StartReloadWeaponTimer );
		}
	}
}

void UWeaponComponent::ADSCameraOffsetProgress(float CameraOffsetX)
{
	// Get the current camera offset from the player character
	FVector cameraOffset = Character->GetCameraSocketOffset();

	// Set the new socket offset
	FVector offset = FVector(CameraOffsetX, cameraOffset.Y, cameraOffset.Z);
	Character->SetCameraSocketOffset(offset);
}

void UWeaponComponent::ADSFieldOfViewProgress(float FOV)
{
	Character->SetFOV(FOV);
}

void UWeaponComponent::StartShooting()
{
	bool bIsSprinting = Character->GetIsSprinting();
	if(!bIsSprinting)
	{
		Shoot();
		if(bIsAutomaticMap[CurrentWeapon])
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
	if(Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}
	
	if(InventoryComponent)
	{
		// If the player has ammunition and can shoot
		if(GetCurrentAmmoOfCurrentWeapon() != 0 && bCanShoot)
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
		if(GetCurrentAmmoOfCurrentWeapon() == 0 && bCanShoot)
		{
			if(ShouldPlayerReload())
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
	const FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, true);
	for(int i = 0; i < WeaponArray.Num(); i++)
	{
		WeaponArray[i]->GetWeaponSkeletalMeshComponent()->
			AttachToComponent(Character->GetMesh(), attachmentRules, FName(TEXT("hand_rSocket")));
	}
	SwitchToNextWeapon();
}

void UWeaponComponent::SwitchWeapons(const FInputActionValue& index)
{
	/* Calculate correct weapon index to switch to */
	const float tempIndex = index.Get<float>();
	const int tempValue = UKismetMathLibrary::FTrunc(tempIndex);
	const int tempWeaponIndex = tempValue + WeaponIndex;

	// Set weapon index
	if(WeaponArray.IsValidIndex(tempWeaponIndex))
	{
		WeaponIndex = tempWeaponIndex;
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
	if(GetReserveAmmoOfCurrentWeapon() == 0)
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
	FVector location;
	FRotator rotaton;
	FHitResult hit;

	Character->GetController()->GetPlayerViewPoint(location, rotaton); // This can be changed to camera ----

	FVector start = location;
	FVector end = start + (rotaton.Vector() * ShootingDistance);

	// Send line trace from players pov
	FCollisionQueryParams traceParams;
	bool bHit = GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, traceParams);

	DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 2.0f); // DEBUG -----------------------

	// If line trace has hit an object
	if(bHit)
	{
		/* --------------------------------------- TO DO AI --------------------------------------- */
		/* If AI has been hit */
		//AEnemyAIManager* enemyManager = Cast<AEnemyAIManager>(hit.GetActor());
		//if(enemyManager)
		//{
		//	enemyManager->GetHealthComponent()->TakeDamage();
		//	//DrawDebugBox(GetWorld(), hit.ImpactPoint, FVector(5, 5, 5), FColor::Blue, false, 2.0f); // DEBUG -----------------------
		//}
	}
}

void UWeaponComponent::SwitchToNextWeapon()
{
	/* Set gun actors as invisible */
	for(int i = 0; i < WeaponArray.Num(); i++)
	{
		WeaponArray[i]->SetActorHiddenInGame(true);
	}

	/* Set all gun as inactive */
	for(TPair<EAmmunitionType, bool>& pair : bIsWeaponActiveMap)
	{
		pair.Value = false;
	}

	switch(WeaponIndex)
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
	if(ShouldPlayerReload() && bCanShoot)
	{
		bCanShoot = false; // Stop the player from shooting

		bIsReloading = true;

		StopADS();

		Character->GetWorldTimerManager().SetTimer(HandleReload, this, &UWeaponComponent::ReloadWeapon, ReloadTime, true);
	}
}

void UWeaponComponent::ClearReloadWeaponTimer()
{
	Character->GetWorldTimerManager().ClearTimer(HandleReload);
}

bool UWeaponComponent::ShouldPlayerReload() const
{
	if(GetReserveAmmoOfCurrentWeapon() != 0)
		return GetCurrentAmmoOfCurrentWeapon() < GetMaxAmmoCatridgeOfCurrentWeapon() ? true : false;

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

void UWeaponComponent::ADS()
{
	bool bIsSprinting = Character->GetIsSprinting();

	// Aim
	if(!bIsAiming && !bIsReloading && !bIsSprinting)
	{
		// Set character speed move to slow
		Character->SetMaxWalkSpeed(ECharacterMoveSpeed::Slow);
		
		if(ADSCurveTimeline)
			ADSCurveTimeline->Play();

		bIsAiming = true;
	}
}

void UWeaponComponent::StopADS()
{
	if(bIsAiming)
	{
		bool bIsCrouching = Character->GetIsCrouching();
		if(!bIsCrouching)
			// Set character speed move to default
			Character->SetMaxWalkSpeed(ECharacterMoveSpeed::Default);

		if(ADSCurveTimeline)
			ADSCurveTimeline->Reverse();

		bIsAiming = false;
	}
}
