// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TakedownController.generated.h"

class AProject_Relic_v2Character;
class AEnemyCharacter;
/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API ATakedownController : public AAIController
{
	GENERATED_BODY()
	
	ATakedownController();

public:
	void PrepareTakedown(AProject_Relic_v2Character* Player, AEnemyCharacter* Enemy);

protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

private:
	/** Called after the controller finishes moving the controlled character to a specified location or actor **/
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

	void ExecuteTakedown(FVector& Goal);

public:
	AProject_Relic_v2Character* PlayerOwner;
	AEnemyCharacter* Target;

};
