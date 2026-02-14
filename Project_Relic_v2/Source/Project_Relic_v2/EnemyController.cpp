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
#include "PatrolState.h"
#include "HuntState.h"
#include "TakeCoverState.h"
#include "AttackState.h"
#include "DeadState.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;

	InitPerceptionSystem();

	/* Initialise AI defaults */
	PatrolLocation = nullptr;
	EnemyActor = nullptr;
	TargetLastKnownLocation = FVector::Zero();
	CurrentPatrolPoint = 0;
}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FiniteStateMachine->Update();
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	FindCoverQueryRequest = FEnvQueryRequest(FindCoverQuery, this);
	FindAttackQueryRequest = FEnvQueryRequest(FindAttackQuery, this);

	FiniteStateMachine = new StateMachine<AEnemyController>(this);
	FiniteStateMachine->SetGlobalState(EnemyGlobalState::Instance());
	FiniteStateMachine->ChangeState(PatrolState::Instance());
}


void AEnemyController::Death()
{
	bIsDead = true;
	StopMovement();
	ChangeState(DeadState::Instance());
}

void AEnemyController::StartChase_Implementation()
{
	bShouldChase = true;
}

void AEnemyController::StopChase_Implementation()
{
	//bShouldChase = false;
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
}

void AEnemyController::InitPerceptionSystem()
{
	AISenseConfig_Player = CreateDefaultSubobject<UAISenseConfig_Player>(TEXT("Sight Config"));
	
	if (AISenseConfig_Player)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

		AISenseConfig_Player->TargetRadius = 1000.0f;
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

//void AEnemyController::Investigate()
//{
//	/*if investigate
//		Rotate to face TargetLastKnownLocation
//		Wait
//		Move to LastKnownLocation
//		Wait
//		Clear last known location(go back to patrol)*/
//	GetWorldTimerManager().SetTimer(InvestigateHandle, this, &AEnemyController::MoveToLastKnownLocation, 3.0f, false);
//}

void AEnemyController::StartShooting()
{
	/* The enemy will pretend to shoot before raycasting a bullet
			As we don't want every single bullet to hit the player */
	RotateToFacePlayer();

	ControlledEnemyCharacter->SetIsShooting(true);

	GetWorld()->GetTimerManager().SetTimer(ShootingTimerHandle, this, &AEnemyController::ShootRaycastBullet, 1.0f, false);

}

void AEnemyController::StopShooting()
{
	ControlledEnemyCharacter->SetIsShooting(false);
	GetWorld()->GetTimerManager().ClearTimer(ShootingTimerHandle);
}

void AEnemyController::SetTimerBeforeAttacking()
{
	bIsIdle = true;
	GetWorld()->GetTimerManager().SetTimer(TimerBeforeAttackingHandle, this, &AEnemyController::TimerBeforeAttackingCompleted, 3.0f, false);
}

void AEnemyController::StartAttackingTimer()
{
	GetWorld()->GetTimerManager().SetTimer(AttackingTimerHandle, this, &AEnemyController::OnAttackingTimerComplete, AttackDuration, false);
}

void AEnemyController::BeginAttack()
{
	RotateToFacePlayer();
	//StartAttackingTimer();
	ControlledEnemyCharacter->UnCrouch();
}

void AEnemyController::TimerBeforeAttackingCompleted() 
{ 
	bIsAttacking = true;
	bIsIdle = false;
}

void AEnemyController::EventsAfterCoverIsFound()
{
	SetTimerBeforeAttacking(); // Keep owner behind cover before attacking the player
}

void AEnemyController::FinishAttack()
{
	ControlledEnemyCharacter->Crouch();
	StopShooting();
}

void AEnemyController::BeginToTakeCover()
{
	FEnemyMoveSpeed MoveSpeed;
	ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Chase);

	SetIsMovingToCover(true);
	RunFindCoverEQS();
}

void AEnemyController::FinishTakingCover()
{
	ControlledEnemyCharacter->Crouch();
	//RotateToFacePlayer();
}

void AEnemyController::OnAttackingTimerComplete()
{
	bIsAttacking = false;
}

void AEnemyController::ShootRaycastBullet()
{
	if (ControlledEnemyCharacter)
	{
		ControlledEnemyCharacter->RaycastShot();
		//ControlledEnemyCharacter->SetIsShooting(true);
		StartShooting();
	}
}

//void AEnemyController::MoveToLastKnownLocation()
//{
//	MoveToLocation(TargetLastKnownLocation);
//}

void AEnemyController::RunFindCoverEQS()
{
	FindCoverQueryRequest.Execute(EEnvQueryRunMode::SingleResult, this, &AEnemyController::MoveToQueryRequest);
}

