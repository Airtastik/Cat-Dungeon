// Fill out your copyright notice in the Description page of Project Settings.


#include "NewEnddingHUD.h"
#include "Components/TextBlock.h"

void UNewEnddingHUD::UpdateScore(int32 Score, bool IsVictory)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::Format(FText::FromString("Total Score: {0}"), FText::AsNumber(Score)));
    }
    UpdateWinStatus(IsVictory);
}

void UNewEnddingHUD::UpdateWinStatus(bool IsVictory)
{
    WinStatus->SetText(IsVictory ? VictoryText : LoseText);
	if (IsVictory) {
		OnVictoryEvent();
	}
	else
	{
		OnDeathEvent();
	}
}

void UNewEnddingHUD::OnDeathEvent()
{
	UE_LOG(LogTemp, Warning, TEXT("OnDeathEvent called in C++!"));

}

void UNewEnddingHUD::OnVictoryEvent()
{
	UE_LOG(LogTemp, Warning, TEXT("OnVictoryEvent called in C++!"));
}
