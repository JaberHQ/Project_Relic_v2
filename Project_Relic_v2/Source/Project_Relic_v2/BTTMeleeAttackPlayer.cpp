// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTMeleeAttackPlayer.h"
#include "Project_Relic_v2Character.h"
#include "EnemyController.h"

UBTTMeleeAttackPlayer::UBTTMeleeAttackPlayer(FObjectInitializer const& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Player = "EnemyActor";
}

EBTNodeResult::Type UBTTMeleeAttackPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyController* EnemyController = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	if (EnemyController)
	{
		UBlackboardComponent* BlackboardComponent = EnemyController->GetBlackBoardComponent();
		if (BlackboardComponent)
		{
			AProject_Relic_v2Character* PlayerCharacter = Cast<AProject_Relic_v2Character>(BlackboardComponent->GetValueAsObject(Player));
			if (PlayerCharacter)
			{
				PlayerCharacter->GetHealthComponent()->TakeDamage();
			}
		}
	}
	return EBTNodeResult::Failed;
}
