// Copyright Epic Games, Inc. All Rights Reserved.

#include "schmoove_demoGameMode.h"
#include "schmoove_demoCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aschmoove_demoGameMode::Aschmoove_demoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
