

#pragma once

#include "CoreMinimal.h"
#include "AI/FSM/State.h"

class AEnemyController;

class PROJECT_RELIC_V2_API IdleState : public State<AEnemyController>
{
public:
	static IdleState* Instance();

	virtual void Enter(AEnemyController* EnemyController);
	virtual void Execute(AEnemyController* EnemyController);
	virtual void Exit(AEnemyController* EnemyController);
	virtual bool OnMessage(AEnemyController* EnemyController, const FTelegram& Msg);


private:
	IdleState();

};
