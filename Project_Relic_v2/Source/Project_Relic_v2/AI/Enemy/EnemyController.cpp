// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "AI/AIPatrolPoint.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "BehaviorTree/BehaviorTree.h"
#include "AI/AISense/AISense_Player.h"
#include "AI/AISense/AISenseConfig_Player.h"
#include "Player/Project_Relic_v2Character.h"
#include <Perception/AISenseConfig_Sight.h>
#include "Perception/AISense_Sight.h"
#include "Navigation/PathFollowingComponent.h"
#include "Engine/Canvas.h"
#include "Character/CharacterManager.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;

	InitPerceptionSystem();

	CurrentPatrolPoint = 0;

	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));

	PatrolLocationKey = "PatrolLocation";
	PlayerKey = "EnemyActor";
	bHasLineOfSightKey = "HasLineOfSight";
	bHasFoundCover = "HasFoundCover";
	CoverLocationKey = "CoverLocation";
}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyController::Death()
{
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Create a reference for the owning character
	ControlledEnemyCharacter = Cast<AEnemyCharacter>(InPawn); 
	if (ControlledEnemyCharacter)
	{
		AIBehaviourComponent = ControlledEnemyCharacter->GetAIBehaviourComponent();

		if (BehaviourTree && BehaviourTree->BlackboardAsset)
		{
			BlackboardComponent->InitializeBlackboard(*(BehaviourTree->BlackboardAsset));
		}
		BehaviourTreeComponent->StartTree(*BehaviourTree);
	}
}

void AEnemyController::InitPerceptionSystem()
{
	AISenseConfig_Player = CreateDefaultSubobject<UAISenseConfig_Player>(TEXT("Sight Config"));
	
	if (AISenseConfig_Player)
	{
		PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component"));
		SetPerceptionComponent(*PerceptionComponent);
		AISenseConfig_Player->TargetRadius = 1000.0f;
		PerceptionComponent->ConfigureSense(*AISenseConfig_Player);
		PerceptionComponent->SetDominantSense(UAISenseConfig_Player::StaticClass());
		
		PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnTargetDetected);
	}
}

void AEnemyController::BeginPatrol()
{
	ControlledEnemyCharacter->UpdateWalkSpeed(ControlledEnemyCharacter->MoveSpeed.Patrol);
}

void AEnemyController::RunFindCoverEQS()
{
	FindCoverQueryRequest = FEnvQueryRequest(FindCoverQuery, ControlledEnemyCharacter);

	FindCoverQueryRequest.Execute(EEnvQueryRunMode::RandomBest5Pct, this, &AEnemyController::MoveToQueryRequest);
}

void AEnemyController::MoveToQueryRequest(TSharedPtr<FEnvQueryResult> Result)
{
	if (Result->IsSuccessful() && Result->Items.Num() > 0)
	{
		const FVector TargetLocation = Result->GetItemAsLocation(0);
		BlackboardComponent->SetValueAsVector(CoverLocationKey, TargetLocation);
		//MoveTo(TargetLocation);
	}
}

void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (Result.IsSuccess() && AIBehaviourComponent && GetIsMovingToPatrolPoint())
	{
		AIBehaviourComponent->Wait();
	}
}

void AEnemyController::SetIsMovingToPatrolPoint(bool IsMovingToPatrolPoint)
{
	if (!AIBehaviourComponent)
		return;

	AIBehaviourComponent->SetIsMovingToPatrolPoint(IsMovingToPatrolPoint);
}

bool AEnemyController::GetIsMovingToPatrolPoint() const
{
	if (!AIBehaviourComponent)
		return false;
	
	if (AIBehaviourComponent->GetIsMovingToPatrolPoint())
		return true;

	return false;
}

void AEnemyController::MoveToNextPatrolPoint()
{
	if (!AIBehaviourComponent)
		return;

	AIBehaviourComponent->MoveToNextPatrolPoint(this);
}


void AEnemyController::OnDamageTaken()
{
	OnPlayerDetected(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void AEnemyController::SetHasFoundCover(bool IsMovingToCover)
{
	BlackboardComponent->SetValueAsBool(bHasFoundCover, IsMovingToCover);
}

bool AEnemyController::GetHasFoundCover() const
{
	return BlackboardComponent->GetValueAsBool(bHasFoundCover);
}

void AEnemyController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Player>())
		{
			OnPlayerDetected(Actor);
		}
	}
}

void AEnemyController::OnPlayerDetected(AActor* PlayerActor)
{
	PlayerCharacter = Cast<AProject_Relic_v2Character>(PlayerActor);
	if (PlayerCharacter)
	{
		if (BlackboardComponent)
		{
			BlackboardComponent->SetValueAsObject(PlayerKey, PlayerCharacter);
			BlackboardComponent->SetValueAsBool(bHasLineOfSightKey, true);

		}
	}
}


void AEnemyController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

