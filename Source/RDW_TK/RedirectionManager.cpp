// Fill out your copyright notice in the Description page of Project Settings.

#include "RedirectionManager.h"

RedirectionManager::RedirectionManager():
	MaxTransGain(0.26f),
	MinTransGain(-.14f),
	MinRotGain(.49),
	MaxRotGain(-.2f),
	CurvatureRadius(7.5f)
{

}

RedirectionManager::~RedirectionManager()
{
}