void AEnemyController::GetToAttackPoint()
{
	GetWorld()->GetTimerManager().SetTimer(GetToAttackingPointHandle, this, &AEnemyController::RunFindAttackEQS, 5.0f, false);
}



void AEnemyController::RotateToFacePlayer() 
{ 
	double roll = GetPawn()->GetActorRotation().Roll;
	double pitch = GetPawn()->GetActorRotation().Pitch;
	FRotator FindLookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetPawn()->GetActorLocation(), PlayerCharacter->GetActorLocation());
	FRotator Interp = UKismetMathLibrary::RInterpTo(GetPawn()->GetActorRotation(), FindLookAtRotation, GetWorld()->DeltaTimeSeconds, 1.0f); 
	FRotator Rotator = FRotator(0.0f, 0.0f, Interp.Yaw); 

	GetPawn()->SetActorRotation(FindLookAtRotation); 
}

void AEnemyController::RunFindAttackEQS()
{
	//ControlledEnemyCharacter->UnCrouch();
	bIsAttacking = true;
	FindAttackQueryRequest.Execute(EEnvQueryRunMode::SingleResult, this, &AEnemyController::MoveToQueryRequest);
}

void AEnemyController::MoveToQueryRequest(TSharedPtr<FEnvQueryResult> Result)
{
	if (Result->IsSuccessful() && Result->Items.Num() > 0)
	{
		const FVector TargetLocation = Result->GetItemAsLocation(0);
		MoveTo(TargetLocation);
	}
}

void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (FiniteStateMachine->GetCurrentState() == PatrolState::Instance())
	{
		bIsMovingToPatrolPoint = false;
	}

	else if (FiniteStateMachine->GetCurrentState() == TakeCoverState::Instance())
	{
		if (Result.IsSuccess())
		{
			bIsMovingToCover = false;
		}
	}

	else if (FiniteStateMachine->GetCurrentState() == AttackState::Instance())
	{
		//ControlledEnemyCharacter->Crouch();
		//if (Result.IsSuccess())
		//{
		//	RotateToFacePlayer();
		//	// Set a timer
		//	GetWorld()->GetTimerManager().SetTimer(AttackingTimerHandle, this, &AEnemyController::OnAttackingTimerComplete, 5.0f, false);
		//}
	}

}





void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			PlayerCharacter = Cast<AProject_Relic_v2Character>(Actor);
			SetHasLineOfSight(true);
			StopMovement();
			/*EnemyState = EEnemyState::Reposition;
			RunStateMachine();*/
		}
	}
}

//void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
//{
//	if (Stimulus.WasSuccessfullySensed())
//	{
//		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
//		{
//			if(!bIsDetectingPlayer)
//			{
//				//GetWorld()->GetTimerManager().ClearTimer(WaitHandle);
//
//				FVector TargetLocation = Stimulus.StimulusLocation;
//				TargetLastKnownLocation = TargetLocation;
//
//				bIsDetectingPlayer = true;
//
//				PlayerCharacter = Cast<AProject_Relic_v2Character>(Actor);
//				if(ControlledEnemyCharacter && PlayerCharacter)
//				{
//					//EnemyState = EEnemyState::Investigate;
//					//IDetectionInterface::Execute_StartDetection(PlayerCharacter, ControlledEnemyCharacter);
//				}
//				//RunStateMachine();
//			}
//
//			//GetWorld()->GetTimerManager().ClearTimer(DetectionTimerHandle);
//			//GetWorld()->GetTimerManager().SetTimer(DetectionTimerHandle, this, &AEnemyController::OnDetectionDelayComplete, 0.5f, false);
//
//			if (bShouldChase)
//			{
//				//GetWorld()->GetTimerManager().ClearTimer(InvestigateHandle);
//				//EnemyActor = Cast<AEnemyCharacter>(Actor);
//				//EnemyState = EEnemyState::Reposition;
//			}
//		}
//	}
//	//RunStateMachine();
//}


void AEnemyController::ChangeState(State<AEnemyController>* NewState)
{
	FiniteStateMachine->ChangeState(NewState);
}

void AEnemyController::RevertToPreviousState()
{
}

void AEnemyController::Update()
{
	// Changes here
	if (FiniteStateMachine)
		FiniteStateMachine->Update();
}

void EnemyGlobalState::Enter(AEnemyController* Enemy)
{
}

void EnemyGlobalState::Execute(AEnemyController* Enemy)
{
}

void EnemyGlobalState::Exit(AEnemyController* Enemy)
{
}

EnemyGlobalState* EnemyGlobalState::Instance()
{
	static EnemyGlobalState Instance;
	return &Instance;
}

void AEnemyController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	delete FiniteStateMachine;
	FiniteStateMachine = nullptr;
	Super::EndPlay(EndPlayReason);
}