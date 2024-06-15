// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEConveyorBeltGameGameMode.h"
#include "UEConveyorBeltGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEConveyorBeltGameGameMode::AUEConveyorBeltGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
