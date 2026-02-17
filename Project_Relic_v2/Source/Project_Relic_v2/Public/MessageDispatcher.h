#pragma once

#include "CoreMinimal.h"
#include "Misc/Guid.h"
#include "BaseCharacter.h"


/**
 * 
 */
enum class EMessageType : uint8
{
	Msg_PlayerDetected
};




class PROJECT_RELIC_V2_API MessageDispatcher
{
public:
	~MessageDispatcher();

	static MessageDispatcher* Instance()
	{
		static MessageDispatcher Instance;
		return &Instance;
	}

	void DispatchMessage(double Delay,
						 int    Sender,
						 int    Teceiver,
						 int    Msg,
						 void*  ExtraInfo);

	void DispatchDelayedMessages();

private:
	TSet<FTelegram> PriorityQ;

	void Discharge(ABaseCharacter* Receiver, const FTelegram& Msg);

	MessageDispatcher();

};

#define Dispatch MessageDispatcher::Instance()
