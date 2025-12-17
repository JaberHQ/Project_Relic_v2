// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TimelineComponent.h" 
#include "InventoryComponent.h"
#include "WeaponComponent.h"
#include "Project_Relic_v2Character.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputAction;
class UCurveFloat;
class USkeletalMeshComponent;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM(BlueprintType)
enum class ECharacterMoveSpeed : uint8
{
	Slow UMETA(DisplayName = "Slow"),
	Default UMETA(DisplayName = "Default"),
	Fast UMETA(DisplayName = "Fast")
};

USTRUCT(BlueprintType)
struct FCharacterMoveSpeed
{
	GENERATED_BODY()

	float Slow	   = 150.0f; // Slow moving speed
	
	float Default  = 300.0f; // Default Moving speed

	float Fast     = 600.0f; // Fast Moving Speed
};



/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */
UCLASS(Abstract)
class AProject_Relic_v2Character : public ACharacter
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

public:
	/** Constructor */
	AProject_Relic_v2Character();	

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

public:
	/** Set the boolean for crouching that tells if player is crouching or not */
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetIsCrouching(bool isCrouching);

	/** Get the boolean for crouching that tells if player is crouching or not */
	UFUNCTION(BlueprintCallable, Category = "Input")
	bool GetIsCrouching() const;

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

private:
	/** Initialise the crouch timeline component */
	void InitCrouchTimeline();

	/** The Crouch Timeline Component's update function */
	UFUNCTION()
	void CrouchTimelineProgress(float Value);

protected:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Curve Float")
	UCurveFloat* CrouchCurveFloat;

private:
	UPROPERTY()
	UTimelineComponent* CrouchTimelineComponent;

private:
	bool bIsCrouching; // If character is crouching
	TMap<ECharacterMoveSpeed, float> MoveSpeedMap;
	ECharacterMoveSpeed CurrentMoveSpeed;
};

