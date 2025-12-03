// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h"
#include "CrouchTimelineComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_RELIC_V2_API UCrouchTimelineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCrouchTimelineComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void Play();

	UFUNCTION()
	void Reverse();

	void OnTimelineUpdate(float value);

	float GetTimelineValue() const;
protected:
	UFUNCTION()
	void TimelineFinishedFunction();

protected:
	FOnTimelineFloat TimelineUpdateFloat;
	FOnTimelineEvent TimelineFinishedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTimelineComponent* CrouchTimelineComp;

	UPROPERTY()
	FTimeline CrouchTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timeline")
	UCurveFloat* CrouchCurveFloat;

private:
	float TimelineValue;
};
