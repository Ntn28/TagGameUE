#include "DividingLine.h"
#include "Components/BoxComponent.h"

ADividingLine::ADividingLine()
{
    PrimaryActorTick.bCanEverTick = true;

    LineCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LineCollider"));
    RootComponent = LineCollider;
}


void ADividingLine::BeginPlay()
{
    Super::BeginPlay();
}

void ADividingLine::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

bool ADividingLine::IsBehindLine(const FVector& Location) const
{
    // Supponendo che la linea sia allineata sull'asse Y
    return Location.Y < GetActorLocation().Y;
}
