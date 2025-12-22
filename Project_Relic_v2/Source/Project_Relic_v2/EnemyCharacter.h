// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class PROJECT_RELIC_V2_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void UpdateWalkSpeed(float NewWalkSpeed);

<<<<<<< Updated upstream
=======
	UBehaviorTree* GetBehaviourTree() const { return BehaviourTree; }

private:
	UFUNCTION()
	void OnPlayerCaught(APawn* Pawn);

private:
	UPROPERTY(EditAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTree* BehaviourTree;

	UPROPERTY(VisibleAnywhere, Category = "AI", meta = (AllowPrivateAccess = "true"))
	class UPawnSensingComponent* PawnSensingComponent;

>>>>>>> Stashed changes
};
