// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTFindRandomPatrol.h"
#include "EnemyCharacter.h"
//#include "NavigationSystem.h"

EBTNodeResult::Type UBTTFindRandomPatrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(OwnerComp.GetAIOwner());
	if(EnemyCharacter)
	{
		EnemyCharacter->UpdateWalkSpeed(PatrolSpeed);

		FVector EnemyLoc = EnemyCharacter->GetActorLocation();
		
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;

}
