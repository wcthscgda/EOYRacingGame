// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EOYRacingGameGameMode.h"
#include "EOYRacingGamePawn.h"
#include "EOYRacingGameHud.h"

AEOYRacingGameGameMode::AEOYRacingGameGameMode()
{
	DefaultPawnClass = AEOYRacingGamePawn::StaticClass();
	HUDClass = AEOYRacingGameHud::StaticClass();
}
