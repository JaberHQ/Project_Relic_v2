#include "AI/FSM/MessageDispatcher.h"
#include "Character/CharacterManager.h"
#include "AI/Enemy/EnemyController.h"
#include "Character/BaseCharacter.h"


MessageDispatcher::MessageDispatcher()
{
}

MessageDispatcher::~MessageDispatcher()
{
}

void MessageDispatcher::DispatchMessage(double Delay, FGuid Sender, FGuid Receiver, EMessageType Msg, TWeakObjectPtr<UObject> Player, TWeakObjectPtr<UObject> ExtraInfo)
{
	ABaseCharacter* _Sender = CharacterMgr->GetCharacterFromID(Sender);
	ABaseCharacter* _Receiver = CharacterMgr->GetCharacterFromID(Receiver);

	if (!_Receiver)
		return;

	FTelegram Telegram(Delay, Sender, Receiver, Msg, Player, ExtraInfo);

	if (Delay <= 0.0)
	{
		Discharge(_Receiver, Telegram);
	}
	else
	{
		World = _Receiver->GetWorld();
		double CurrentTime = World->GetTimeSeconds();
		Telegram.DispatchTime = CurrentTime + Delay;
		PriorityQ.insert(Telegram);
	}
}

MessageDispatcher* MessageDispatcher::Instance()
{
	static MessageDispatcher Instance;
	return &Instance;
}

void MessageDispatcher::DispatchDelayedMessages()
{
	double CurrentTime = World->GetTimeSeconds();

	while ( !PriorityQ.empty() &&
			(PriorityQ.begin()->DispatchTime < CurrentTime) &&
			(PriorityQ.begin()->DispatchTime > 0) )
	{
		const FTelegram& Telegram = *PriorityQ.begin();
		ABaseCharacter* Receiver = CharacterMgr->GetCharacterFromID(Telegram.Receiver);
		Discharge(Receiver, Telegram);
		PriorityQ.erase(PriorityQ.begin());
	}
}

void MessageDispatcher::Discharge(ABaseCharacter* Receiver, const FTelegram& Msg)
{
	if (!IsValid(Receiver))
		return;


	if (!Receiver->HandleMessage(Msg))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Could not handle message")); // DEBUG -----------------------

	}

}