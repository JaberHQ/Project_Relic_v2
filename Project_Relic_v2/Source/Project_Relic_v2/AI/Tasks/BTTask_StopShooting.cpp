// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/BTTask_StopShooting.h"
#include "AI/Enemy/EnemyController.h"
#include "AI/Enemy/EnemyCharacter.h"

EBTNodeResult::Type UBTTask_StopShooting::ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory)
{
	// Get AI controller
	AEnemyController* EnemyController = Cast<AEnemyController>(ownerComp.GetAIOwner());

	if (EnemyController)
	{
		// Get AI manager
		AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(EnemyController->GetPawn());
		if (EnemyCharacter)
		{
			// Speed up enemy
			EnemyCharacter->Crouch();
			EnemyCharacter->UpdateWalkSpeed(EnemyCharacter->MoveSpeed.Patrol);
			EnemyController->SetHasFoundCover(false);
			return EBTNodeResult::Succeeded;

		}
	}
	// Return node has failed
	return EBTNodeResult::Failed;
}
