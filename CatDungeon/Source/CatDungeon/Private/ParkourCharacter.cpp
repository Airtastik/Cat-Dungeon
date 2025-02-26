// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ATrackSegment.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "Kismet/GameplayStatics.h"

// Sets default values
AParkourCharacter::AParkourCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsIn2DMode = false;
	CurrentLaneIndex = 1;



	SpringArmFor3D = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFor3D"));
	SpringArmFor3D->SetupAttachment(RootComponent);
	SpringArmFor3D->TargetArmLength = 500.f;
	SpringArmFor3D->bUsePawnControlRotation = true;


	CameraFor3D = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFor3D"));
	CameraFor3D->SetupAttachment(SpringArmFor3D, USpringArmComponent::SocketName);
	CameraFor3D->bUsePawnControlRotation = false;

	SpringArmFor2D = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFor2D"));
	SpringArmFor2D->SetupAttachment(RootComponent);
	SpringArmFor2D->TargetArmLength = 500.f;
	SpringArmFor2D->bUsePawnControlRotation = true;

	CameraFor2D = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFor2D"));
	CameraFor2D->SetupAttachment(SpringArmFor2D, USpringArmComponent::SocketName);
	CameraFor2D->SetRelativeLocation(FVector(-300.0f, 0.0f, 100.0f));
	CameraFor2D->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));


	bIsCrouching = false;
	bIsJumping = false;

}

// Called when the game starts or when spawned
void AParkourCharacter::BeginPlay()
{
	Super::BeginPlay();
	FindAllTrackSegments();
	SwitchTo2DMode();
}

// Called every frame
void AParkourCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetCharacterMovement()->IsFalling() == false)
	{
		if (bIsJumping)  
		{
			StopJumping();
			bIsJumping = false; 
		}
	}

	if (Controller)
	{
		//AddMovementInput(GetActorForwardVector(), 1.0f);
		MoveAlongSpline(DeltaTime);

	}
}


void AParkourCharacter::FindAllTrackSegments()
{
	TArray<AActor*> FoundTrackSegments;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AATrackSegment::StaticClass(), FoundTrackSegments);

	for (AActor* TrackSegmentActor : FoundTrackSegments)
	{
		AATrackSegment* TrackSegment = Cast<AATrackSegment>(TrackSegmentActor);
		if (TrackSegment)
		{
			// Add the TrackSegment to your TrackSegments array
			TrackSegmentsArray.Add(TrackSegment);
		}
	}
}


/// <summary>
/// Let Character move along the Splines
/// If you reach the end for this Spline, add the CurrentSegmentIndex for enter next Segment
/// </summary>
/// <param name="DeltaTime"></param>
void AParkourCharacter::MoveAlongSpline(float DeltaTime)
{
	if (TrackSegmentsArray.Num() == 0) return;
	if (CurrentSegmentIndex >= TrackSegmentsArray.Num()) {
		//TODO: Win
		return;
	}

	AATrackSegment* CurrentTrackSegment = TrackSegmentsArray[CurrentSegmentIndex];

	if (CurrentTrackSegment && CurrentTrackSegment->SplineComponent)
	{
		float SplineLength = CurrentTrackSegment->SplineComponent->GetSplineLength();
		//SplineProgress = FMath::FInterpTo(SplineProgress, SplineProgress + (MoveSpeed * DeltaTime), DeltaTime, InterpolateSpeed);
		SplineProgress += (MoveSpeed * DeltaTime);
		if (SplineProgress >= SplineLength)
		{
			CurrentSegmentIndex++;
			SplineProgress = 0.0f;
		}

		SetActorRotation(CurrentTrackSegment->SplineComponent->GetRotationAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World));
		FVector SplineLocation = CurrentTrackSegment->SplineComponent->GetLocationAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World);


		// Smooth lane transition
		CurrentLaneOffset = FMath::FInterpTo(CurrentLaneOffset, TargetLaneOffset, DeltaTime, InterpolateToLane);

		// Compute right vector for lane offset
		FVector SplineDirection = CurrentTrackSegment->SplineComponent->GetDirectionAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World);
		FVector RightVector = FVector::CrossProduct(FVector::UpVector, SplineDirection).GetSafeNormal();


		// Apply lane offset
		//FVector TargetLocation = SplineLocation + (RightVector * CurrentLaneOffset);
		//FVector TargetLocation = SplineLocation + (RightVector * CurrentLaneOffset);
		FVector TargetLocation = SplineLocation + (RightVector * CurrentLaneOffset * CurrentTrackSegment->CurveMutipliers);

		FVector CurrentLocation = GetActorLocation();

		if (bIsIn2DMode) {
			//keep Z for gravity/jumping
			TargetLocation.Z = CurrentLocation.Z;
		}

		SetActorLocation(TargetLocation);
		

	}
}


