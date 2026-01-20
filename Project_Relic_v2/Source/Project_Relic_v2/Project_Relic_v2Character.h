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

	/*********************************************************************
	/** Interface function: IDeathHandlerInterface (See HealthComponent.h) 
	 ** Communicates with UHealthComponent (See HealthComponent.h) 
 	 ** Handles the events of the owning character's death
	/*********************************************************************/
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

	/* Handles the consumption of the player's stamina */
	void DrainStamina();

	/* Handles the regeneration of the player's stamina */
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

	/** Returns the current stamina of the player **/
	UFUNCTION(BlueprintCallable)
	float GetCurrentStamina() const { return CurrentStamina; }

	/** Returns the maximum stamina of the player **/
	UFUNCTION(BlueprintCallable)
	float GetMaxStamina() const { return MaxStamina; }

	/** Returns the boolean that holds whether the player is sprinting or not **/
	UFUNCTION(BlueprintCallable)
	bool GetIsSprinting() const { return bIsSprinting; }

private:
	/** Initialise the crouch timeline component */
	void InitCrouchTimeline();

	/** The Crouch Timeline Component's update function */
	UFUNCTION()
	void CrouchTimelineProgress(float Value);

	/*********************************************************************
	/** Interface function: IDetectionInterface (See EnemyController.h)
	 ** For communication between the player and enemy
	 **		(See Project_Relic_v2Character.h and EnemyController.h)
	 ** Handles the start of the AI detection of the enemy
	/*********************************************************************/
	virtual void StartDetection_Implementation(AEnemyCharacter* EnemyCharacter) override;

	/*********************************************************************
	/** Interface function: IDetectionInterface (See EnemyController.h)
	 ** For communication between the player and enemy
	 **		(See Project_Relic_v2Character.h and EnemyController.h)
	 ** Handles the stopping of the AI detection of the enemy
	/*********************************************************************/
	virtual void StopDetection_Implementation() override;

	/* Initialise the detection curve timeline component */
	void InitDetectionMeterTimeline();

	/* The update function for the detection curve timeline component 
	** Called while the detection meter is updating */
	UFUNCTION()
	void DetectionMeterProgress(float DetectionMeterValue);

	/* The finish function for the detection curve timeline component 
	** Called when the detection meter is complete */
	UFUNCTION()
	void OnDetectionMeterTimelineFinished();

	void OnDetected();

	/* Called when timer is complete 
	** for delaying whether the enemy has seen the player or not */
	void OnDetectionMeterDelayFinished();

public:

protected:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	UCurveFloat* CrouchCurveFloat; // A track of interpolated float points to evaluate over a given range

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	UCurveFloat* DetectionMeterCurveFloat; // A track of interpolated float points to evaluate over a given range

private:

	/***************************** UI *********************************************/
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> CharacterHUDWidgetClass;
	UUserWidget* CharacterHUDWidget; // Reference to the Characters HUD object

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> DetectionHUDWidgetClass;
	UUserWidget* DetectionHUDWidget; // Reference to the detection HUD widget object
	/*************************************************************************************/

	/***************************** Detection *********************************************/
	UDetectionHUDWidget* DetectionHUD; // Reference to the detection HUD widget class

	UPROPERTY()
	UTimelineComponent* DetectionCurveTimelineComponent;

	FTimerHandle DetectionMeterDelayHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Detection", meta = (AllowPrivateAccess = "true"))
	float MaxDetection;

	UPROPERTY(EditDefaultsOnly, Category = "Detection", meta = (AllowPrivateAccess = "true"))
	float InstantDetection;
	/*************************************************************************************/


	/****************************** Movement ***********************************************/
	bool bIsCrouching; // If character is crouching
	bool bIsSprinting; // If character is sprinting

	UPROPERTY()
	UTimelineComponent* CrouchTimelineComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float CurrentStamina; // Holds the current stamina of the player

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MaxStamina; // Holds the maximum stamina of the player

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float DecrementStamina; // Holds the constant amount the player's stamina is subtracted by during use

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float IncrementStamina; // Holds the constant amount added to the player's stamina upon regeneration

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float DrainStaminaTime; // How quick the player's stamina drains

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float RegenerateStaminaTime; // How long is takes for the player's stamina to regenerate

	FTimerHandle SprintHandle; // Timer handle for player sprinting

	UPROPERTY(EditDefaultsOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	FCharacterMoveSpeed CharacterMoveSpeedDefaults; // Default values for player movement speeds, held in a struct

	TMap<ECharacterMoveSpeed, float> MoveSpeedMap; // Hashmap, used for setting the movement speed of the player
	ECharacterMoveSpeed CurrentMoveSpeed; // Used to hold the current move speed of the player
	/*************************************************************************************/

	AEnemyCharacter* EnemyCharacterRef; // Reference to enemy character

};

