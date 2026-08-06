#include "AI/FSM/States/Header/InvestigateState.h"
#include "AI/FSM/States/Header/TakeCoverState.h"
#include "AI/FSM/States/Header/PatrolState.h"
#include "AI/Enemy/EnemyController.h"
#include "AI/Enemy/EnemyCharacter.h"


InvestigateState::InvestigateState()
{
}

InvestigateState* InvestigateState::Instance()
{
	static InvestigateState Instance;
	return &Instance;
}

void InvestigateState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);
	check(EnemyController->PlayerCharacter)

	// If player last known location
	if (!EnemyController->GetTargetLastKnownLocation().IsZero())
	{
		EnemyController->StartDetection();
		//EnemyController->RotateToFacePlayer();
		//EnemyController->StartInvestigateTimer();
	}
	// rotate to face last known location
}

void InvestigateState::Execute(AEnemyController* EnemyController)
{
	// Move to last known location
	// if player is seen again
	// go to attack state
	// otherwise go to patrol state

	if (!EnemyController || !EnemyController->GetPawn())
		return;

	//if (!EnemyController->GetHasLineOfSight())
	//{
	//	EnemyController->StopDetection();
	//}

	// Player fully detected
	if (EnemyController->GetShouldChase())
	{
		EnemyController->ChangeState(TakeCoverState::Instance());
		return;
	}

	// Stop trying to detect player
	if (!EnemyController->GetIsDetectingPlayer())
	{
		EnemyController->ChangeState(PatrolState::Instance());
		return;
	}
}

void InvestigateState::Exit(AEnemyController* EnemyController)
{
}

bool InvestigateState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
