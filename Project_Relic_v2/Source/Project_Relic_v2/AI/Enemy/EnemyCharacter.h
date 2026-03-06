// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "AIController.h"
#include "Animation/AnimMontage.h"
#include "Components/HealthComponent.h"
#include "AI/FSM/State.h"
#include "Components/AIBehaviourComponent.h"
#include "Interfaces/CombatInterface.h"
#include "EnemyCharacter.generated.h"


USTRUCT(BlueprintType)
struct FEnemyMoveSpeed
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Patrol = 150.0f; // Slow moving speed

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Run = 400.0f; // Default Moving speed
};

/**
 *  AI character manager
 */
UCLASS()
class PROJECT_RELIC_V2_API AEnemyCharacter : public ABaseCharacter, public IDeathHandlerInterface, public ICombatInterface
{
	GENERATED_BODY()

	/* Health component that handles the enemies health */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UAIPerceptionStimuliSourceComponent* PerceptionStimuliSourceComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UAIBehaviourComponent* AIBehaviourComponent;

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	UHealthComponent* GetHealthComponent() const { return HealthComponent; }

	UAIBehaviourComponent* GetAIBehaviourComponent() const { return AIBehaviourComponent; }

	virtual bool HandleMessage(const FTelegram& Msg) override;

	void DisableMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Set the character's maximum movement speed
	UFUNCTION(BlueprintCallable)
	void UpdateWalkSpeed(float NewWalkSpeed);

	/*********************************************************************
	/** Interface function: IDeathHandlerInterface (See HealthComponent.h)
	 ** Communicates with UHealthComponent (See HealthComponent.h)
	 ** Handles the events of the owning character's death
	/*********************************************************************/
	virtual void HandleDeath_Implementation() override;

	void RaycastShot();

	void TakeDamage(float DamageAmount);

	virtual bool CanTakedown_Implementation() override;

	virtual void Takedown_Implementation() override;

/* Getters and setters */
public:
	/* Get the boolean that states if the enemy is shooting or not */
	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool GetIsShooting() const { return bIsShooting; }

	/* Set the boolean that states if the enemy is shooting or not */
	void SetIsShooting(bool IsShooting) { bIsShooting = IsShooting; }

	void SetCanBeTakenDown(bool CanBeTakenDown) { bCanBeTakenDown = CanBeTakenDown; }
	bool GetCanBeTakenDown() const { return bCanBeTakenDown; }

private:
	void Death();

/* Variables */
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* AnimDeath; // Animation Montage for enemy dying

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* AnimShoot; // Animation Montage for enemy dying

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* AnimTakedown; // Animation Montage

private:

	/** Line trace distance (how far the enemy can shoot) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gameplay", meta = (AllowPrivateAccess = "true"))
	float ShootingDistance; 

	bool bIsShooting = false; // Flag that tells if the enemy is shooting or not
	bool bCanBeTakenDown = true;

	
};