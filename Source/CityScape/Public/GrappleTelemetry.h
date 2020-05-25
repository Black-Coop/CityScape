// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include <Runtime\UMG\Public\Components\ProgressBar.h>
#include "Kismet/GameplayStatics.h"
#include "GrappleTelemetry.generated.h"

/**
 * 
 */
UCLASS()
class CITYSCAPE_API UGrappleTelemetry : public UUserWidget
{
	GENERATED_BODY()
	public:
		UGrappleTelemetry(const FObjectInitializer& ObjectInitializer);

		UFUNCTION(BlueprintCallable)
		float SetPercentage(UProgressBar *pb, float percentage);
	
};
