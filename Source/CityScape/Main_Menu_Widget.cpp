// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_Menu_Widget.h"
#include "Kismet/GameplayStatics.h"

UMain_Menu_Widget::UMain_Menu_Widget(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer) {

}

void UMain_Menu_Widget::NativeConstruct()
{
	//Do some custom setup


	Super::NativeConstruct();
}

void UMain_Menu_Widget::NativeTick(const FGeometry& MyGeometry, float deltaTime)
{
	Super::NativeTick(MyGeometry, deltaTime);
}

void UMain_Menu_Widget::StartGame(APlayerController *pc, FName levelName, TSubclassOf<AHUD> hud)
{
	UGameplayStatics::OpenLevel(this, levelName);
}

void UMain_Menu_Widget::QuitGame(APlayerController *pc)
{
	FGenericPlatformMisc::RequestExit(false);
}
