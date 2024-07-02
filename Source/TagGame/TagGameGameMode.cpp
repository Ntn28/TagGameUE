#include "TagGameGameMode.h"
#include "TagGameCharacter.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/TargetPoint.h"
#include "Ball.h"

ATagGameGameMode::ATagGameGameMode()
{
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}

void ATagGameGameMode::BeginPlay()
{
    Super::BeginPlay();

    ResetMatch();
}

void ATagGameGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    bool bAllBallsWithPlayer = true;

    for (int32 i = 0; i < GameBalls.Num(); i++)
    {
        if (GameBalls[i]->GetAttachParentActor() != GetWorld()->GetFirstPlayerController()->GetPawn())
        {
            bAllBallsWithPlayer = false;
            break;
        }
    }

    if (bAllBallsWithPlayer)
    {
        ResetMatch();
    }
}

const TArray<class ABall*>& ATagGameGameMode::GetBalls() const
{
    return GameBalls;
}

const TArray<class ADividingLine*>& ATagGameGameMode::GetDividingLine() const
{
    return GameDividingLine;
}
void ATagGameGameMode::ResetMatch()
{
    TargetPoints.Empty();
    GameBalls.Empty();

    for (TActorIterator<ATargetPoint> It(GetWorld()); It; ++It)
    {
        TargetPoints.Add(*It);
    }

    for (TActorIterator<ABall> It(GetWorld()); It; ++It)
    {
        if (It->GetAttachParentActor())
        {
            It->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        }

        GameBalls.Add(*It);
    }

    TArray<ATargetPoint*> RandomTargetPoints = TargetPoints;

    for (int32 i = 0; i < GameBalls.Num(); i++)
    {
        const int32 RandomTargetIndex = FMath::RandRange(0, RandomTargetPoints.Num() - 1);
        GameBalls[i]->SetActorLocation(TargetPoints[RandomTargetIndex]->GetActorLocation());
        RandomTargetPoints.RemoveAt(RandomTargetIndex);
    }
}