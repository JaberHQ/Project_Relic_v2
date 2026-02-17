

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
	StateMachine(Entity_Type* EntityOwner)
	{
		Owner = EntityOwner;
		CurrentState = nullptr;
		PreviousState = nullptr;
		GlobalState = nullptr;
	}

	void SetCurrentState(State<Entity_Type>* State)
	{
		CurrentState = State;
	}

	void SetPreviousState(State<Entity_Type>* State)
	{
		PreviousState = State;
	}

	void SetGlobalState(State<Entity_Type>* State)
	{
		GlobalState = State;
	}

	void Update() const
	{
		if (GlobalState)
			GlobalState->Execute(Owner);

		if (CurrentState)
			CurrentState->Execute(Owner);
	}

	void ChangeState(State<Entity_Type>* NewState)
	{
		check(NewState && "<StateMachine::ChangeState> trying to change to null state");

		PreviousState = CurrentState;

		if (CurrentState)
		{
			CurrentState->Exit(Owner);
		}


		CurrentState = NewState;

		CurrentState->Enter(Owner);
	}

	void RevertToPreviousState()
	{
		ChangeState(PreviousState);
	}

	State<Entity_Type>* GetCurrentState() const { return CurrentState; }
	State<Entity_Type>* GetPreviousState() const { return PreviousState; }
	State<Entity_Type>* GetGlobalState() const { return GlobalState; }

	bool IsInState(const State<Entity_Type>* State) const
	{
		return CurrentState == State;
	}

	bool HandleMessage(const FTelegram& Msg) const
	{
		if (CurrentState && CurrentState->OnMessage(Owner, Msg))
			return true;

		if (GlobalState && GlobalState->OnMessage(Owner, Msg))
			return true;

		return false;
	}

private:
	Entity_Type* Owner;
	State<Entity_Type>* CurrentState;
	State<Entity_Type>* PreviousState;
	State<Entity_Type>* GlobalState;

};

