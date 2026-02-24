#include "AI/FSM/States/Header/AlertState.h"
#include "AI/Enemy/EnemyController.h"
#include "AI/Enemy/EnemyCharacter.h"


AlertState::AlertState()
{
}


AlertState* AlertState::Instance()
{
	static AlertState Instance;
	return &Instance;
}

void AlertState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

}

void AlertState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if (!EnemyController || !EnemyController->GetPawn())
		return;
}

void AlertState::Exit(AEnemyController* EnemyController)
{
}

bool AlertState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}

