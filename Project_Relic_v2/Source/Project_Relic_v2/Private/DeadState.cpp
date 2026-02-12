#include "DeadState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"

DeadState::DeadState()
{

}

DeadState* DeadState::Instance()
{
	static DeadState Instance;
	return &Instance;
}

void DeadState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Entering Dead State.")); // DEBUG -----------------------

	//EnemyController->UnPossess();
}

void DeadState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if(!EnemyController || !EnemyController->GetPawn())
		return;
}

void DeadState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Dead State.")); // DEBUG -----------------------

}