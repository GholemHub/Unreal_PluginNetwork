// Copyright Epic Games, Inc. All Rights Reserved.

#include "Network_PluginGameMode.h"
#include "Network_PluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetwork_PluginGameMode::ANetwork_PluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
