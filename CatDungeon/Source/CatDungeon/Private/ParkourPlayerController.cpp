#include "ParkourPlayerController.h"
#include "ParkourCharacter.h"

AParkourPlayerController::AParkourPlayerController()
{
}

void AParkourPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ParkourCharacter = Cast<AParkourCharacter>(GetCharacter());
}

void AParkourPlayerController::Tick(float DeltaTime)
{
}

/// <summary>
/// bind with input actions
/// </summary>
void AParkourPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("SwitchLandLeft", IE_Pressed, this, &AParkourPlayerController::SwitchLandLeft);
	InputComponent->BindAction("SwitchLandRight", IE_Pressed, this, &AParkourPlayerController::SwitchLandRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AParkourPlayerController::Jump);
	InputComponent->BindAction("Crouch", IE_Pressed, this, &AParkourPlayerController::CrouchPressed);
	InputComponent->BindAction("Crouch", IE_Released, this, &AParkourPlayerController::CrouchReleased);
	InputComponent->BindAction("Attack", IE_Pressed, this, &AParkourPlayerController::Attack);
}

void AParkourPlayerController::SwitchLandLeft()
{
	if (ParkourCharacter)
	{
		ParkourCharacter->SwitchLandLeft();
	}
}

void AParkourPlayerController::SwitchLandRight()
{
	if (ParkourCharacter)
	{
		ParkourCharacter->SwitchLandRight();
	}
}

void AParkourPlayerController::Jump()
{
}

void AParkourPlayerController::CrouchPressed()
{
	if (ParkourCharacter)
	{
		ParkourCharacter->OnCrouchPressed();
	}
}

void AParkourPlayerController::CrouchReleased()
{
	if (ParkourCharacter)
	{
		ParkourCharacter->OnCrouchReleased();
	}
}

void AParkourPlayerController::Attack()
{
	if (ParkourCharacter)
	{
		ParkourCharacter->OnJumpPressed();
	}
}
