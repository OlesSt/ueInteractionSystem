// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Init.generated.h"

UCLASS()
class UEINTERACTIONSYSTEM_API AInit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
