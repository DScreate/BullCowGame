// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    HiddenWord = TEXT("elf");

    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the letter word!")); // Magic Number Remove
    PrintLine(TEXT("Press enter to continue..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    if (Input.Equals(HiddenWord))
    {
        PrintLine(TEXT("You Win!"));
    } else
    {
        PrintLine(TEXT("Wrong Guess!"));
    }
}