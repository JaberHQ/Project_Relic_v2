// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "AIPatrolPoint.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "BehaviorTree/BehaviorTree.h"
#include "AISense_Player.h"
#include "AISenseConfig_Player.h"
#include "Project_Relic_v2Character.h"
#include <Perception/AISenseConfig_Sight.h>
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	/* Initialise blackboard and BT */
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	SetupPerceptionSystem();

	// Set AI peripheral
	// 500.0f

	// Sensing interval = 0.2

	/* Initialise blackboard keys */
	PatrolLocation = "PatrolLocation";
	EnemyActor = "EnemyActor";
	TargetLastKnownLocation = "TargetLastKnownLocation";
	HasLineOfSight = "HasLineOfSight";

	CurrentPatrolPoint = 0;
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyController::Death()
{
	UBrainComponent* BrainComp = GetBrainComponent();
	if(BrainComp)
		BrainComp->PauseLogic(TEXT("Enemy Dead"));
}

void AEnemyController::StartChase_Implementation()
{
	bShouldChase = true;

}

void AEnemyController::StopChase_Implementation()
{
	bShouldChase = false;

	if( BlackboardComponent )
	{
		BlackboardComponent->ClearValue(EnemyActor);
		BlackboardComponent->ClearValue(HasLineOfSight);
	}
}

FVector AEnemyController::GetTargetLastKnownLocation() const
{
	return BlackboardComponent->GetValueAsVector(TargetLastKnownLocation);
}

void AEnemyController::ClearTargetLastKnownLocation()
{
	BlackboardComponent->ClearValue(TargetLastKnownLocation);
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

		ControlledEnemyCharacter = Cast<AEnemyCharacter>(InPawn);
	}
}

void AEnemyController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	if (SightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

		SightConfig->SightRadius = 500.0f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 25.0f;
		SightConfig->PeripheralVisionAngleDegrees = 90.0f;
		SightConfig->SetMaxAge(5.0f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense(*SightConfig);
	}
}

void AEnemyController::OnDetectionDelayComplete()
{
	if (PlayerCharacter)
	{
		IDetectionInterface::Execute_StopDetection(PlayerCharacter);
	}
	bIsDetectingPlayer = false;
}


void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			if(!bIsDetectingPlayer)
			{
				if (BlackboardComponent)
				{
					FVector TargetLocation = Stimulus.StimulusLocation;
					BlackboardComponent->SetValueAsVector(TargetLastKnownLocation, TargetLocation);
				}

				bIsDetectingPlayer = true;

				PlayerCharacter = Cast<AProject_Relic_v2Character>(Actor);
				if(ControlledEnemyCharacter && PlayerCharacter)
				{
					IDetectionInterface::Execute_StartDetection(PlayerCharacter, ControlledEnemyCharacter);
				}
			}

			GetWorld()->GetTimerManager().ClearTimer(DetectionTimerHandle);
			GetWorld()->GetTimerManager().SetTimer(DetectionTimerHandle, this, &AEnemyController::OnDetectionDelayComplete, 0.5f, false);

			if (bShouldChase)
			{
				if (BlackboardComponent)
				{
					BlackboardComponent->SetValueAsObject(EnemyActor, Actor);
					BlackboardComponent->SetValueAsBool(HasLineOfSight, true);
				}
			}
		}
	}
}

