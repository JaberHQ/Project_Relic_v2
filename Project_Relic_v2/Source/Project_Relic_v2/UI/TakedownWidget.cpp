// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TakedownWidget.h"


void UTakedownWidget::NativeConstruct()
{
	Super::NativeConstruct();

	TakedownText->SetVisibility(ESlateVisibility::Hidden);
}

void UTakedownWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UTakedownWidget::ShowTakedownText(bool ShouldShowText)
{
	ShouldShowText ? TakedownText->SetVisibility(ESlateVisibility::Visible) : TakedownText->SetVisibility(ESlateVisibility::Hidden);
}
