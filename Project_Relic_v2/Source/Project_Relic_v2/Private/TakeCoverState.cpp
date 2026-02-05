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
	
	EnemyController->SetIsMovingToCover(true);
	EnemyController->RunFindCoverEQS();
}


void TakeCoverState::Execute(AEnemyController* EnemyController)
{
	if(!EnemyController || !EnemyController->GetPawn())
		return;

	// If the ai has found cover
	if (!(EnemyController->GetIsMovingToCover()))
	{
		EnemyController->ControlledEnemyCharacter->Crouch();
		EnemyController->ChangeState(AttackState::Instance());
		return;
	}
}

	

void TakeCoverState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Take Cover State.")); // DEBUG -----------------------

}