// Fill out your copyright notice in the Description page of Project Settings.


#include "EnddingHUD.h"
#include "Components/TextBlock.h"

void UEnddingHUD::UpdateScore(int32 Score,bool IsVictory)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::Format(FText::FromString("Total Score: {0}"), FText::AsNumber(Score)));
    }
	UpdateWinStatus(IsVictory);
}

void UEnddingHUD::UpdateWinStatus(bool IsVictory)
{
    WinStatus->SetText(IsVictory ? VictoryText : LoseText);

}
