// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Animation/AnimMontage.h"
#include "HealthComponent.h"
#include "State.h"
#include "EnemyCharacter.generated.h"

//UCLASS(Abstract, Blueprintable)
//class PROJECT_RELIC_V2_API UBaseGameEntity : public UObject
//{
//	GENERATED_BODY()
//
//public:
//	
//	UBaseGameEntity();
//
//	void InitializeWithID(int32 BaseID);
//
//	virtual ~UBaseGameEntity(){}
//
//	virtual void Update() PURE_VIRTUAL(UBaseGameEntity::Update, );
//
//	int32 GetID() const { return ID; }
//
//protected:
//	void SetID(int32 val);
//
//private:
//	UPROPERTY()
//	int32 ID;
//
//	static int32 NextValidID;
//};

USTRUCT(BlueprintType)
struct FEnemyMoveSpeed
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Patrol = 150.0f; // Slow moving speed

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Chase = 400.0f; // Default Moving speed
};

/**
 *  AI character manager
 */
UCLASS()
class PROJECT_RELIC_V2_API AEnemyCharacter : public ACharacter, public IDeathHandlerInterface
{
	GENERATED_BODY()

	/* Health component that handles the enemies health */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UAIPerceptionStimuliSourceComponent* PerceptionStimuliSourceComponent;

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	UHealthComponent* GetHealthComponent() const { return HealthComponent; }

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

/* Getters and setters */
public:
	/* Get the unique ID for each instatiated enemy character */
	int32 GetID() const{ return ID; }

	/* Get the boolean that states if the enemy is shooting or not */
	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool GetIsShooting() const { return bIsShooting; }

	/* Set the boolean that states if the enemy is shooting or not */
	void SetIsShooting(bool IsShooting) { bIsShooting = IsShooting; }
private:
	/* Set the unique ID for the instatiated enemy character */
	void SetID(int val);

/* Variables */
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* AnimDeath; // Animation Montage for enemy dying

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* AnimShoot; // Animation Montage for enemy dying

private:
	int32 ID; // The unique identifier for each enemy instantiated
	static int32 NextValidID; // For each enemy instantiated, this will increment

	/** Line trace distance (how far the enemy can shoot) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gameplay", meta = (AllowPrivateAccess = "true"))
	float ShootingDistance; 

	bool bIsShooting = false; // Flag that tells if the enemy is shooting or not
};