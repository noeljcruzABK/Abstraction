// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "AbstractionGameModeBase.generated.h"

//to retrieve this object use below code
//AGameModeBase* GameMode = Cast<AAbstractionGameModeBase>(World->GetAuthGameMode());

UCLASS()
class ABSTRACTION_API AAbstractionGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AAbstractionGameModeBase() {}

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> ObjectiveWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> ObjectivesCompleteWidgetClass;
};
