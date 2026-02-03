
#include "StateMachine.h"

template<class Entity_Type>
StateMachine<Entity_Type>::StateMachine(Entity_Type* EntityOwner)
{
	Owner = EntityOwner;
	CurrentState = nullptr;
	PreviousState = nullptr;
	GlobalState = nullptr;
}

template<class Entity_Type>
void StateMachine<Entity_Type>::SetCurrentState(State<Entity_Type>* State)
{
	CurrentState = State;
}

template<class Entity_Type>
void StateMachine<Entity_Type>::SetPreviousState(State<Entity_Type>* State)
{
	PreviousState = State;
}

template<class Entity_Type>
void StateMachine<Entity_Type>::SetGlobalState(State<Entity_Type>* State)
{
	GlobalState = State;
}

template<class Entity_Type>
void StateMachine<Entity_Type>::ChangeState(State<Entity_Type>* NewState)
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

template<class Entity_Type>
void StateMachine<Entity_Type>::RevertToPreviousState()
{
	ChangeState(PreviousState);
}

template<class Entity_Type>
void StateMachine<Entity_Type>::Update() const
{
	if (GlobalState)
		GlobalState->Execute(Owner);

	if (CurrentState)
		CurrentState->Execute(Owner);
}

template<class Entity_Type>
bool StateMachine<Entity_Type>::IsInState(const State<Entity_Type>* State) const
{
	return CurrentState == State;
}
