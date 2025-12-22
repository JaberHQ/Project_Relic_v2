// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTFindRandomPatrol.h"
#include "EnemyCharacter.h"
#include "EnemyController.h"
#include "AIPatrolPoint.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTFindRandomPatrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyController* EnemyController = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	if (EnemyController)
	{
		UBlackboardComponent* BlackboardComponent = EnemyController->GetBlackBoardComponent();

		AAIPatrolPoint* CurrentPoint = Cast<AAIPatrolPoint>(BlackboardComponent->GetValueAsObject("PatrolLocation"));
		TArray<AActor*> AvailablePatrolPoints = EnemyController->GetPatrolPoints();

		AAIPatrolPoint* NextPatrolPoint = nullptr;

		if (EnemyController->CurrentPatrolPoint != AvailablePatrolPoints.Num() - 1)
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[EnemyController->CurrentPatrolPoint++]);
		}
		else
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[0]);
			EnemyController->CurrentPatrolPoint = 0;
		}

		BlackboardComponent->SetValueAsObject("PatrolLocation", NextPatrolPoint);

		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed; 
}