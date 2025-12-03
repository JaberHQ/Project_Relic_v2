// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "CrouchTimelineActor.generated.h"

UCLASS()
class PROJECT_RELIC_V2_API ACrouchTimelineActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACrouchTimelineActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FOnTimelineEvent TimelineFinishedEvent;

	UFUNCTION()
	void TimelineFinishedFunction();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTimelineComponent* CrouchTimelineComp;


};
