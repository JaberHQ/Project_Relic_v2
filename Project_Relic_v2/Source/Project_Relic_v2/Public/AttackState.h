#pragma once

#include "CoreMinimal.h"
#include "State.h"

class AEnemyController;

class PROJECT_RELIC_V2_API AttackState : public State<AEnemyController>
{
public:
	static AttackState* Instance();

	virtual void Enter(AEnemyController* EnemyController);
	virtual void Execute(AEnemyController* EnemyController);
	virtual void Exit(AEnemyController* EnemyController);


private:
	AttackState();

};
