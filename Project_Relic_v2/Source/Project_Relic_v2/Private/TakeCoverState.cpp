#include "TakeCoverState.h"
#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "CharacterManager.h"
#include "MessageDispatcher.h"
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

	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Entering Take Cover State.")); 


	/*for (auto& Elem : CharacterMgr->GetCharacterMap())
	{
		if (Elem.Key.IsValid())
		{
			Dispatch->DispatchMessage(SEND_MSG_IMMEDIATELY,
									EnemyController->ControlledEnemyCharacter->GetID(),
									Elem.Key,
									EMessageType::Msg_PlayerDetected,
									0,
									EnemyController->GetWorld());
		}
		

	}
	*/
	

	EnemyController->BeginToTakeCover(); 
	
}


void TakeCoverState::Execute(AEnemyController* EnemyController)
{
	if (!EnemyController || !EnemyController->GetPawn())
		return;

	// If the ai has found cover
	if (!EnemyController->GetIsMovingToCover() && !EnemyController->GetIsIdle())
	{
		EnemyController->FinishTakingCover();

		// Delay enemy going into attack state 
			// So that AI can sit idle behind cover before trying to shoot
		EnemyController->SetTimerBeforeAttacking(); 
														
		return;
	}

	if (EnemyController->GetIsAttacking())
	{
		EnemyController->ChangeState(AttackState::Instance());
		return;
	}
}

	

void TakeCoverState::Exit(AEnemyController* EnemyController)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Leaving Take Cover State.")); // DEBUG -----------------------

	
}

bool TakeCoverState::OnMessage(AEnemyController* EnemyController, const FTelegram& Msg)
{
	return false;
}
