#pragma once

#include "CoreMinimal.h"
#include "State.h"

class AEnemyController;

class PROJECT_RELIC_V2_API DeadState : public State<AEnemyController>
{
public:
	static DeadState* Instance();

	virtual void Enter(AEnemyController* EnemyController);
	virtual void Execute(AEnemyController* EnemyController);
	virtual void Exit(AEnemyController* EnemyController);


private:
	DeadState();

};

