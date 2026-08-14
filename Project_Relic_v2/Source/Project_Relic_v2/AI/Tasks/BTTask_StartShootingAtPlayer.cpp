// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/BTTask_StartShootingAtPlayer.h"
#include "BTTask_StartShootingAtPlayer.h"
#include "AI/Enemy/EnemyController.h"
#include "AI/Enemy/EnemyCharacter.h"

EBTNodeResult::Type UBTTask_StartShootingAtPlayer::ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory)
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
			EnemyCharacter->UnCrouch();
			EnemyCharacter->UpdateWalkSpeed(EnemyCharacter->MoveSpeed.Run);

			EnemyController->StartShooting(ShootingDuration);
			return EBTNodeResult::Succeeded;

		}
	}
	// Return node has failed
	return EBTNodeResult::Failed;
}
