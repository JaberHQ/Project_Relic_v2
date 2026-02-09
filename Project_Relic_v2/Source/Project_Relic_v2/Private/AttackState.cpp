#include "AttackState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "TakeCoverState.h"

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

	EnemyController->GetToAttackPoint();
	//EnemyController->SetIsAttacking(true);
}

void AttackState::Execute(AEnemyController* EnemyController)
{
	if (!EnemyController || !EnemyController->GetPawn())
		return;


	if (!(EnemyController->GetIsAttacking()))
	{
		//EnemyController->ChangeState(TakeCoverState::Instance());
		EnemyController->ControlledEnemyCharacter->Crouch();
		return;
	}

	if (EnemyController->GetIsAttacking())
	{
		// Shoot player
		EnemyController->ControlledEnemyCharacter->UnCrouch();
		return;
	}
}

void AttackState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Attack State.")); // DEBUG -----------------------
}
