// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UINTERFACE(Blueprintable)
class UDeathHandlerInterface : public UInterface
{
	GENERATED_BODY()
};

class IDeathHandlerInterface
{
	GENERATED_BODY()

public:
	/*********************************************************************
	/** Interface function: IDeathHandlerInterface 
	 ** Communicates with UHealthComponent (See HealthComponent.h)
	 ** Handles the events of the owning character's death
	/*********************************************************************/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void HandleDeath();
};

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

	UFUNCTION(BlueprintCallable)
	float GetHealth() const { return Health; }

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float DamageAmount);

	UFUNCTION(BlueprintCallable)
	void ResetHealth();

private:
	void HandleDeath();

private:
	UPROPERTY(EditAnywhere, Category = Health)
	float Health; // Current health
	
	UPROPERTY(EditAnywhere, Category = Health)
	float MaxHealth; // Maximum health amount
		
};
