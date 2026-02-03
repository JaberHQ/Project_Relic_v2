#include "HuntState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"

HuntState::HuntState()
{
}

HuntState* HuntState::Instance()
{
	static HuntState Instance;
	return &Instance;
}

void HuntState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);
	check(EnemyController->PlayerCharacter);
	//AEnemyCharacter* EnemyCharacter = EnemyController->ControlledEnemyCharacter;

	EnemyController->MoveToActor(EnemyController->PlayerCharacter);

}

void HuntState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if (!EnemyController || !EnemyController->GetPawn())
		return;
}

void HuntState::Exit(AEnemyController* EnemyController)
{
}
