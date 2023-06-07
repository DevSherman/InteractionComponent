#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

UCLASS()
class INVENTORYADDON_API AItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemActor();

	void ShowOutline(bool Value, int Index = 2);
	void DestroyActor();

protected:
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* Mesh;
};
