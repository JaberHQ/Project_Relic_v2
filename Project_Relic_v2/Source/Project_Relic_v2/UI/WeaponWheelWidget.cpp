// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WeaponWheelWidget.h"

void UWeaponWheelWidget::NativeConstruct()
{
	Slots = { Slot1, Slot2, Slot3, Slot4,
			  Slot5, Slot6, Slot7, Slot8 };

	for (int i = 0; i < Slots.Num(); i++)
	{
		Slots[i]->SetRenderOpacity(DefaultOpacity);
	}
}
