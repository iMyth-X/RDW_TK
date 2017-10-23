// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RDW_TK_API RedirectionManager
{
public:
	RedirectionManager();

	enum MovementController { keyboard, AutoPilot, Tracker };

	//AddToolTip: "Select if you wish to run simulation from commandline in UE4 batchmode."
	//Needed?
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		bool runInTestMode = false;

	//AddToolTip: "How user movement is controlled"
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		MovementController MOVEMENT_CONTROLLER = Tracker;

	//ToolTip: "Maximum translation gain applied"
	//Range: (0, 5)
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		float MaxTransGain;

	//ToolTip: "Minimumlation gain applied"
	//Range: (-.99f, 0)
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		float MinTransGain;

	//ToolTip: "Maximum rotation gain applied"
	//Range: (0, 5)
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		float MaxRotGain;

	//ToolTip: "Minimumlation rotation gain applied"
	//Range: (-.99f, 0)
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		float MinRotGain;

	//ToolTip: "Radius applied by curvature gain"
	//Range: (1, 23)
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		float CurvatureRadius;

	//ToolTip: "Game Object that is being physically tracked (Probably user's head)"
	// SPACEHOLDER
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		UObject headTransform;

	//ToolTip: "Use simulated framerate in auto-pilot mode"
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		bool UseManulatTime=false;

	//ToolTip: "Target simulated framerate in auto-pilot mode"
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		float TargetFPS = 60.0f;

	// SPACEHOLDER * 3
	UObject body;
	UObject trackedSpace;
	UObject simulatedHead;

	// SPACEHOLDER "Redirector"
	UObject redirector;
	// SPACEHOLDER "Resetter"
	UObject resetter;
	// SPACEHOLDER "ResetTrigger"
	UObject resetTrigger;
	// SPACEHOLDER "TrailDrawer"
	UObject trailDrawer;
	// SPACEHOLDER "SimulationManager"
	UObject simulationManager;
	// SPACEHOLDER "SimulatedWalker"
	UObject simulatedWalker;
	// SPACEHOLDER "KeyboardController"
	UObject keyboardController;
	// SPACEHOLDER "SnapshotGenerator"
	UObject snapshotGenerator;
	// SPACEHOLDER "StatisticsLogger"
	UObject statisticsLogger;
	// SPACEHOLDER "HeadFollower"
	UObject headFollower;

	FVector currPos, currPosReal, prevPos, prevPosReal;
	FVector currDir, currDirReal, prevDir, prevDirReal;
	FVector deltaPos;
	float deltaDir;

	// SPACEHOLDER "transform"
	UObject targetWayPoint;

	bool inReset = false;
	FString startTimeOfProgram;

	~RedirectionManager();

private:
	float simulatedTime = 0.0f;
};
