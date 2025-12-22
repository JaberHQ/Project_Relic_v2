// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "AIPatrolPoint.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/PawnSensingComponent.h"

AEnemyController::AEnemyController()
{
	/* Initialise blackboard and BT */
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));

	// Initialise senses
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	PawnSensingComponent->SetPeripheralVisionAngle(90.0f);

	/* Initialise blackboard keys */
	PatrolLocation = "PatrolLocation";
	EnemyActor = "EnemyActor";

	CurrentPatrolPoint = 0;
}

void AEnemyController::OnPlayerDetected(APawn* DetectedPawn)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("You have been caught!")); // DEBUG -----------------------------------------------
	if(BlackboardComponent)
	{
		BlackboardComponent->SetValueAsObject(EnemyActor, DetectedPawn);
		BlackboardComponent->SetValueAsBool(HasLineOfSight, true);
	}
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	if(PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyController::OnPlayerDetected);
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