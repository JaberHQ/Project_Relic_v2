#include "AI/FSM/States/Header/PatrolState.h"
#include "AI/Enemy/EnemyController.h"
#include "AI/Enemy/EnemyCharacter.h"
#include "AI/FSM/States/Header/HuntState.h"
#include "AI/FSM/States/Header/DeadState.h"
#include "AI/FSM/States/Header/AttackState.h"
#include "AI/FSM/States/Header/TakeCoverState.h"
#include "AI/FSM/States/Header/InvestigateState.h"
#include "Player/Project_Relic_v2Character.h"
#include "AI/FSM/MessageDispatcher.h"

PatrolState::PatrolState()
{
}

//PatrolState::~PatrolState()
//{
//}
PatrolState* PatrolState::Instance()
{
	static PatrolState Instance;
	return &Instance;
}

void PatrolState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);
	
	EnemyController->BeginPatrol();
}

void PatrolState::Execute(AEnemyController* EnemyController)
{
	if (!EnemyController || !EnemyController->GetPawn())
		return;

	// If player is detected
	/*if (EnemyController->GetIsDetectingPlayer())
	{
		EnemyController->ChangeState(InvestigateState::Instance());
		return;
	}*/

	if (EnemyController->GetHasLineOfSight())
	{
		EnemyController->ChangeState(InvestigateState::Instance());
		return;
	}

	if (!EnemyController->GetIsMovingToPatrolPoint())
	{
		EnemyController->MoveToNextPatrolPoint();
	}	
}

void PatrolState::Exit(AEnemyController* EnemyController)
{
}

bool PatrolState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	switch (Msg.Msg)
	{
		case EMessageType::Msg_PlayerDetected:
		{
			AActor* Player = Cast<AActor>(Msg.ExtraInfo);
			if (IsValid(Player))
				EnemyController->OnPlayerDetected(Player);
		}
	}
	return true;
}
