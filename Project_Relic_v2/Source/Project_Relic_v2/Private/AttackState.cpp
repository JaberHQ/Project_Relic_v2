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

	EnemyController->BeginAttack(); 
	EnemyController->StartAttackingTimer(); // Start the timer that dictates how long the enemy stays in the attack state
}

void AttackState::Execute(AEnemyController* EnemyController)
{
	if (!EnemyController || !EnemyController->GetPawn())
		return;

	// Start shooting (continuously)
	if (!EnemyController->ControlledEnemyCharacter->GetIsShooting())
	{
		EnemyController->StartShooting();
		return;
	}

	// Stop attacking
	if (!EnemyController->GetIsAttacking())
	{
		EnemyController->ChangeState(TakeCoverState::Instance()); 
		return;
	}
	
}

void AttackState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Attack State.")); // DEBUG -----------------------
	
	EnemyController->FinishAttack();
}

bool AttackState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
