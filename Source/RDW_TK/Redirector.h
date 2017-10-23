// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RedirectionManager.h"

/**
 * 
 */
class RDW_TK_API Redirector
{
public:
	RedirectionManager *redirectionManager;

	Redirector();

	// Not written yet. I'm not quite sure what this does
	void applyRedireection() {};

	~Redirector();

protected:
	void injectRotation(float rotationInDegrees);
	void injectCurvature(float rotationInDegrees);
	void injectTranslation(FVector translation);
};
