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


	//EnemyController->ControlledEnemyCharacter->UnCrouch();
	FEnemyMoveSpeed MoveSpeed;
	EnemyController->ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Chase);
}

void HuntState::Execute(AEnemyController* EnemyController)
{
	// Can see play + in range -> Attack
	// Lost sight of player -> Search
	// Low health -> Take cover
	// Ally calls out player location -> Hunt (new target Pos)


	if (!EnemyController || !EnemyController->GetPawn())
		return;
}

void HuntState::Exit(AEnemyController* EnemyController)
{
}
