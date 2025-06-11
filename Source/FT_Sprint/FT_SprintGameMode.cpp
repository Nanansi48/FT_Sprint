// Copyright Epic Games, Inc. All Rights Reserved.

#include "FT_SprintGameMode.h"
#include "FT_SprintCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFT_SprintGameMode::AFT_SprintGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
