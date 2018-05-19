// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RailShooterGameMode.h"
#include "RailShooterHUD.h"
#include "RailShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARailShooterGameMode::ARailShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARailShooterHUD::StaticClass();
}
