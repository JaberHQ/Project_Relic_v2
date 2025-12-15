// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h" 
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseWeapon.h"
#include "InventoryComponent.h"
#include "WeaponComponent.generated.h"

class AProject_Relic_v2Character;
class UCurveFloat;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_RELIC_V2_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetIsAiming(bool IsAiming);

	UFUNCTION(BlueprintCallable, Category = "Input")
	bool GetIsAiming() const { return bIsAiming; }

	/* Get the current ammunition count of the current weapon from inventory component */
	UFUNCTION(BlueprintCallable)
	int32 GetCurrentAmmoOfCurrentWeapon() const;

	/* Get the total ammunition count of the current weapon from inventory component */
	UFUNCTION(BlueprintCallable)
	int32 GetReserveAmmoOfCurrentWeapon() const;

	/* Get boolean to see if player is firing */
	UFUNCTION(BlueprintCallable)
	bool GetIsShooting() const { return bIsShooting; }

	/* Get the boolean to see if player is reloading */
	UFUNCTION(BlueprintCallable)
	bool GetIsReloading() const{ return bIsReloading; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/*UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;*/

	/** Handles the Aim down sights (ADS) actions */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void ADS();

	/** Handles the actions after the Aim Down Sights (ADS) input is complete */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void StopADS();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	/* Spawn weapon using transform and reference */
	ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon> WeaponRef, const FTransform Transform, const FActorSpawnParameters SpawnInfo);

	/* Spawn weapon using location, rotation and reference */
	ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon> WeaponRef, const FVector Location, const FRotator Rotator, const FActorSpawnParameters SpawnInfo);

	/** Initialise the ADS timeline component */
	void InitADSTimeline();

	/* Set weapon defaults */
	void InitWeapons();

	/* Initialise weapon enhanced input */
	void InitInputs();

	UFUNCTION()
	void ADSCameraOffsetProgress(float CameraOffsetX);

	UFUNCTION()
	void ADSFieldOfViewProgress(float FOV);

	/* Start shooting
	   Sets timer for automatic firing */
	void StartShooting();

	/* Stop shooting
	   Clears timer for automatic firing */
	void StopShooting();

	/* Fire single shot */
	void Shoot();

	/** Attaches the actor to a FirstPersonCharacter */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	void AttachWeapon();

	/* Calculate the correct weapon index */
	UFUNCTION()
	void SwitchWeapons(const FInputActionValue& index);

	/* Create line trace for shooting */
	void RaycastShot();

	/* Handles the switching of weapons */
	void SwitchToNextWeapon();

	/* Handles the reloading of the current weapon */
	void ReloadWeapon();

	/* Start the reload weapon timer, also sets booleans to stop shooting and start reloading */
	void StartReloadWeaponTimer();

	/* Clear the reload weapon timer */
	void ClearReloadWeaponTimer();

	/* Evaluate if the player should reload or not */
	bool ShouldPlayerReload() const;

	/* Play sound effects for shooting the weapon */
	void PlayGunShotSFX();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* AimAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ReloadAction;

	/** Fire Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* SwitchWeaponsAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Float")
	UCurveFloat* ADSCameraOffsetCurveFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Float")
	UCurveFloat* ADSFieldOfViewCurveFloat;

protected:
	/* Seconds to wait between shots */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float TimeBetweenShots;

	/** Line trace distance (how far the player can shoot) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float ShootingDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* FireMappingContext;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	ABaseWeapon* PrimaryWeapon;

	/* Secondary gun */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	ABaseWeapon* SecondaryWeapon;

	UPROPERTY()
	UTimelineComponent* ADSCurveTimeline;

	AProject_Relic_v2Character* Character;
	
	// Inventory component reference
	UInventoryComponent* InventoryComponent;

	// Shooting timer handle 
	FTimerHandle HandleRefire;

	// Index for the gun the character is currently using 
	int32 WeaponIndex;

	//Array that holds all weapons (guns) as child actors 
	TArray<ABaseWeapon*> WeaponArray;

	/* Ammunition mappings */
	TMap<EAmmunitionType, bool> bIsWeaponActiveMap; // Which weapon is active currently
	TMap<EAmmunitionType, bool> bIsAutomaticMap; // Which weapons are automatic 

	// Holds what weapon is currently active
	EAmmunitionType CurrentWeapon;

	bool bIsAiming;
	bool bCanShoot;
	bool bIsShooting;
	bool bIsReloading;

	float ReloadTime;

	FTimerHandle HandleReload;

	FVector WeaponPlacementLocation;
	FVector MeshPlacementLocation;

	TSubclassOf<ABaseWeapon> PrimaryWeaponRef;
	TSubclassOf<ABaseWeapon> SecondaryWeaponRef;

	/* Get the maximum ammount the current weapon can reload up to */
	int32 GetMaxAmmoCatridgeOfCurrentWeapon() const;
	
};
