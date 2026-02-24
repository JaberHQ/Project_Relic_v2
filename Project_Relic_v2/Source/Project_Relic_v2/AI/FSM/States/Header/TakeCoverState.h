#pragma once

#include "CoreMinimal.h"
#include "AI/FSM/State.h"

class AEnemyController;

class PROJECT_RELIC_V2_API TakeCoverState : public State<AEnemyController>
{
public:
	static TakeCoverState* Instance();

	virtual void Enter(AEnemyController* EnemyController);
	virtual void Execute(AEnemyController* EnemyController);
	virtual void Exit(AEnemyController* EnemyController);
	virtual bool OnMessage(AEnemyController* EnemyController, const FTelegram& Msg);


private:
	TakeCoverState();

};

