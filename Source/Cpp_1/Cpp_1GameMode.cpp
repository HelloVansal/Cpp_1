// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cpp_1GameMode.h"
#include "Cpp_1HUD.h"
#include "Cpp_1Character.h"
#include "UObject/ConstructorHelpers.h"

ACpp_1GameMode::ACpp_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACpp_1HUD::StaticClass();
}
