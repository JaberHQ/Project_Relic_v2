// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTChasePlayer.h"
#include "EnemyCharacter.h"
#include "EnemyController.h"

UBTTChasePlayer::UBTTChasePlayer(FObjectInitializer const& ObjectInitalizer)
	:Super(ObjectInitalizer)
{
	NodeName = "Chase Player";

	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyController* EnemyController = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	if (EnemyController)
	{
		AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(EnemyController->GetPawn());
		if (EnemyCharacter)
		{
			EnemyCharacter->UpdateWalkSpeed(ChaseSpeed);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
