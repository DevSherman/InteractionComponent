#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.generated.h"

UENUM()
enum class EDirection : uint8
{
	FORWARD,
	RIGHT
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYADDON_API UInteractionComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	void Update(USceneComponent* Origin);
	bool Avaliable() { return ItemActor != nullptr; }
	void Interact();
	class AItemActor* GetItemActor() { return ItemActor; }


protected:
	UPROPERTY(EditAnywhere)
	EDirection TraceDirection = EDirection::RIGHT;
	UPROPERTY(EditAnywhere)
	float Range = 200.0f;
	UPROPERTY(EditAnywhere)
	bool bDEBUG = false;

private:
	AActor* LineTraceSingle(FVector Start, FVector End);

	UPROPERTY(VisibleAnywhere)
	AActor* CurrentActor;
	UPROPERTY(VisibleAnywhere)
	class AItemActor* ItemActor;
};
