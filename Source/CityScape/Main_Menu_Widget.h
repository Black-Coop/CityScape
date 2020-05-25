// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Main_Menu_Widget.generated.h"

/**
 * 
 */
UCLASS()
class CITYSCAPE_API UMain_Menu_Widget : public UUserWidget
{
	GENERATED_BODY()
	public:
		UPROPERTY(EditAnywhere, Category = LevelName)
			FName level_name_to_start = "ThirdPersonExampleMap";

		UMain_Menu_Widget(const FObjectInitializer& ObjectInitializer);
		virtual void NativeConstruct() override;

		virtual void NativeTick(const FGeometry& MyGeometry, float deltaTime) override;

		UFUNCTION(BlueprintCallable)
		void StartGame(APlayerController* pc, FName levelName, TSubclassOf<AHUD> hud);

		UFUNCTION(BlueprintCallable)
		void QuitGame(APlayerController *pc);




};
