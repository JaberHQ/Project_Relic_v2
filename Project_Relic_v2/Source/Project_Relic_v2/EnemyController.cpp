// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "AIPatrolPoint.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "BehaviorTree/BehaviorTree.h"
#include "AISense_Player.h"
#include "AISenseConfig_Player.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	/* Initialise blackboard and BT */
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));

	// Set AI peripheral
	// 500.0f

	/* Initialise blackboard keys */
	PatrolLocation = "PatrolLocation";
	EnemyActor = "EnemyActor";
	TargetLastKnownLocation = "TargetLastKnownLocation";

	CurrentPatrolPoint = 0;
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	if (AIPerceptionComponent)
	{
		AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnPerceptionUpdated);
	}
}

void AEnemyController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			//FVector ReceiverLocation = Stimulus.ReceiverLocation;
			FVector TargetLocation = Stimulus.StimulusLocation;

			if(BlackboardComponent)
			{
				BlackboardComponent->SetValueAsObject(EnemyActor, Actor);
				BlackboardComponent->SetValueAsBool(HasLineOfSight, true);
				BlackboardComponent->SetValueAsVector(TargetLastKnownLocation, TargetLocation);
			}
		}
	}
}

void AEnemyController::Death()
{
	UBrainComponent* BrainComp = GetBrainComponent();
	if(BrainComp)
		BrainComp->PauseLogic(TEXT("Enemy Dead"));

}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (BehaviourTree && BlackboardComponent)
	{
		UBlackboardData* BlackboardAsset = BehaviourTree->BlackboardAsset;
		if (BlackboardAsset)
		{
			BlackboardComponent->InitializeBlackboard(*BlackboardAsset);
		}

		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);

		RunBehaviorTree(BehaviourTree);
		BehaviourTreeComponent->StartTree(*BehaviourTree);
	}
}

