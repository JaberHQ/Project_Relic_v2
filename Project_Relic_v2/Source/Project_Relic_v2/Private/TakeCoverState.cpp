#include "TakeCoverState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "AttackState.h"

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

	//EnemyController->ControlledEnemyCharacter->UnCrouch();
	FEnemyMoveSpeed MoveSpeed;
	EnemyController->ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Chase);

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Entering Take Cover State.")); // DEBUG -----------------------

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

	if (EnemyController->GetIsInCover())
	{
		EnemyController->ChangeState(AttackState::Instance());
		return;
	}

	if (!(EnemyController->GetIsMovingToCover()))
	{
		EnemyController->SetIsMovingToCover(true);
		EnemyController->RunEQS();
	}
}

void TakeCoverState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Take Cover State.")); // DEBUG -----------------------

}