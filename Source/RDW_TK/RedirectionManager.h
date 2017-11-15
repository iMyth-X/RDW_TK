// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RedirectionManager.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum EMovementController { keyboard, AutoPilot, Tracker };

UCLASS()
class RDW_TK_API ARedirectionManager: public ACharacter
{
	GENERATED_BODY()

public:
	ARedirectionManager();

	//AddToolTip: "Select if you wish to run simulation from commandline in UE4 batchmode."
	//Needed?
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		bool runInTestMode = false;

	//AddToolTip: "How user movement is controlled"
	/****************   Gotto Fix!!!! *****************************/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Redirected Walking")
	//	EMovementController MOVEMENT_CONTROLLER = Tracker;

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
	// Not sure why I needed this to be a pointer
	// However, since this is just a place holder for the time being, I'll let it sit
	UPROPERTY(EditAnywhere, Category = "Redirected Walking")
		UObject *headTransform;

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

	//~RedirectionManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float simulatedTime = 0.0f;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
