// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ParkourCharacter.generated.h"

UCLASS()
class CATDUNGEON_API AParkourCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AParkourCharacter();
	bool bIsCrouching;
	bool bIsJumping;

protected:
	virtual void BeginPlay() override;



public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement speed along the spline
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 5.0f;

	// Spline references (array of track segments)
	TArray<class AATrackSegment*> TrackSegmentsArray;

	// To keep track of current position along the spline
	float SplineProgress = 200.0f;

	void MoveAlongSpline(float DeltaTime);

	void FindAllTrackSegments();


private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmFor3D;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmFor2D;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraFor3D;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraFor2D;

	void OnCrouchPressed();
	void OnCrouchReleased();

	void OnJumpPressed();

public:
};
