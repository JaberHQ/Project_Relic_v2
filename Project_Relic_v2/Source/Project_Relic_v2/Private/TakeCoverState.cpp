#include "TakeCoverState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"


TakeCoverState::TakeCoverState()
{
}

TakeCoverState* TakeCoverState::Instance()
{
	static TakeCoverState Instance;
	return &Instance;
}

void TakeCoverState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

}

void TakeCoverState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if(!EnemyController || !EnemyController->GetPawn())
		return;
}

void TakeCoverState::Exit(AEnemyController* EnemyController)
{
}