

#pragma once

#include "CoreMinimal.h"
#include "State.h"
/**
 * 
 */
template<class Entity_Type>
class StateMachine
{
public:
	StateMachine(Entity_Type* EntityOwner);

	void SetCurrentState(State<Entity_Type>* State);
	void SetPreviousState(State<Entity_Type>* State);
	void SetGlobalState(State<Entity_Type>* State);


	void Update() const;

	void ChangeState(State<Entity_Type>* NewState);

	void RevertToPreviousState();

	State<Entity_Type>* GetCurrentState() const { return CurrentState; }
	State<Entity_Type>* GetPreviousState() const { return PreviousState; }
	State<Entity_Type>* GetGlobalState() const { return GlobalState; }

	bool IsInState(const State<Entity_Type>* State) const;

private:
	Entity_Type* Owner;
	State<Entity_Type>* CurrentState;
	State<Entity_Type>* PreviousState;
	State<Entity_Type>* GlobalState;

};
