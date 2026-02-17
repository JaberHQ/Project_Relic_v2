#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Misc/Guid.h"
#include "BaseCharacter.generated.h"

struct FTelegram
{
	FGuid Sender;
	FGuid Receiver;

	int32 Msg;

	double DispatchTime;

	void* ExtraInfo;

};

UCLASS()
class PROJECT_RELIC_V2_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

	//static FNavLinkId GenerateUniqueId() override;

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual bool HandleMessage(const FTelegram& Msg) { return false; }

public:
	FGuid GetID() const { return ID; }


private:
	/* Set the unique ID for the instatiated enemy character */
	void SetID();

private:
	FGuid ID; // The unique identifier for each enemy instantiated
	static FGuid NextValidID; // For each enemy instantiated, this will increment

protected:
	
};

