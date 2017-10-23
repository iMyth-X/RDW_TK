// Fill out your copyright notice in the Description page of Project Settings.

#include "Redirector.h"

Redirector::Redirector()
{
}

// Applies rotation to Redirected User. The neat thing about calling it this way is that we can keep track of gains applied.
void Redirector::injectRotation(float rotationInDegrees)
{
	if (rotationInDegrees != 0)
	{

	}
}

// Applies curvature to Redirected User. The neat thing about calling it this way is that we can keep track of gains applied.
void Redirector::injectCurvature(float rotationInDegrees)
{
	if (rotationInDegrees != 0)
	{

	}
}

// Applies rotation to Redirected User. The neat thing about calling it this way is that we can keep track of gains applied.
void Redirector::injectTranslation(FVector translation)
{
	if (translation.Size() > 0)
	{

	}
}

Redirector::~Redirector()
{
}
