// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTChasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UBTTChasePlayer : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTChasePlayer(FObjectInitializer const& ObjectInitalizer);

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, Category = "Movement")
	float ChaseSpeed = 500.0f;
};
