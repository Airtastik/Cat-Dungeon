// Fill out your copyright notice in the Description page of Project Settings.


#include "ATrackSegment.h"

// Sets default values
AATrackSegment::AATrackSegment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, true);
    SplineComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    if (SplineComponent)
    {
        SplineComponent->SetMobility(EComponentMobility::Movable);
    }
}

// Called when the game starts or when spawned
void AATrackSegment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATrackSegment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

