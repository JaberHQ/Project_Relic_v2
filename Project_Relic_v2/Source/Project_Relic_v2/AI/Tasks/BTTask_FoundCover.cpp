// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/BTTask_FoundCover.h"
#include "AI/Enemy/EnemyController.h"
#include "AI/Enemy/EnemyCharacter.h"

EBTNodeResult::Type UBTTask_FoundCover::ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory)
{
	// Get AI controller
	AEnemyController* EnemyController = Cast<AEnemyController>(ownerComp.GetAIOwner());

	if (EnemyController)
	{
		// Get AI manager
		AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(EnemyController->GetPawn());
		if (EnemyCharacter)
		{
			
			EnemyCharacter->Crouch();
			EnemyCharacter->UpdateWalkSpeed(EnemyCharacter->MoveSpeed.Patrol);
			EnemyController->SetHasFoundCover(true);

			// Return node has succeeded
			return EBTNodeResult::Succeeded;
		}
	}
	// Return node has failed
	return EBTNodeResult::Failed;
}
