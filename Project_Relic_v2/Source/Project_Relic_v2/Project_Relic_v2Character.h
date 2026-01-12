// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TimelineComponent.h" 
#include "InventoryComponent.h"
#include "WeaponComponent.h"
#include "Blueprint/UserWidget.h"
#include "HealthComponent.h"
#include "EnemyController.h"
#include "Project_Relic_v2Character.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputAction;
class UCurveFloat;
class USkeletalMeshComponent;
class AEnemyCharacter;
class UDetectionHUDWidget;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM(BlueprintType)
enum class ECharacterMoveSpeed : uint8
{
	Slow    UMETA(DisplayName = "Slow"   ),
	Default UMETA(DisplayName = "Default"),
	Fast    UMETA(DisplayName = "Fast"   )
};

USTRUCT(BlueprintType)
struct FCharacterMoveSpeed
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Slow	   = 150.0f; // Slow moving speed
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Default  = 400.0f; // Default Moving speed

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Fast     = 700.0f; // Fast Moving Speed
};

/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */
UCLASS(Abstract)
class AProject_Relic_v2Character : public ACharacter, public IDeathHandlerInterface, public IDetectionInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	/** Weapon Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UWeaponComponent* WeaponComponent;
	
	/** Inventory Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UInventoryComponent* InventoryComponent;

	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true") )
	UHealthComponent* HealthComponent;

protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

	/** Crouch Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CrouchAction;

	/** Sprint Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SprintAction;

	UPROPERTY( EditAnywhere, Category = "Input" )
	UUserWidget* CharacterHudWidgetBP;

public:
	/** Constructor */
	AProject_Relic_v2Character();	

	UHealthComponent* GetHealthComponent() const { return HealthComponent; }

	virtual void HandleDeath_Implementation() override;

protected:
	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

	/** Called when the game starts */
	virtual void BeginPlay() override;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles look inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

	/** Handles crouch inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoCrouch();

	/** Handles Sprint inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoSprint();

	/** Handles Sprint inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void StopSprint();

	void DrainStamina();

	void RegenerateStamina();
public:
	/** Set the boolean for crouching that tells if player is crouching or not */
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetIsCrouching(bool isCrouching);

	/** Get the boolean for crouching that tells if player is crouching or not */
	UFUNCTION(BlueprintCallable, Category = "Input")
	bool GetIsCrouching() const { return bIsCrouching; }

	/** Set the character movement's maximum walking speed */
	void SetMaxWalkSpeed(ECharacterMoveSpeed MoveSpeed);

	/** Set the camera socket offset */
	void SetCameraSocketOffset(FVector offset);

	/** Get the camera socket offset */
	FVector GetCameraSocketOffset() const;

	/** Set the camera's field of view */
	void SetFOV(float FOV);

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** Returns Inventory Component **/
	FORCEINLINE class UInventoryComponent* GetInventoryComponent() const { return InventoryComponent; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentStamina() const { return CurrentStamina; }

	UFUNCTION(BlueprintCallable)
	float GetMaxStamina() const { return MaxStamina; }

	UFUNCTION(BlueprintCallable)
	bool GetIsSprinting() const { return bIsSprinting; }

private:
	/** Initialise the crouch timeline component */
	void InitCrouchTimeline();

	/** The Crouch Timeline Component's update function */
	UFUNCTION()
	void CrouchTimelineProgress(float Value);

	virtual void StartDetection_Implementation(AEnemyCharacter* EnemyCharacter) override;
	virtual void StopDetection_Implementation() override;
	virtual void StartChase_Implementation() override;
	virtual void StopChase_Implementation() override;

	void InitDetectionMeterTimeline();

	UPROPERTY()
	UTimelineComponent* DetectionCurveTimelineComponent;

	UFUNCTION()
	void DetectionMeterProgress(float DetectionMeterValue);

	UFUNCTION()
	void OnDetectionMeterTimelineFinished();

	FTimerHandle DetectionMeterDelayHandle;

	void OnDetectionMeterDelayFinished();

protected:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Curve Float")
	UCurveFloat* CrouchCurveFloat;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	UCurveFloat* DetectionMeterCurveFloat;

private:
	UPROPERTY()
	UTimelineComponent* CrouchTimelineComponent;

private:
	bool bIsCrouching; // If character is crouching
	bool bIsSprinting; // If character is sprinting
	TMap<ECharacterMoveSpeed, float> MoveSpeedMap;
	ECharacterMoveSpeed CurrentMoveSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> CharacterHUDWidgetClass;
	UUserWidget* CharacterHUDWidget;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> DetectionHUDWidgetClass;
	UUserWidget* DetectionHUDWidget;

	UDetectionHUDWidget* DetectionHUD;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float CurrentStamina;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float MaxStamina;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float DecrementStamina;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float IncrementStamina;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float DrainStaminaTime;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float RegenerateStaminaTime;

	FTimerHandle SprintHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	FCharacterMoveSpeed CharacterMoveSpeedDefaults;


};

