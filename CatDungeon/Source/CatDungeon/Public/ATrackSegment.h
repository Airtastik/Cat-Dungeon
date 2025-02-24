// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h" 

#include "ATrackSegment.generated.h"

UCLASS()
class CATDUNGEON_API AATrackSegment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATrackSegment();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

	//void CreateSplineMeshes();
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spline", meta = (AllowPrivateAccess = "true"))
	USplineComponent* SplineComponent;

	/*
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spline", meta = (AllowPrivateAccess = "true"))
	class UMaterialInterface* SplineMaterial;
	*/

	// Static Mesh Component (Movable)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	class UStaticMeshComponent* TrackMeshComponent;
};
