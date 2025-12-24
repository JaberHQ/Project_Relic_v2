// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAISenseConfig.h"
#include "Perception/AIPerceptionComponent.h" 
#include "GameplayDebuggerCategory.h" 

UEnemyAISenseConfig::UEnemyAISenseConfig(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer)
{
    DebugColor = FColor::Green;
}

TSubclassOf<UAISense> UEnemyAISenseConfig::GetSenseImplementation() const
{
    return Implementation;
}

#if WITH_GAMEPLAY_DEBUGGER
void UEnemyAISenseConfig::DescribeSelfToGameplayDebugger(const UAIPerceptionComponent* PerceptionComponent, FGameplayDebuggerCategory* DebuggerCategory) const
{
    if (PerceptionComponent == nullptr || DebuggerCategory == nullptr)
        return;

    const AActor* BodyActor = PerceptionComponent->GetBodyActor();
    if (BodyActor != nullptr)
    {
        FVector BodyLocation, BodyFacing;
        PerceptionComponent->GetLocationAndDirection(BodyLocation, BodyFacing);
        
        DebuggerCategory->AddShape(FGameplayDebuggerShape::MakeCylinder(BodyLocation, TargetRadius, 25.0f, DebugColor));
    }
}
#endif // WITH_GAMEPLAY_DEBUGGER