// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_HuntGameMode.h"
#include "Project_HuntCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_HuntGameMode::AProject_HuntGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
