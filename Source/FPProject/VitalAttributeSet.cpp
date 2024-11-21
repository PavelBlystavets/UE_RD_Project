// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalAttributeSet.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG(STATUS_DEAD, "Status.Dead");

void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, MaxHealth.GetCurrentValue());
	}
}

void UVitalAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		if (NewValue <= 0.f)
		{
			GetOwningAbilitySystemComponent()->AddLooseGameplayTag(STATUS_DEAD);
		}
		
	}
}
