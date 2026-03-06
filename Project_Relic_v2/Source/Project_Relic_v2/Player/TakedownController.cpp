// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TakedownController.h"
#include "Player/Project_Relic_v2Character.h"
#include "AI/Enemy/EnemyCharacter.h"
#include "Navigation/PathFollowingComponent.h"

ATakedownController::ATakedownController()
{
}

void ATakedownController::PrepareTakedown(AProject_Relic_v2Character* Player, AEnemyCharacter* Enemy)
{
	if (!Player)
		return;

	PlayerOwner = Player;
	Target = Enemy;

	FVector Goal = Target->GetActorLocation() + Target->GetActorForwardVector() * -50.0f;

	ExecuteTakedown(Goal);
}

void ATakedownController::ExecuteTakedown(FVector& Goal)
{
	MoveToLocation(Goal, PlayerOwner->GetTakedownErrorAcceptance());
}

void ATakedownController::BeginPlay()
{
	Super::BeginPlay();
}

void ATakedownController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (Result.IsSuccess() && PlayerOwner && Target)
	{
		if (PlayerOwner->Implements<UCombatInterface>() && Target->Implements<UCombatInterface>())
		{

			ICombatInterface::Execute_Takedown(PlayerOwner);
			ICombatInterface::Execute_Takedown(Target);
		}
	}
}
