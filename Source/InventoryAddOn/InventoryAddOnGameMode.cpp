// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryAddOnGameMode.h"
#include "InventoryAddOnHUD.h"
#include "InventoryAddOnCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInventoryAddOnGameMode::AInventoryAddOnGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInventoryAddOnHUD::StaticClass();
}
