#include "SearchState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"


SearchState::SearchState()
{
}

SearchState* SearchState::Instance()
{
	static SearchState Instance;
	return &Instance;
}

void SearchState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

}

void SearchState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if (!EnemyController || !EnemyController->GetPawn())
		return;
}

void SearchState::Exit(AEnemyController* EnemyController)
{
}

bool SearchState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
