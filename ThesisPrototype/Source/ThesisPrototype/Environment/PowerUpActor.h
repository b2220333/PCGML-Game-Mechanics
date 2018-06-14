// Copyright 2018 - Bernhard Rieder - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUpActor.generated.h"

UCLASS()
class THESISPROTOTYPE_API APowerUpActor : public AActor
{
	GENERATED_BODY()

protected:
	//time in seconds between power up ticks
	UPROPERTY(EditDefaultsOnly, Category = "Power Ups")
	float PowerUpInterval;

	//total times the power up effect ticks and applies any effect
	UPROPERTY(EditDefaultsOnly, Category = "Power Ups")
	int32 TotalNumOfTicks;

	UPROPERTY()
	bool bIsPowerUpActive;

public:
	// Sets default values for this actor's properties
	APowerUpActor();

protected:
	void onTickPowerUp();

	UFUNCTION(BlueprintImplementableEvent, Category = "Power Ups")
	void OnPowerUpStateChanged(bool bNewIsActive);

	void setPowerUpState(bool val);

public:
	void ActivatePowerUp(AActor* ActivatedFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Power Ups")
	void OnActivated(AActor* ActivatedFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Power Ups")
	void OnPowerUpTicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Power Ups")
	void OnExpired();


protected:
	FTimerHandle timerHandle_PowerUpTick;
	int32 ticksProcessed = 0;
};
