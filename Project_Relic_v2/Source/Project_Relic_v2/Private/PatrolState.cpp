#include "PatrolState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "HuntState.h"
#include "DeadState.h"
#include "AttackState.h"
#include "TakeCoverState.h"
#include "Project_Relic_v2Character.h"
#include "MessageDispatcher.h"

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
	
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Entering Patrol State.")); 

	//EnemyController->BeginPatrol();
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

	if (!EnemyController->GetIsMovingToPatrolPoint())
	{
		EnemyController->MoveToNextPatrolPoint();
	}	
}

void PatrolState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Patrol State."));

}

bool PatrolState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	switch (Msg.Msg)
	{
		case EMessageType::Msg_PlayerDetected:
		{
			AActor* Player = Cast<AActor>(Msg.Player);
			if (Player)
				EnemyController->OnPlayerDetected(Player);
		}
	}
	return true;
}
