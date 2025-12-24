// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "AISense_Player.h"
#include "AISenseConfig_Player.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UAISenseConfig_Player : public UAISenseConfig
{
	GENERATED_BODY()
	
public:
	UAISenseConfig_Player(const FObjectInitializer& ObjectInitializer);

	virtual TSubclassOf<UAISense> GetSenseImplementation() const override;

public:
	/* Implements the logic for this sense config */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", NoClear, Config)
	TSubclassOf<UAISense_Player> Implementation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config, meta = (UIMin = 0.0, ClampMin = 0.0))
	float TargetRadius = 10.0f; // Maximum sight distance to notice a target

#if WITH_GAMEPLAY_DEBUGGER
	virtual void DescribeSelfToGameplayDebugger(const UAIPerceptionComponent* PerceptionComponent, FGameplayDebuggerCategory* DebuggerCategory) const override;
#endif // WITH_GAMEPLAY_DEBUGGER

};
