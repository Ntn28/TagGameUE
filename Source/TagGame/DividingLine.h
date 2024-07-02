#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DividingLine.generated.h"

UCLASS()
class TAGGAME_API ADividingLine : public AActor
{
    GENERATED_BODY()

public:
    ADividingLine();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    bool IsBehindLine(const FVector& Location) const;

private:
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* LineCollider;
};
