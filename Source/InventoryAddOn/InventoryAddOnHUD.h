// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InventoryAddOnHUD.generated.h"

UCLASS()
class AInventoryAddOnHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInventoryAddOnHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

