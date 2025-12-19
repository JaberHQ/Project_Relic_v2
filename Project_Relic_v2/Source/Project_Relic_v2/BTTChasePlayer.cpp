// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTChasePlayer.h"
#include "EnemyCharacter.h"

EBTNodeResult::Type UBTTChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ChaseSpeed = 500.0f;
	AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(OwnerComp.GetAIOwner());
	if(EnemyCharacter)
	{
		EnemyCharacter->UpdateWalkSpeed(ChaseSpeed);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
