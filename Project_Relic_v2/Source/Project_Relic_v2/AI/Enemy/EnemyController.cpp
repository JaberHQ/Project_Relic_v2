// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "AI/AIPatrolPoint.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "BehaviorTree/BehaviorTree.h"
#include "AI/AISense/AISense_Player.h"
#include "AI/AISense/AISenseConfig_Player.h"
#include "Player/Project_Relic_v2Character.h"
#include <Perception/AISenseConfig_Sight.h>
#include "Perception/AISense_Sight.h"
#include "Navigation/PathFollowingComponent.h"
#include "AI/FSM/States/Header/AttackState.h"
#include "AI/FSM/States/Header/PatrolState.h"
#include "AI/FSM/States/Header/DeadState.h"
#include "AI/FSM/States/Header/TakeCoverState.h"
#include "Engine/Canvas.h"
#include "AI/FSM/MessageDispatcher.h"
#include "Character/CharacterManager.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;

	InitPerceptionSystem();

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

	/* EQS Defaults */
	FindCoverQueryRequest = FEnvQueryRequest(FindCoverQuery, this);

	/* FSM Defaults */
	FiniteStateMachine = new StateMachine<AEnemyController>(this);
	//FiniteStateMachine->SetGlobalState(EnemyGlobalState::Instance());
	FiniteStateMachine->ChangeState(PatrolState::Instance());
}

void AEnemyController::Death()
{
	bIsDead = true;
	StopMovement();
	FiniteStateMachine->ChangeState(DeadState::Instance());
}

void AEnemyController::StartChase_Implementation()
{
	bShouldChase = true;
}

void AEnemyController::StopChase_Implementation()
{
	bShouldChase = false;
}

void AEnemyController::ClearTargetLastKnownLocation()
{
	TargetLastKnownLocation = FVector::Zero();
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Create a reference for the owning character
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

void AEnemyController::BeginPatrol()
{
	// Get all the patrol points in the level 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);
}

void AEnemyController::OnDetectionDelayComplete()
{
	if (PlayerCharacter)
	{
		IDetectionInterface::Execute_StopDetection(PlayerCharacter);
	}
	bIsDetectingPlayer = false;
}

void AEnemyController::StartShooting()
{
	/* The enemy will pretend to shoot before raycasting a bullet
			As we don't want every single bullet to hit the player */
	RotateToFacePlayer();

	ControlledEnemyCharacter->SetIsShooting(true);

	GetWorld()->GetTimerManager().SetTimer(ShootingTimerHandle, this, &AEnemyController::ShootRaycastBullet, ShootingInterval, false);
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
	ControlledEnemyCharacter->UnCrouch();
}

void AEnemyController::TimerBeforeAttackingCompleted() 
{ 
	bIsAttacking = true;
	bIsIdle = false;
}

void AEnemyController::FinishAttack()
{
	ControlledEnemyCharacter->Crouch();
	StopShooting();
}

void AEnemyController::BeginToTakeCover()
{
	FEnemyMoveSpeed MoveSpeed;
	ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Run);

	bIsMovingToCover = true;
	RunFindCoverEQS();
}

void AEnemyController::FinishTakingCover()
{
	ControlledEnemyCharacter->Crouch();
}

void AEnemyController::OnAttackingTimerComplete()
{
	bIsAttacking = false;
}

void AEnemyController::ShootRaycastBullet()
{
	ControlledEnemyCharacter->RaycastShot();
	StartShooting();
}

void AEnemyController::RunFindCoverEQS()
{
	FindCoverQueryRequest.Execute(EEnvQueryRunMode::RandomBest25Pct, this, &AEnemyController::MoveToQueryRequest);
}

void AEnemyController::RotateToFacePlayer() 
{ 
	/*double roll = GetPawn()->GetActorRotation().Roll;
	double pitch = GetPawn()->GetActorRotation().Pitch;*/
	/*FRotator Interp = UKismetMathLibrary::RInterpTo(GetPawn()->GetActorRotation(), FindLookAtRotation, GetWorld()->DeltaTimeSeconds, 1.0f); 
	FRotator Rotator = FRotator(0.0f, 0.0f, Interp.Yaw); */

	FRotator FindLookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetPawn()->GetActorLocation(), PlayerCharacter->GetActorLocation());
	GetPawn()->SetActorRotation(FindLookAtRotation); 
}

bool AEnemyController::HandleMessage(const FTelegram& Msg)
{
	return FiniteStateMachine->HandleMessage(Msg);
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

		if (AIBehaviourComponent)
		{
			AIBehaviourComponent->IncrementPatrolPointIndex();

			if (AIBehaviourComponent->GetPatrolPointIndex() >= AIBehaviourComponent->GetPatrolPathLength())
			{
				AIBehaviourComponent->ResetPatrolPointIndex();
			}
		}


	}

	else if (FiniteStateMachine->GetCurrentState() == TakeCoverState::Instance())
	{
		if (Result.IsSuccess())
		{
			bIsMovingToCover = false;
		}
	}
}

void AEnemyController::MoveToNextPatrolPoint()
{
	AIBehaviourComponent = Cast<UAIBehaviourComponent>(ControlledEnemyCharacter->GetAIBehaviourComponent());

	if (!AIBehaviourComponent)
		return;

	if (AIBehaviourComponent->GetPatrolPathLength() < 0)
		return;

	if (!bIsMovingToPatrolPoint)
	{
		bIsMovingToPatrolPoint = true;
		MoveToLocation(AIBehaviourComponent->GetNextPatrolPointLocation());
	}
}

void AEnemyController::SendMessageToAllies()
{
	for (auto& Elem : CharacterMgr->GetCharacterMap())
	{
		AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(Elem.Value);
		if (Elem.Key.IsValid() && EnemyCharacter)
		{
			Dispatch->DispatchMessage(SEND_MSG_IMMEDIATELY,
				ControlledEnemyCharacter->GetID(),
				Elem.Key,
				EMessageType::Msg_PlayerDetected,
				PlayerCharacter,
				0,
				GetWorld());
		}
	}
}

void AEnemyController::OnPlayerDetected(AActor* PlayerActor)
{
	PlayerCharacter = Cast<AProject_Relic_v2Character>(PlayerActor);

	bHasLineOfSight = true;
	StopMovement();
}

void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			if (!bHasLineOfSight)
			{
				//PlayerCharacter = Cast<AProject_Relic_v2Character>(Actor);
				OnPlayerDetected(Actor);
				SendMessageToAllies();

			}
		}
	}
}

void AEnemyController::ChangeState(State<AEnemyController>* NewState)
{
	FiniteStateMachine->ChangeState(NewState);
}


void AEnemyController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	delete FiniteStateMachine;
	FiniteStateMachine = nullptr;
	Super::EndPlay(EndPlayReason);
}

