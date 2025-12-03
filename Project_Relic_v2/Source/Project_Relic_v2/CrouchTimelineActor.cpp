// Fill out your copyright notice in the Description page of Project Settings.


#include "CrouchTimelineActor.h"

// Sets default values
ACrouchTimelineActor::ACrouchTimelineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//CrouchTimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineComponent"));
}

// Called when the game starts or when spawned
void ACrouchTimelineActor::BeginPlay()
{
	Super::BeginPlay();
	TimelineFinishedEvent.BindUFunction(this, FName("TimelineFinishedFunction"));
	CrouchTimelineComp->SetTimelineFinishedFunc(TimelineFinishedEvent);
	CrouchTimelineComp->PlayFromStart();
}

// Called every frame
void ACrouchTimelineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACrouchTimelineActor::TimelineFinishedFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("Finished Event Called."));
}


