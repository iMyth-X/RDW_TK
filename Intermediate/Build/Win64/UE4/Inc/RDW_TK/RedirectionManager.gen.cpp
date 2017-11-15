// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RedirectionManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedirectionManager() {}
// Cross Module References
	RDW_TK_API UEnum* Z_Construct_UEnum_RDW_TK_EMovementController();
	UPackage* Z_Construct_UPackage__Script_RDW_TK();
	RDW_TK_API UClass* Z_Construct_UClass_ARedirectionManager_NoRegister();
	RDW_TK_API UClass* Z_Construct_UClass_ARedirectionManager();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
static UEnum* EMovementController_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_RDW_TK_EMovementController, Z_Construct_UPackage__Script_RDW_TK(), TEXT("EMovementController"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementController(EMovementController_StaticEnum, TEXT("/Script/RDW_TK"), TEXT("EMovementController"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_RDW_TK_EMovementController()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_RDW_TK();
		extern uint32 Get_Z_Construct_UEnum_RDW_TK_EMovementController_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementController"), 0, Get_Z_Construct_UEnum_RDW_TK_EMovementController_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMovementController"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("keyboard"), 0);
			EnumNames.Emplace(TEXT("AutoPilot"), 1);
			EnumNames.Emplace(TEXT("Tracker"), 2);
			EnumNames.Emplace(TEXT("EMovementController_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EMovementController");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_RDW_TK_EMovementController_CRC() { return 915893468U; }
	void ARedirectionManager::StaticRegisterNativesARedirectionManager()
	{
	}
	UClass* Z_Construct_UClass_ARedirectionManager_NoRegister()
	{
		return ARedirectionManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ARedirectionManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_RDW_TK();
			OuterClass = ARedirectionManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_TargetFPS = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetFPS"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TargetFPS, ARedirectionManager), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UseManulatTime, ARedirectionManager);
				UProperty* NewProp_UseManulatTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UseManulatTime"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UseManulatTime, ARedirectionManager), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(UseManulatTime, ARedirectionManager), sizeof(bool), true);
				UProperty* NewProp_headTransform = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("headTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(headTransform, ARedirectionManager), 0x0010000000000001, Z_Construct_UClass_UObject_NoRegister());
				UProperty* NewProp_CurvatureRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurvatureRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurvatureRadius, ARedirectionManager), 0x0010000000000001);
				UProperty* NewProp_MinRotGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinRotGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinRotGain, ARedirectionManager), 0x0010000000000001);
				UProperty* NewProp_MaxRotGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxRotGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxRotGain, ARedirectionManager), 0x0010000000000001);
				UProperty* NewProp_MinTransGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinTransGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinTransGain, ARedirectionManager), 0x0010000000000001);
				UProperty* NewProp_MaxTransGain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxTransGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxTransGain, ARedirectionManager), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(runInTestMode, ARedirectionManager);
				UProperty* NewProp_runInTestMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("runInTestMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(runInTestMode, ARedirectionManager), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(runInTestMode, ARedirectionManager), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<ARedirectionManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_TargetFPS, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_TargetFPS, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_TargetFPS, TEXT("ToolTip"), TEXT("ToolTip: \"Target simulated framerate in auto-pilot mode\""));
				MetaData->SetValue(NewProp_UseManulatTime, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_UseManulatTime, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_UseManulatTime, TEXT("ToolTip"), TEXT("ToolTip: \"Use simulated framerate in auto-pilot mode\""));
				MetaData->SetValue(NewProp_headTransform, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_headTransform, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_headTransform, TEXT("ToolTip"), TEXT("ToolTip: \"Game Object that is being physically tracked (Probably user's head)\"\n SPACEHOLDER\n Not sure why I needed this to be a pointer\n However, since this is just a place holder for the time being, I'll let it sit"));
				MetaData->SetValue(NewProp_CurvatureRadius, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_CurvatureRadius, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_CurvatureRadius, TEXT("ToolTip"), TEXT("ToolTip: \"Radius applied by curvature gain\"\nRange: (1, 23)"));
				MetaData->SetValue(NewProp_MinRotGain, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_MinRotGain, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_MinRotGain, TEXT("ToolTip"), TEXT("ToolTip: \"Minimumlation rotation gain applied\"\nRange: (-.99f, 0)"));
				MetaData->SetValue(NewProp_MaxRotGain, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_MaxRotGain, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_MaxRotGain, TEXT("ToolTip"), TEXT("ToolTip: \"Maximum rotation gain applied\"\nRange: (0, 5)"));
				MetaData->SetValue(NewProp_MinTransGain, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_MinTransGain, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_MinTransGain, TEXT("ToolTip"), TEXT("ToolTip: \"Minimumlation gain applied\"\nRange: (-.99f, 0)"));
				MetaData->SetValue(NewProp_MaxTransGain, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_MaxTransGain, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_MaxTransGain, TEXT("ToolTip"), TEXT("ToolTip: \"Maximum translation gain applied\"\nRange: (0, 5)"));
				MetaData->SetValue(NewProp_runInTestMode, TEXT("Category"), TEXT("Redirected Walking"));
				MetaData->SetValue(NewProp_runInTestMode, TEXT("ModuleRelativePath"), TEXT("RedirectionManager.h"));
				MetaData->SetValue(NewProp_runInTestMode, TEXT("ToolTip"), TEXT("AddToolTip: \"Select if you wish to run simulation from commandline in UE4 batchmode.\"\nNeeded?"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedirectionManager, 2053287565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedirectionManager(Z_Construct_UClass_ARedirectionManager, &ARedirectionManager::StaticClass, TEXT("/Script/RDW_TK"), TEXT("ARedirectionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedirectionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
