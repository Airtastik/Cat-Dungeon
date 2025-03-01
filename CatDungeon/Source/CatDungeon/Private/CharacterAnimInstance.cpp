// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimInstance.h"
#include "ParkourGameBase.h"
#include "ParkourCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	ParkourCharacter = Cast<AParkourCharacter>(TryGetPawnOwner());
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!ParkourCharacter)
	{
		ParkourCharacter = Cast<AParkourCharacter>(TryGetPawnOwner());
	}

	if (!ParkourCharacter) return;
	 
	bIsJumping = ParkourCharacter->GetCharacterMovement()->IsFalling();
	bIsCrouching = ParkourCharacter->GetCharacterMovement()->IsCrouching();
}

void UCharacterAnimInstance::UpdateSpeed(float NewSpeed)
{
	Speed = NewSpeed;

	// Optionally, use a multiplier to affect the animation speed (this scales the speed of animations)
	AnimationSpeedMultiplier = FMath::Clamp(Speed / 600.0f, 0.5f, 2.0f);
}


