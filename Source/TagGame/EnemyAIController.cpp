#pragma once

#include "EnemyAIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "TagGameGameMode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

AEnemyAIController::AEnemyAIController()
{
    BlackboardAsset = NewObject<UBlackboardData>();
    BlackboardAsset->UpdatePersistentKey<UBlackboardKeyType_Object>(FName("BestBall"));
    BlackboardAsset->UpdatePersistentKey<UBlackboardKeyType_Object>(FName("ClosestPlayer"));
    BlackboardAsset->UpdatePersistentKey<UBlackboardKeyType_Bool>(FName("GoingToPickupBalls"));

   // BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
}

void AEnemyAIController::BeginPlay()
{
    Super::BeginPlay();

    {    if (UseBlackboard(BlackboardAsset, BlackboardComponent))

        BlackboardComponent->InitializeBlackboard(*BlackboardAsset);

        BlackboardComponent->SetValueAsObject(FName("ClosestPlayer"), nullptr);
        BlackboardComponent->SetValueAsObject(FName("BestBall"), nullptr);
        BlackboardComponent->SetValueAsBool(FName("GoingToPickupBalls"), false);
    }

    GoToPlayer = MakeShared<FAivState>(
        [this](AAIController* AIController) {
            APawn* PlayerPawn = AIController->GetWorld()->GetFirstPlayerController()->GetPawn();
            BlackboardComponent->SetValueAsObject(FName("ClosestPlayer"), PlayerPawn);

            if (PlayerPawn)
            {
                AIController->MoveToActor(PlayerPawn, 5.0f);
            }
        },
        nullptr,
        [this](AAIController* AIController, const float DeltaTime) -> TSharedPtr<FAivState> {
            EPathFollowingStatus::Type State = AIController->GetMoveStatus();

            if (State == EPathFollowingStatus::Moving)
            {
                return nullptr;
            }

            if (BlackboardComponent->GetValueAsObject("BestBall"))
            {
                AActor* BallActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("BestBall"));
                if (BallActor)
                {
                    BallActor->AttachToActor(AIController->GetWorld()->GetFirstPlayerController()->GetPawn(), FAttachmentTransformRules::KeepRelativeTransform);
                    BallActor->SetActorRelativeLocation(FVector(0, 0, 0));
                    BlackboardComponent->ClearValue("BestBall");
                }
            }
            return SearchForBall;
        }
    );

    SearchForBall = MakeShared<FAivState>(
        [this](AAIController* AIController) {
            AGameModeBase* GameMode = AIController->GetWorld()->GetAuthGameMode();
            ATagGameGameMode* AIGameMode = Cast<ATagGameGameMode>(GameMode);
            const TArray<ABall*>& BallsList = AIGameMode->GetBalls();

            ABall* NearestBall = nullptr;

            for (ABall* Ball : BallsList)
            {
                if (!Ball->GetAttachParentActor() &&
                    (!NearestBall ||
                        FVector::Distance(AIController->GetPawn()->GetActorLocation(), Ball->GetActorLocation()) <
                        FVector::Distance(AIController->GetPawn()->GetActorLocation(), NearestBall->GetActorLocation())))
                {
                    NearestBall = Ball;
                }
            }

            BlackboardComponent->SetValueAsObject(FName("BestBall"), NearestBall);
        },
        nullptr,
        [this](AAIController* AIController, const float DeltaTime) -> TSharedPtr<FAivState> {
            if (BlackboardComponent->GetValueAsObject("BestBall"))
            {
                return GoToBall;
            }
            else if (AllBallsDelivered())  
            {
                return GoToPlayerAndPickupBalls;
            }
            else
            {
                return SearchForBall;
            }
        }
    );

    GoToBall = MakeShared<FAivState>(
        [this](AAIController* AIController) {
            if (BlackboardComponent->GetValueAsObject("BestBall"))
            {
                AIController->MoveToActor(Cast<AActor>(BlackboardComponent->GetValueAsObject("BestBall")), 5.0f);
            }
        },
        nullptr,
        [this](AAIController* AIController, const float DeltaTime) -> TSharedPtr<FAivState> {
            EPathFollowingStatus::Type State = AIController->GetMoveStatus();

            if (State == EPathFollowingStatus::Moving)
            {
                return nullptr;
            }
            return GrabBall;
        }
    );

    GrabBall = MakeShared<FAivState>(
        [this](AAIController* AIController)
        {
            AActor* BallActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("BestBall"));
            if (BallActor && !BallActor->GetAttachParentActor())
            {
                BallActor->AttachToActor(AIController->GetPawn(), FAttachmentTransformRules::KeepRelativeTransform);
                BallActor->SetActorRelativeLocation(FVector(0, 0, 0));
            }
        },
        nullptr,
        [this](AAIController* AIController, const float DeltaTime) -> TSharedPtr<FAivState> {
            AActor* BallActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("BestBall"));
            if (BallActor && BallActor->GetAttachParentActor() == AIController->GetPawn())
            {
                return GoToPlayer;
            }

            return SearchForBall;
        }
    );

    GoToPlayerAndPickupBalls = MakeShared<FAivState>(
        [this](AAIController* AIController) {
            APawn* PlayerPawn = AIController->GetWorld()->GetFirstPlayerController()->GetPawn();
            if (PlayerPawn)
            {
                UE_LOG(LogTemp, Warning, TEXT("Going to player to pick up balls"));
                AIController->MoveToActor(PlayerPawn, 5.0f);
                BlackboardComponent->SetValueAsBool(FName("GoingToPickupBalls"), true);
            }
        },
        nullptr,
        [this](AAIController* AIController, const float DeltaTime) -> TSharedPtr<FAivState> {
            EPathFollowingStatus::Type State = AIController->GetMoveStatus();

            if (State == EPathFollowingStatus::Moving)
            {
                return nullptr;
            }

            TArray<AActor*> AttachedActors;
            AIController->GetWorld()->GetFirstPlayerController()->GetPawn()->GetAttachedActors(AttachedActors);
            for (AActor* AttachedActor : AttachedActors)
            {
                ABall* Ball = Cast<ABall>(AttachedActor);
                if (Ball)
                {
                    Ball->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
                    Ball->AttachToActor(AIController->GetPawn(), FAttachmentTransformRules::KeepRelativeTransform);
                    Ball->SetActorRelativeLocation(FVector(0, 0, 0));
                }
            }

            BlackboardComponent->SetValueAsBool(FName("GoingToPickupBalls"), false);

            return SearchForBall;
        }
    );

    CurrentState = SearchForBall;
    CurrentState->CallEnter(this);
}

void AEnemyAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentState)
    {
        CurrentState = CurrentState->CallTick(this, DeltaTime);
    }
}

bool AEnemyAIController::AllBallsDelivered()
{
    AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
    ATagGameGameMode* AIGameMode = Cast<ATagGameGameMode>(GameMode);
    const TArray<ABall*>& BallsList = AIGameMode->GetBalls();

    for (ABall* Ball : BallsList)
    {
        if (!Ball->GetAttachParentActor() || Ball->GetAttachParentActor() != GetWorld()->GetFirstPlayerController()->GetPawn())
        {
            return false;
        }
    }
    return true;
}
