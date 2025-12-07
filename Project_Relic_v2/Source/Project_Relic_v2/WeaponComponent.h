// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h" 
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseWeapon.h"
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
	virtual void DoAim();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetIsAiming(bool isAiming);

	UFUNCTION(BlueprintCallable, Category = "Input")
	bool GetIsAiming() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	/* Spawn weapon using transform and reference */
	ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon> WeaponRef, const FTransform Transform, const FActorSpawnParameters SpawnInfo);

	/* Spawn weapon using location, rotation and reference */
	ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon> WeaponRef, const FVector Location, const FRotator Rotator, const FActorSpawnParameters SpawnInfo);

	void InitADSTimeline();

	UFUNCTION()
	void ADSCameraOffsetProgress(float CameraOffsetX);

	UFUNCTION()
	void ADSFieldOfViewProgress(float FOV);


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* AimAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Float")
	UCurveFloat* ADSCameraOffsetCurveFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Float")
	UCurveFloat* ADSFieldOfViewCurveFloat;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* FireMappingContext;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	ABaseWeapon* PrimaryWeapon;

	UPROPERTY()
	UTimelineComponent* ADSCurveTimeline;

	AProject_Relic_v2Character* Character;
		
	bool bIsAiming;

	TSubclassOf<ABaseWeapon> PrimaryWeaponRef;
	
	

};
