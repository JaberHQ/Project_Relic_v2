// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_RELIC_V2_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION( BlueprintCallable )
	float GetHealth() const { return Health; }

	UFUNCTION( BlueprintCallable )
	float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION( BlueprintCallable )
	void TakeDamage();

	UFUNCTION( BlueprintCallable )
	void ResetHealth();

	UHealthComponent* GetHealthComponent() const { return nullptr; }

private:
	UPROPERTY(EditAnywhere, Category = Health)
	float Health; // Current health
	
	UPROPERTY(EditAnywhere, Category = Health)
	float MaxHealth; // Maximum health amount
		
};
