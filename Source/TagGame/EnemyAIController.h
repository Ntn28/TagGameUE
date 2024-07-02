#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Ball.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyAIController.generated.h"

struct FAivState : public TSharedFromThis<FAivState>
{
private:
    TFunction<void(AAIController*)> Enter;
    TFunction<void(AAIController*)> Exit;
    TFunction<TSharedPtr<FAivState>(AAIController*, const float)> Tick;
public:

    FAivState()
    {
        Enter = nullptr;
        Exit = nullptr;
        Tick = nullptr;
    }

    FAivState(TFunction<void(AAIController*)> InEnter, TFunction<void(AAIController*)> InExit, TFunction<TSharedPtr<FAivState>(AAIController*, const float)> InTick)
    {
        Enter = InEnter;
        Exit = InExit;
        Tick = InTick;
    }

    void CallEnter(AAIController* AIController)
    {
        if (Enter)
        {
            Enter(AIController);
        }
    }

    void CallExit(AAIController* AIController)
    {
        if (Exit)
        {
            Exit(AIController);
        }
    }

    TSharedPtr<FAivState> CallTick(AAIController* AIController, const float DeltaTime)
    {
        if (Tick)
        {
            TSharedPtr<FAivState> NewState = Tick(AIController, DeltaTime);

            if (NewState != nullptr && NewState != AsShared())
            {
                CallExit(AIController);
                NewState->CallEnter(AIController);
                return NewState;
            }
        }

        return AsShared();
    }
};


UCLASS()
class TAGGAME_API AEnemyAIController : public AAIController
{
    GENERATED_BODY()

protected:
    TSharedPtr<FAivState> CurrentState;
    TSharedPtr<FAivState> GoToPlayer;
    TSharedPtr<FAivState> GoToBall;
    TSharedPtr<FAivState> GrabBall;
    TSharedPtr<FAivState> SearchForBall;
    TSharedPtr<FAivState> GoToPlayerAndPickupBalls;



    UPROPERTY(VisibleAnywhere, Category = "AI")
    UBlackboardComponent* BlackboardComponent;

    void BeginPlay() override;
    void Tick(float DeltaTime) override;

    bool AllBallsDelivered();

    
public:
    AEnemyAIController();
    UBlackboardData* BlackboardAsset;

private:
};

