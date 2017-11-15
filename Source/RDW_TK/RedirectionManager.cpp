// Fill out your copyright notice in the Description page of Project Settings.

#include "RedirectionManager.h"

//Constructor to fill out the default values
ARedirectionManager::ARedirectionManager():
	MaxTransGain(0.26f),
	MinTransGain(-.14f),
	MinRotGain(.49),
	MaxRotGain(-.2f),
	CurvatureRadius(7.5f)
{

}

// Called when the game starts or when spawned
void ARedirectionManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARedirectionManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float apple = 69.69;
	float banana = 84.84;
	float kiwi = 99.99;
}

// Called to bind functionality to input
void ARedirectionManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


//RedirectionManager::~RedirectionManager()
//{
//}
