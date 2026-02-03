#include "PatrolState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"

PatrolState::PatrolState()
{
}

//PatrolState::~PatrolState()
//{
//}
PatrolState* PatrolState::Instance()
{
	static PatrolState Instance;
	return &Instance;
}

void PatrolState::Enter(AEnemyController* EnemyController)
{
	check(EnemyController);
	check(EnemyController->ControlledEnemyCharacter);

	TArray<AActor*> AvailablePatrolPoints = EnemyController->GetPatrolPoints();
	if(AvailablePatrolPoints.Num() == 0)
		return;


	FEnemyMoveSpeed MoveSpeed;
	EnemyController->ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Patrol);

	AAIPatrolPoint* CurrentPoint = EnemyController->PatrolLocation;

	AAIPatrolPoint* NextPatrolPoint = nullptr;

	if(EnemyController->CurrentPatrolPoint != AvailablePatrolPoints.Num() - 1)
	{
		NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[EnemyController->CurrentPatrolPoint++]);
	}
	else
	{
		NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[0]);
		EnemyController->CurrentPatrolPoint = 0;
	}

	EnemyController->PatrolLocation = NextPatrolPoint;
	EnemyController->MoveToActor(EnemyController->PatrolLocation);

}

void PatrolState::Execute(AEnemyController* EnemyController)
{
	// If heard minor noise -> Alert
	// If heard major noise -> Investigate
	// If see player (low visibility) -> Alert
	// If see player (clear) -> Chase or Attack

	if(!EnemyController || !EnemyController->GetPawn())
		return;

	// For now we're doing if the player is seen
		// Stripping away the stealth features until it works well
	if(EnemyController->GetHasLineOfSight())
	{
		//EnemyController->ChangeState(Chase::Instance());
	}

}

void PatrolState::Exit(AEnemyController* EnemyController)
{
}
