// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/TargetPoint.h"
#include "Ball.h"
#include "DividingLine.h"

#include "TagGameGameMode.generated.h"

UCLASS(minimalapi)
class ATagGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	TArray<class ATargetPoint*> TargetPoints;
	TArray<class ABall*> GameBalls;
	TArray<class ADividingLine*> GameDividingLine;


	void ResetMatch();

public:
	ATagGameGameMode();

	void BeginPlay() override;
	void Tick(float DeltaTime) override;

	const TArray<class ABall*>& GetBalls() const;
	const TArray<class ADividingLine*>& GetDividingLine() const;

};

	


