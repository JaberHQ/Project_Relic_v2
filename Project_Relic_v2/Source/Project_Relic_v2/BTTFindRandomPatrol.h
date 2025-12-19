// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTFindRandomPatrol.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UBTTFindRandomPatrol : public UBTTaskNode
{
	GENERATED_BODY()

	//UBTTFindRandomPatrol(FObjectInitializer const& ObjectInitalizer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrol")
	float PatrolSpeed = 125.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrol")
	float PatrolRadius = 1000.0f;

};
