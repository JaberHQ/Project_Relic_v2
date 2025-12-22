// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "AIPatrolPoint.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTree.h"

AEnemyController::AEnemyController()
{
	/* Initialise blackboard and BT */
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));

	/* Initialise blackboard keys */
	PatrolLocation = "PatrolLocation";
	EnemyActor = "EnemyActor";

	CurrentPatrolPoint = 0;
}

void AEnemyController::SetPlayerDetected(APawn* DetectedPawn)
{
	if(BlackboardComponent)
	{
		BlackboardComponent->SetValueAsObject(EnemyActor, DetectedPawn);
	}
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Get character ref
	AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(InPawn);
	if(EnemyCharacter)
	{
		UBlackboardData* BlackboardAsset = EnemyCharacter->GetBehaviourTree()->BlackboardAsset;
		if(BlackboardAsset)
		{
			BlackboardComponent->InitializeBlackboard(*BlackboardAsset);
		}

		/* Populate PatrolPoint array */
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);

		/* Start behaviour tree */
		UBehaviorTree* BehaviourTree = EnemyCharacter->GetBehaviourTree();
		if(BehaviourTree)
		{
			BehaviourTreeComponent->StartTree(*BehaviourTree);
		}
	}
}