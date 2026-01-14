// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTInvestigatePlayer.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UBTTInvestigatePlayer : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTInvestigatePlayer(FObjectInitializer const& ObjectInitializer);

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
