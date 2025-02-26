// Fill out your copyright notice in the Description page of Project Settings.

#include "ParkourPlayerController.h"
#include "ParkourPlayerState.h"
#include "ParkourCharacter.h"

void AParkourPlayerState::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth; 

	// Optionally, notify the PlayerController to update the HUD right away
	NotifyHealthChanged();
	NotifyScoreChanged();
}

void AParkourPlayerState::AddHealth(float Amount)
{
	Health += Amount;

	if (Health > MaxHealth)
	{
		Health = MaxHealth;
	}

	if (Health <= 0)
	{
		Die();
	}

	NotifyHealthChanged();
}

void AParkourPlayerState::AddScore(int32 Amount)
{
	SetScore(GetScore() + Amount);
	NotifyScoreChanged();
}

void AParkourPlayerState::Victory()
{
	APlayerController* PlayerController = GetOwner<APlayerController>();
	if (PlayerController)
	{
		AParkourPlayerController* PC = Cast<AParkourPlayerController>(PlayerController);
		if (PC)
		{
			// Update the health on the HUD
			PC->HandleVictory();
		}
	}
}

void AParkourPlayerState::Die()
{
	APlayerController* PlayerController = GetOwner<APlayerController>();
	if (PlayerController)
	{
		AParkourPlayerController* PC = Cast<AParkourPlayerController>(PlayerController);
		if (PC)
		{
			// Call a death event on the PlayerController
			PC->HandleDeath();
		}
	}
}

void AParkourPlayerState::NotifyHealthChanged()
{
	APlayerController* PlayerController = GetOwner<APlayerController>();
	if (PlayerController)
	{
		AParkourPlayerController* PC = Cast<AParkourPlayerController>(PlayerController);
		if (PC)
		{
			// Update the health on the HUD
			PC->UpdateHUDHealth(Health);
		}
	}
	
}

void AParkourPlayerState::NotifyScoreChanged()
{
	APlayerController* PlayerController = GetOwner<APlayerController>();
	if (PlayerController)
	{
		AParkourPlayerController* PC = Cast<AParkourPlayerController>(PlayerController);
		if (PC)
		{
			// Update the health on the HUD
			PC->UpdateHUDScore(GetScore());
		}
	}
	
}
