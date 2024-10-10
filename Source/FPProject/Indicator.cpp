// Fill out your copyright notice in the Description page of Project Settings.


#include "Indicator.h"
#include "Components/TextRenderComponent.h"

// Sets default values
AIndicator::AIndicator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
	TextComponent->SetupAttachment(RootComponent);
	TextComponent->SetText(FText::FromString(TEXT("Drink me")));

}

// Called when the game starts or when spawned
void AIndicator::BeginPlay()
{
	Super::BeginPlay();
	
}

