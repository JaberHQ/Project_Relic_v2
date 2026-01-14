// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTInvestigatePlayer.h"
#include "EnemyController.h"

UBTTInvestigatePlayer::UBTTInvestigatePlayer(FObjectInitializer const& ObjectInitializer)
	:Super(ObjectInitializer)
{
	NodeName = "Investigate Player";

	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTInvestigatePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyController* EnemyController = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	if(EnemyController)
	{
		EnemyController->ClearTargetLastKnownLocation();
		return EBTNodeResult::Succeeded;
		
	}
	return EBTNodeResult::Failed;
}
