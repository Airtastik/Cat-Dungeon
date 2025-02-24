// Fill out your copyright notice in the Description page of Project Settings.


#include "TrackSegment.h"

// Sets default values
ATrackSegment::ATrackSegment()
{
	PrimaryActorTick.bCanEverTick = true;

	TrackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrackMesh"));
	TrackMesh->SetupAttachment(RootComponent);

	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	SplineComponent->SetupAttachment(RootComponent);

	StartTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("StartTrigger")); 
	StartTrigger->SetupAttachment(RootComponent);

	EndTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("EndTrigger"));
	EndTrigger->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATrackSegment::BeginPlay()
{
	Super::BeginPlay();
	
	StartTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATrackSegment::OnTriggerBeginOverlap);
	StartTrigger->OnComponentEndOverlap.AddDynamic(this, &ATrackSegment::OnTriggerEndOverlap);


	EndTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATrackSegment::OnTriggerBeginOverlap);
	EndTrigger->OnComponentEndOverlap.AddDynamic(this, &ATrackSegment::OnTriggerEndOverlap);
}

// Called every frame
void ATrackSegment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrackSegment::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ATrackSegment::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

