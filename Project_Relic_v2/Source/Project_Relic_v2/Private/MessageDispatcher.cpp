#include "MessageDispatcher.h"
#include "CharacterManager.h"
#include "EnemyController.h"
#include "BaseCharacter.h"


MessageDispatcher::MessageDispatcher()
{
}

MessageDispatcher::~MessageDispatcher()
{
}

void MessageDispatcher::DispatchMessage(double Delay, FGuid Sender, FGuid Receiver, EMessageType Msg, TWeakObjectPtr<UObject> Player, void* ExtraInfo, UWorld* World)
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

void MessageDispatcher::DispatchDelayedMessages(UWorld* World)
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
	if (Receiver == nullptr)
		return;

	if (!Receiver->HandleMessage(Msg))
	{
		return;
		// Could not be handled
	}
}