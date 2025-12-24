// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_Player.generated.h"

class UAISense_Player;
class UAISenseConfig_Player;


/**
 * 
 */
UCLASS(ClassGroup = AI, Config = Game)
class PROJECT_RELIC_V2_API UAISense_Player : public UAISense
{
	GENERATED_UCLASS_BODY()
	
public:
	struct FDigestedTargetProperties
	{
		float TargetRadius;

		FDigestedTargetProperties();
		FDigestedTargetProperties(const UAISenseConfig_Player& SenseConfig);
	};

protected:
	virtual float Update() override;
	void OnNewListenerImplementation(const FPerceptionListener& NewListener);
	void OnListenerUpdateImplementation(const FPerceptionListener& UpdatedListener);
	void OnListenerRemovedImplementation(const FPerceptionListener& RemovedListener);

public:
	TArray<FDigestedTargetProperties> DigestedProperties;
};
