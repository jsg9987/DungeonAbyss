// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonAbyssGameMode.h"
#include "DungeonAbyssCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonAbyssGameMode::ADungeonAbyssGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
