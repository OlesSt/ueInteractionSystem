// Fill out your copyright notice in the Description page of Project Settings.


#include "Init.h"

// Sets default values
AInit::AInit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

