#include "IdleState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"

IdleState::IdleState()
{
}

IdleState* IdleState::Instance()
{
	static IdleState Instance;
	return &Instance;
}

void IdleState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

}

void IdleState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if(!EnemyController || !EnemyController->GetPawn())
		return;
}

void IdleState::Exit(AEnemyController* EnemyController)
{
}

bool IdleState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
