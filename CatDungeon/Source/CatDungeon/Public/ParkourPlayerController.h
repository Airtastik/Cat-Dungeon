// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ParkourPlayerController.generated.h"

/**
 * 1.receive input actions
 * 2. UI (pending)
 * 3. show/hide UUSerWidget (pending)
 * RPC send input to server (pending)
 */
UCLASS()
class CATDUNGEON_API AParkourPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	AParkourPlayerController();
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	/// <summary>
	/// bind with input actions
	/// </summary>
	virtual void SetupInputComponent() override;

	void SwitchLandLeft();
	void SwitchLandRight();
	void Jump();
	void CrouchPressed();
	void CrouchReleased();

	void Attack();
	
private:
	class AParkourCharacter* ParkourCharacter;


};
