// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleTelemetry.h"

FLinearColor readyColor;
FLinearColor loadingColor;

UGrappleTelemetry::UGrappleTelemetry(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {

	loadingColor = FLinearColor(0, 0.5, 1); //A tint of light blue
	readyColor = FLinearColor(0, 1, 0); //Green
}

float UGrappleTelemetry::SetPercentage(UProgressBar *pb, float percentage)
{
	if (percentage > 1) //Then it is sent in x/100 format, it needs to be in range 0-1. Convert it
		percentage /= 100;

	if (percentage > 0.99)//If the ability is ready, chage bar color to indicate it
		pb->SetFillColorAndOpacity(readyColor);
	else {
		if (!pb->FillColorAndOpacity.Equals(loadingColor))
			pb->SetFillColorAndOpacity(loadingColor);
	}
	return percentage;
}
