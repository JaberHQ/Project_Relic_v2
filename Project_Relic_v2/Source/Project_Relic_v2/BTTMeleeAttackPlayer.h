// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTMeleeAttackPlayer.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UBTTMeleeAttackPlayer : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTMeleeAttackPlayer(FObjectInitializer const& ObjectInitializer);

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	FName Player;

};
