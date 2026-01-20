// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "DetectionHUDWidget.generated.h"

class AProject_Relic_v2Character;
class AEnemyCharacter;
/**
 * 
 */
UCLASS()
class PROJECT_RELIC_V2_API UDetectionHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UProgressBar* GetDetectionMeter() const { return DetectionMeter; }

	float GetDetectionMeterPercent() const { return DetectionMeter->GetPercent(); }

	void SetDetectionMeterVisiblity(ESlateVisibility MeterVisibility);

	void SetDetectionMeterPercent(float Percent);
	void SetDetectionMeterColour(FLinearColor Colour);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* DetectionMeter;

	void SetEnemyCharacter(AEnemyCharacter* EnemyCharacterRef){ EnemyCharacter = EnemyCharacterRef; }

private:
	AProject_Relic_v2Character* PlayerCharacter;
	AEnemyCharacter* EnemyCharacter;


};
