// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "EnemyAISense.generated.h"

class UEnemyAISense;
class UEnemyAISenseConfig;

// https://www.twoneuronsstudio.com/2023/02/13/ue5-tutorial-custom-ai-senses/
/**
 * 
 */
UCLASS(ClassGroup = AI, Config = Game)
class PROJECT_RELIC_V2_API UEnemyAISense : public UAISense
{
	GENERATED_UCLASS_BODY()

public:
	//UEnemyAISense(const FObjectInitializer& ObjectIntializer);

public:
	struct FDigestedTargetProperties
	{
		float TargetRadius;

		FDigestedTargetProperties();
		FDigestedTargetProperties(const UEnemyAISenseConfig& SenseConfig);
	};

protected:
	virtual float Update() override;
	void OnNewListenerImplementation(const FPerceptionListener& NewListener);
	void OnListenerUpdateImplementation(const FPerceptionListener& UpdatedListener);
	void OnListenerRemovedImplementation(const FPerceptionListener& RemovedListener);

public:
	TArray<FDigestedTargetProperties> DigestedProperties;
};
