#include "AttackState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"

AttackState::AttackState()
{
}

AttackState* AttackState::Instance()
{
	static AttackState Instance;
	return &Instance;
}

void AttackState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Entering Attack State.")); // DEBUG -----------------------

	EnemyController->ControlledEnemyCharacter->Crouch();

}

void AttackState::Execute(AEnemyController* EnemyController)
{
	// Time to patrol -> Patrol
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if (!EnemyController || !EnemyController->GetPawn())
		return;
}

void AttackState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Attack State.")); // DEBUG -----------------------

}
