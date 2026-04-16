// Fill out your copyright notice in the Description page of Project Settings.


#include "InitClass.h"

// Sets default values
AInitClass::AInitClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    x = 10;

}

// Called when the game starts or when spawned
void AInitClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInitClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

