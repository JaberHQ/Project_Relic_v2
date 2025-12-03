// Fill out your copyright notice in the Description page of Project Settings.


#include "CrouchTimelineComponent.h"

// Sets default values for this component's properties
UCrouchTimelineComponent::UCrouchTimelineComponent()
	:TimelineValue(0.0f)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	CrouchTimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineComponent"));
	
}


// Called when the game starts
void UCrouchTimelineComponent::BeginPlay()
{
	Super::BeginPlay();


	if(CrouchCurveFloat)
	{
		TimelineUpdateFloat.BindUFunction(this, FName("OnTimelineUpdate"));
		CrouchTimelineComp->AddInterpFloat(CrouchCurveFloat, TimelineUpdateFloat);

		TimelineFinishedEvent.BindUFunction(this, FName("TimelineFinishedFunction"));
		CrouchTimelineComp->SetTimelineFinishedFunc(TimelineFinishedEvent);

		CrouchTimelineComp->SetLooping(false);

		
		
	}
	
}

void UCrouchTimelineComponent::Play()
{
	if (CrouchTimelineComp)
	{
		CrouchTimelineComp->PlayFromStart();
	}

	if(GEngine)
	{
		FString Msg = FString::Printf(TEXT("Value: %f"), TimelineValue);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, Msg);
	}
}

void UCrouchTimelineComponent::Reverse()
{
	if(CrouchTimelineComp)
	{
		CrouchTimelineComp->Reverse();
	}
}

void UCrouchTimelineComponent::OnTimelineUpdate(float value)
{
	TimelineValue = value;
	if(GEngine)
	{
		FString Msg = FString::Printf(TEXT("Value: %f"), TimelineValue);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, Msg);
	}
}

float UCrouchTimelineComponent::GetTimelineValue() const
{
	return TimelineValue;
}

// Called every frame
void UCrouchTimelineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	//CrouchTimelineComp->TickTimeline(DeltaTime);
}

void UCrouchTimelineComponent::TimelineFinishedFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("Finished Event Called."));
}
