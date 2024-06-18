// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEConveyorBeltGamePlayerController.h"
#include "EnhancedInputSubsystems.h"

void AUEConveyorBeltGamePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}
}