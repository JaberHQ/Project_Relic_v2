// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API AEnemyController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemyController();

public:
	FORCEINLINE UBlackboardComponent* GetBlackBoardComponent() const { return BlackboardComponent; }
	FORCEINLINE UBehaviorTreeComponent* GetBehaviourTree() const { return BehaviourTreeComponent; }
	FORCEINLINE TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; }

	void SetPlayerDetected(APawn* Pawn);

private:
	virtual void OnPossess(APawn* Pawn) override;

private:
	UBehaviorTreeComponent* BehaviourTreeComponent;
	UBlackboardComponent* BlackboardComponent;

	/* Blackboard keys */
	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName PatrolLocation;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName EnemyActor;

	UPROPERTY(EditDefaultsOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	FName HasLineOfSight;

	TArray<AActor*> PatrolPoints;

	int32 CurrentPatrolPoint;
};
