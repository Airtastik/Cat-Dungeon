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

	SpringArmFor2D = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFor2D"));
	SpringArmFor2D->SetupAttachment(RootComponent);
	SpringArmFor2D->TargetArmLength = 500.f;
	SpringArmFor2D->bUsePawnControlRotation = true;

	SpringArmFor3D = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFor3D"));
	SpringArmFor3D->SetupAttachment(RootComponent);
	SpringArmFor3D->TargetArmLength = 500.f;
	SpringArmFor3D->bUsePawnControlRotation = true;

	CameraFor2D = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFor2D"));
	CameraFor2D->SetupAttachment(SpringArmFor2D, USpringArmComponent::SocketName);
	CameraFor2D->bUsePawnControlRotation = false;

	CameraFor3D = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFor3D"));
	CameraFor3D->SetupAttachment(SpringArmFor3D, USpringArmComponent::SocketName);
	CameraFor3D->bUsePawnControlRotation = false;

	bIsCrouching = false;
	bIsJumping = false;
}

// Called when the game starts or when spawned
void AParkourCharacter::BeginPlay()
{
	Super::BeginPlay();
	FindAllTrackSegments();
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

void AParkourCharacter::MoveAlongSpline(float DeltaTime)
{
	// Check if we have any TrackSegments (splines to follow)
	if (TrackSegmentsArray.Num() == 0) return;

	// Get the current segment
	AATrackSegment* CurrentTrackSegment = TrackSegmentsArray[0];  // Just an example, you could add logic to cycle through segments

	if (CurrentTrackSegment && CurrentTrackSegment->SplineComponent)
	{
		// Get the spline length (total distance)
		float SplineLength = CurrentTrackSegment->SplineComponent->GetSplineLength();

		// Update the progress along the spline
		SplineProgress += (MoveSpeed * DeltaTime); // Custom speed factor

		if (SplineProgress > SplineLength)
		{
			SplineProgress = 0.0f;  // Restart at the beginning of the spline (or transition to the next segment)
		}

		// Get the current position on the spline based on SplineProgress
		FVector NewLocation = CurrentTrackSegment->SplineComponent->GetLocationAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World);

		// Get the current location of the character
		FVector CurrentLocation = GetActorLocation();

		// Only update the X and Y positions, keep Z for gravity/jumping
		//NewLocation.Z = CurrentLocation.Z;  // Retain the current height (Z position)

		// Move the character to the new location (optionally, you can also use SetActorLocation or a smoother movement approach)
		SetActorLocation(NewLocation);

		// Optional: Update rotation to face the direction of movement (smooth or directly)
		FRotator NewRotation = CurrentTrackSegment->SplineComponent->GetRotationAtDistanceAlongSpline(SplineProgress, ESplineCoordinateSpace::World);
		SetActorRotation(NewRotation);
	}
}

// Called to bind functionality to input
void AParkourCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AParkourCharacter::OnCrouchPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AParkourCharacter::OnCrouchReleased);

	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AParkourCharacter::OnJumpPressed);
	
}

void AParkourCharacter::OnCrouchPressed()
{
	//bIsCrouching = true;
	Super::Crouch();

}

void AParkourCharacter::OnCrouchReleased()
{
	//bIsCrouching = false;
	Super::UnCrouch();
}

void AParkourCharacter::OnJumpPressed()
{
	//bIsCrouching = false;
	bIsJumping = true;

	UCharacterMovementComponent* CharMovement = GetCharacterMovement();
	if (CharMovement)
	{
		CharMovement->JumpZVelocity = 800.0f; // Adjust the height of the jump
		CharMovement->GravityScale = 1.5f;   // Adjust gravity (default is 1.0)
		Super::Jump();
	}
}

