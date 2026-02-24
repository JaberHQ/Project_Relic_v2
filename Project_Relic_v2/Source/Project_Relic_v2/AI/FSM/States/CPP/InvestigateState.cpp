#include "AI/FSM/States/Header/InvestigateState.h"
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

}

void InvestigateState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if (!EnemyController || !EnemyController->GetPawn())
		return;
}

void InvestigateState::Exit(AEnemyController* EnemyController)
{
}

bool InvestigateState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
