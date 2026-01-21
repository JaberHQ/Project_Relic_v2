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

	CurrentPatrolPoint = 0;

	EnemyState = EEnemyState::Patrol;
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyController::Death()
{
	EnemyState = EEnemyState::Dead;

	/* Pause behaviour tree for AI logic to stop running */
	UBrainComponent* BrainComp = GetBrainComponent();
	if(BrainComp)
		BrainComp->PauseLogic(TEXT("Enemy Dead"));
}

void AEnemyController::StartChase_Implementation()
{
	bShouldChase = true;
	EnemyState = EEnemyState::ChasePlayer;
}

void AEnemyController::StopChase_Implementation()
{
	bShouldChase = false;
	EnemyState = EEnemyState::Investigate;

	// Play a timer
	// After investigation timer
	// Return to patrol 
		// EnemyState = EEnemyState::Patrol;

	if( BlackboardComponent )
	{
		BlackboardComponent->ClearValue(EnemyActor);
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
		RunStateMachine();
	}
}

void AEnemyController::SetupPerceptionSystem()
{
	AISenseConfig_Player = CreateDefaultSubobject<UAISenseConfig_Player>(TEXT("Sight Config"));
	
	if (AISenseConfig_Player)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
		//AISenseConfig_Player->Implementation = AISense_Player;

		AISenseConfig_Player->TargetRadius = 1000.0f;
		//AISenseConfig_Player->SetMaxAge(2.5f);
	}
	/*if (SightConfig)
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
	}*/
}

void AEnemyController::OnDetectionDelayComplete()
{
	if (PlayerCharacter)
	{
		IDetectionInterface::Execute_StopDetection(PlayerCharacter);
	}
	bIsDetectingPlayer = false;
}

void AEnemyController::RunStateMachine()
{
	/*
	if patrol
		set walking speed
		find random patrol
		move to patrol location
		wait 
	if investigate
		Rotate to face TargetLastKnownLocation
		Wait
		Move to LastKnownLocation
		Wait 
			Clear last known location (go back to patrol)

	if chasePlayer
		update walk speed to fast
		rotate to face enemy - potentially do after move
		move to player
		wait

	if shootPlayer
		bshootPlayer = true; (Play the animation)
		Raycast bullet to hit the player
		Player to take damage
	*/

	switch (EnemyState)
	{
		case EEnemyState::Patrol:
			Patrol();
			break;
		case EEnemyState::Investigate:
			Investigate();
			break;
		case EEnemyState::ChasePlayer:
			ChasePlayer();
			break;
		case EEnemyState::ShootPlayer:
			ShootPlayer();
			break;
		case EEnemyState::Dead:
			Death();
			break;
	}

	
}

void AEnemyController::Patrol()
{
	/*if patrol
		set walking speed
		find random patrol
		move to patrol location
		wait*/

	if (ControlledEnemyCharacter)
	{
		ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Patrol);

		AAIPatrolPoint* CurrentPoint = Cast<AAIPatrolPoint>(BlackboardComponent->GetValueAsObject("PatrolLocation"));
		TArray<AActor*> AvailablePatrolPoints = GetPatrolPoints();

		AAIPatrolPoint* NextPatrolPoint = nullptr;

		if (CurrentPatrolPoint != AvailablePatrolPoints.Num() - 1)
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[CurrentPatrolPoint++]);
		}
		else
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[0]);
			CurrentPatrolPoint = 0;
		}

		BlackboardComponent->SetValueAsObject(PatrolLocation, NextPatrolPoint);

		MoveToLocation(BlackboardComponent->GetValueAsVector(PatrolLocation));

		//FTimerHandle WaitDelay;
		//float WaitTime = 5.0f;
		//GetWorldTimerManager().SetTimer(WaitDelay, this, &AEnemyController::Patrol, WaitTime, false);
	}

	
}

void AEnemyController::Investigate()
{
}

void AEnemyController::ChasePlayer()
{
}

void AEnemyController::ShootPlayer()
{
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
				}
			}
		}
	}
}

