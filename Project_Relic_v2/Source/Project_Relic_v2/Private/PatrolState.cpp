#include "PatrolState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "HuntState.h"
#include "DeadState.h"
#include "TakeCoverState.h"

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

	
	FEnemyMoveSpeed MoveSpeed;
	EnemyController->ControlledEnemyCharacter->UpdateWalkSpeed(MoveSpeed.Patrol);
	
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Entering Patrol State.")); // DEBUG -----------------------

	EnemyController->BeginPatrol();
	AvailablePatrolPoints = EnemyController->GetPatrolPoints();

}

void PatrolState::Execute(AEnemyController* EnemyController)
{
	if (!EnemyController || !EnemyController->GetPawn())
		return;

	// If player is detected
	if (EnemyController->GetHasLineOfSight())
	{
		EnemyController->ChangeState(TakeCoverState::Instance());
		return;
	}

	// Move to next patrol point
	if (!EnemyController->GetIsMovingToPatrolPoint())
	{
		CurrentPoint = EnemyController->PatrolLocation;

		NextPatrolPoint = nullptr;

		int32 CurrentPatrolPoint = EnemyController->GetCurrentPatrolPoint();
		if (CurrentPatrolPoint != AvailablePatrolPoints.Num() - 1)
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[CurrentPatrolPoint++]);
		}
		else
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[0]);
			CurrentPatrolPoint = 0;
		}

		EnemyController->PatrolLocation = NextPatrolPoint;
		EnemyController->SetIsMovingToPatrolPoint(true);
		EnemyController->SetCurrentPatrolPoint(CurrentPatrolPoint);
		EnemyController->MoveToActor(EnemyController->PatrolLocation);
		return;
	}
	
}

void PatrolState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Patrol State.")); // DEBUG -----------------------

}

bool PatrolState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