/*
void AParkourCharacter::MoveAlongSpline(float DeltaTime)
{
	if (TrackSegmentsArray.Num() == 0) return;
	if (CurrentSegmentIndex >= TrackSegmentsArray.Num()) {
		//TODO: Win
		return;
	}

	AATrackSegment* CurrentTrackSegment = TrackSegmentsArray[CurrentSegmentIndex];
	USplineComponent* CurrentSpline = CurrentTrackSegment->SplineComponentLeft;
	switch (CurrentLaneIndex)
	{
	case 0:
		CurrentSpline = CurrentTrackSegment->SplineComponentLeft;

		break;
	case 1:
		CurrentSpline = CurrentTrackSegment->SplineComponent;

		break;
	case 2:
		CurrentSpline = CurrentTrackSegment->SplineComponentRight;

		break;
	default:
		break;
	}
	if (CurrentTrackSegment && CurrentSpline)
	{
		float SplineLength = CurrentSpline->GetSplineLength();
		//SplineProgress = FMath::FInterpTo(SplineProgress, SplineProgress + (MoveSpeed * DeltaTime), DeltaTime, InterpolateSpeed);
		SplineProgress += (MoveSpeed * DeltaTime);
		if (SplineProgress >= SplineLength)
		{
			CurrentSegmentIndex++;
			SplineProgress = 0.0f;
		}

		SetActorRotation(CurrentTrackSegment->SplineComponent->GetRotationAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World));
		FVector SplineLocation = CurrentSpline->GetLocationAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World);

		// Smooth lane transition
		CurrentLaneOffset = FMath::FInterpTo(CurrentLaneOffset, TargetLaneOffset, DeltaTime, InterpolateToLane);

		// Apply lane offset
		FVector TargetLocation = SplineLocation;

		FVector CurrentLocation = GetActorLocation();

		if (bIsIn2DMode) {
			//keep Z for gravity/jumping
			TargetLocation.Z = CurrentLocation.Z;
		}

		SetActorLocation(TargetLocation);
	}
}
*/

void AParkourCharacter::OnCrouchPressed()
{
	Super::Crouch();

}

void AParkourCharacter::OnCrouchReleased()
{
	Super::UnCrouch();
}

void AParkourCharacter::OnJumpPressed()
{
	bIsJumping = true;

	UCharacterMovementComponent* CharMovement = GetCharacterMovement();
	if (CharMovement)
	{
		CharMovement->JumpZVelocity = JumpVerlocity; // Adjust the height of the jump
		//CharMovement->GravityScale = 1.5f;   // Adjust gravity (default is 1.0)
		Super::Jump();
	}
}

void AParkourCharacter::SwitchLane(int32 LaneIndex)
{
	if (LaneIndex < 0 || LaneIndex > MaxLaneIndex) return;

	CurrentLaneIndex = LaneIndex;
	TargetLaneOffset = (CurrentLaneIndex - 1) * LaneWidth;
}

void AParkourCharacter::Attack()
{
}

void AParkourCharacter::SwitchTo3DMode()
{
	bIsIn2DMode = false;
	CameraFor3D->SetActive(true);
	CameraFor2D->SetActive(false);
}

void AParkourCharacter::SwitchTo2DMode()
{
	bIsIn2DMode = true;
	CameraFor3D->SetActive(true);
	CameraFor2D->SetActive(false);
}


