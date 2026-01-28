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
#include "Navigation/PathFollowingComponent.h"
#include "Engine/Canvas.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	/* Initialise blackboard and BT */
	//BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	//BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	SetupPerceptionSystem();

	/* Initialise AI defaults */
	PatrolLocation = nullptr;
	EnemyActor = nullptr;
	TargetLastKnownLocation = FVector::Zero();
	EnemyState = EEnemyState::Patrol;
	CurrentPatrolPoint = 0;
}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EnemyState == EEnemyState::ShootPlayer && PlayerCharacter && ControlledEnemyCharacter)
	{
		FRotator LookAtRotation = (PlayerCharacter->GetActorLocation() - ControlledEnemyCharacter->GetActorLocation()).Rotation();
		ControlledEnemyCharacter->SetActorRotation(LookAtRotation);
	}
		//ControlledEnemyCharacter->SetActorRotation(TargetLastKnownLocation.Rotation());

}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	FindCoverQueryRequest = FEnvQueryRequest(FindCoverQuery, this);
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
	EnemyState = EEnemyState::Reposition;
	RunStateMachine();
}

void AEnemyController::StopChase_Implementation()
{
	bShouldChase = false;
	EnemyState = EEnemyState::Investigate;

	// Play a timer
	// After investigation timer
	// Return to patrol 
		// EnemyState = EEnemyState::Patrol;

	EnemyActor = nullptr;
}

FVector AEnemyController::GetTargetLastKnownLocation() const
{
	return TargetLastKnownLocation;
}

void AEnemyController::ClearTargetLastKnownLocation()
{
	TargetLastKnownLocation = FVector::Zero();
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);

	ControlledEnemyCharacter = Cast<AEnemyCharacter>(InPawn);

	RunStateMachine();
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

	if Reposition
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
		case EEnemyState::Reposition:
			GetToPosition();
			break;
		case EEnemyState::ShootPlayer:
			ShootPlayer();
			break;
		case EEnemyState::Dead:
			Death();
			break;
		default:
			break;
	}
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT(" Current EnemyState"EnemyState)); // DEBUG -----------------------

	/*if (ControlledEnemyCharacter && EnemyState != EEnemyState::ShootPlayer)
	{
		ControlledEnemyCharacter->SetIsShooting(false);
	}*/
	
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
		FEnemyMoveSpeed MoveSpeed;
		ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Patrol);

		AAIPatrolPoint* CurrentPoint = PatrolLocation;
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

		PatrolLocation = NextPatrolPoint;
		MoveToActor(PatrolLocation);
	}

	
}

void AEnemyController::Investigate()
{
	/*if investigate
		Rotate to face TargetLastKnownLocation
		Wait
		Move to LastKnownLocation
		Wait
		Clear last known location(go back to patrol)*/
	GetWorldTimerManager().SetTimer(InvestigateHandle, this, &AEnemyController::MoveToLastKnownLocation, 3.0f, false);
}

void AEnemyController::GetToPosition()
{
	/*if chasePlayer
		update walk speed to fast
		rotate to face enemy - potentially do after move
		move to player
		wait*/
	
	if (ControlledEnemyCharacter && PlayerCharacter)
	{
		/*FEnemyMoveSpeed MoveSpeed;
		ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Chase);
		MoveToActor(PlayerCharacter, 500.0f);*/
		if (!bFindCover)
		{
			RunEQS();
			bFindCover = true;
		}

	}
}

void AEnemyController::ShootPlayer()
{
	/*if shootPlayer
		bshootPlayer = true; (Play the animation)
		Raycast bullet to hit the player
		Player to take damage
		*/
	if (ControlledEnemyCharacter && PlayerCharacter)
	{
		//ControlledEnemyCharacter->SetActorRotation(TargetLastKnownLocation.Rotation());
		ControlledEnemyCharacter->SetIsShooting(true);
		ControlledEnemyCharacter->RaycastShot();
		GetWorldTimerManager().SetTimer(ShootHandle, this, &AEnemyController::RunStateMachine, 3.0f, false);

		//SetFocus(EnemyActor);
		//GetWorldTimerManager().SetTimer(ShootHandle, this, &AEnemyController::ShootPlayer, 3.0f, false);
	}
	

}



void AEnemyController::MoveToLastKnownLocation()
{
	MoveToLocation(TargetLastKnownLocation);

}

void AEnemyController::FindCoverQueryRequestFinished(TSharedPtr<FEnvQueryResult> Result)
{
	//MoveToActor(PlayerCharacter, 500.0f);
	MoveTo(Result->GetItemAsLocation(0));
	
}

void AEnemyController::RunEQS()
{
	FindCoverQueryRequest.Execute(EEnvQueryRunMode::SingleResult, this, &AEnemyController::FindCoverQueryRequestFinished);
}

void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (EnemyState == EEnemyState::Investigate)
	{
		if (EnemyActor == nullptr)
		{
			EnemyState = EEnemyState::Patrol;
		}
	}
	if (EnemyState == EEnemyState::Reposition)
	{
		EnemyState = EEnemyState::ShootPlayer;
		//ShootPlayer();
	}

	GetWorldTimerManager().SetTimer(WaitHandle,this, &AEnemyController::RunStateMachine, 3.0f, false);
		//GetWorldTimerManager().ClearTimer(WaitHandle);
	
	//RunStateMachine();
}


void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			if(!bIsDetectingPlayer)
			{
				//GetWorld()->GetTimerManager().ClearTimer(WaitHandle);

				FVector TargetLocation = Stimulus.StimulusLocation;
				TargetLastKnownLocation = TargetLocation;

				bIsDetectingPlayer = true;

				PlayerCharacter = Cast<AProject_Relic_v2Character>(Actor);
				if(ControlledEnemyCharacter && PlayerCharacter)
				{
					EnemyState = EEnemyState::Investigate;
					IDetectionInterface::Execute_StartDetection(PlayerCharacter, ControlledEnemyCharacter);
				}
				RunStateMachine();
			}

			GetWorld()->GetTimerManager().ClearTimer(DetectionTimerHandle);
			GetWorld()->GetTimerManager().SetTimer(DetectionTimerHandle, this, &AEnemyController::OnDetectionDelayComplete, 0.5f, false);

			if (bShouldChase)
			{
				GetWorld()->GetTimerManager().ClearTimer(InvestigateHandle);
				EnemyActor = Cast<AEnemyCharacter>(Actor);
				//EnemyState = EEnemyState::Reposition;
			}
		}
	}
	//RunStateMachine();
}

