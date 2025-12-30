// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTFindPatrol.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UBTTFindPatrol : public UBTTaskNode
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, Category = "Patrol")
	float PatrolSpeed = 125.0f;

	UPROPERTY(EditAnywhere, Category = "Patrol")
	float PatrolRadius = 1000.0f;

};
