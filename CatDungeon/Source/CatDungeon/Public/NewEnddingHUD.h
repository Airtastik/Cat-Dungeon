// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NewEnddingHUD.generated.h"

/**
 * 
 */
UCLASS()
class CATDUNGEON_API UNewEnddingHUD : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	FText VictoryText;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	FText LoseText;

	UFUNCTION(BlueprintCallable, Category = "UI")
	void UpdateScore(int32 Score, bool isVictory);


	UFUNCTION(BlueprintCallable, Category = "UI")
	void UpdateWinStatus(bool IsVictory);

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ScoreText;


	UPROPERTY(meta = (BindWidget))
	class UTextBlock* WinStatus;
};
