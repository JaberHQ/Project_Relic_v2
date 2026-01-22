// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Animation/AnimMontage.h"
#include "HealthComponent.h"
#include "EnemyCharacter.generated.h"


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

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimMontage* AnimDeath; // Animation Montage for enemy dying

};