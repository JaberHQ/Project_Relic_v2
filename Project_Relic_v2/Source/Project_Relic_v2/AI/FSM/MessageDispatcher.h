#pragma once

#include "CoreMinimal.h"
#include "Misc/Guid.h"
#include <set>

class ABaseCharacter;

const double SEND_MSG_IMMEDIATELY = 0.0f;
const uint8 NO_ADDITIONAL_INFO = 0;
//const uint8 SENDER_ID_IRRELEVANT = -1;

/**
 * 
 */
UENUM(BlueprintType)
enum class EMessageType : uint8
{
	Msg_PlayerDetected,
};


struct FTelegram
{
	FGuid Sender;
	FGuid Receiver;

	EMessageType Msg;

	double DispatchTime;

	TWeakObjectPtr<UObject> Player;

	TWeakObjectPtr<UObject> ExtraInfo;

	FTelegram(double _Time, FGuid _Sender, FGuid _Receiver, EMessageType _Msg, TWeakObjectPtr<UObject> _Player, TWeakObjectPtr<UObject> _Info = nullptr)
		: DispatchTime(_Time), Sender(_Sender),
		Receiver(_Receiver), Msg(_Msg),
		Player(_Player), ExtraInfo(_Info)
	{}

	//bool operator==(const FTelegram& Other) const
	//{
	//	return Sender == Other.Sender
	//		&& Receiver == Other.Receiver
	//		&& Msg == Other.Msg
	//		&& DispatchTime == Other.DispatchTime;
	//}
};

const double SmallestDelay = 0.25;


inline bool operator==(const FTelegram& t1, const FTelegram& t2)
{
	return (fabs(t1.DispatchTime - t2.DispatchTime) < SmallestDelay) &&
		(t1.Sender == t2.Sender) &&
		(t1.Receiver == t2.Receiver) &&
		(t1.Msg == t2.Msg);
}

inline bool operator<(const FTelegram& t1, const FTelegram& t2)
{
	if(t1 == t2)
	{
		return false;
	}

	else
	{
		return  (t1.DispatchTime < t2.DispatchTime);
	}
}

//inline std::ostream& operator<<(std::ostream& os, const FTelegram& t)
//{
//	os << "time: " << t.DispatchTime << "  Sender: " << t.Sender
//		<< "   Receiver: " << t.Receiver << "   Msg: " << t.Msg;
//
//	return os;
//}

//handy helper function for dereferencing the ExtraInfo field of the Telegram 
//to the required type.
template <class T>
inline T DereferenceToType(void* p)
{
	return *(T*)(p);
}


class PROJECT_RELIC_V2_API MessageDispatcher
{
public:
	~MessageDispatcher();

	static MessageDispatcher* Instance();

	void DispatchMessage(double					   Delay,
						 FGuid					   Sender,
						 FGuid					   Receiver,
						 EMessageType			   Msg,
						 TWeakObjectPtr<UObject>   Player,
						 TWeakObjectPtr<UObject>   ExtraInfo);

	void DispatchDelayedMessages();

private:
	std::set<FTelegram> PriorityQ;

	void Discharge(ABaseCharacter* Receiver, const FTelegram& Msg);

	MessageDispatcher();

	UWorld* World = nullptr;

};

#define Dispatch MessageDispatcher::Instance()
