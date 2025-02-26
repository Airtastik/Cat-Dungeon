// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableItemBase.h"

// Sets default values
AInteractableItemBase::AInteractableItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableItemBase::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
}

void AInteractableItemBase::Activate_Implementation(AActor* Interactor)
{
}

void AInteractableItemBase::Deactivate_Implementation()
{
}

void AInteractableItemBase::InteractWithPlayer_Implementation(AParkourCharacter* Player)
{
}

float AInteractableItemBase::GetInteractionValue_Implementation()
{
	return 0.0f;
}

