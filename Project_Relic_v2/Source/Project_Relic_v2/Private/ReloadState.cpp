#include "ReloadState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"


ReloadState::ReloadState()
{
}

ReloadState* ReloadState::Instance()
{
	static ReloadState Instance;
	return &Instance;
}

void ReloadState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

}

void ReloadState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if(!EnemyController || !EnemyController->GetPawn())
		return;
}

void ReloadState::Exit(AEnemyController* EnemyController)
{
}

bool ReloadState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
