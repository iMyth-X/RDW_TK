// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RDW_TK_RedirectionManager_generated_h
#error "RedirectionManager.generated.h already included, missing '#pragma once' in RedirectionManager.h"
#endif
#define RDW_TK_RedirectionManager_generated_h

#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_RPC_WRAPPERS
#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARedirectionManager(); \
	friend RDW_TK_API class UClass* Z_Construct_UClass_ARedirectionManager(); \
public: \
	DECLARE_CLASS(ARedirectionManager, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RDW_TK"), NO_API) \
	DECLARE_SERIALIZER(ARedirectionManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARedirectionManager(); \
	friend RDW_TK_API class UClass* Z_Construct_UClass_ARedirectionManager(); \
public: \
	DECLARE_CLASS(ARedirectionManager, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RDW_TK"), NO_API) \
	DECLARE_SERIALIZER(ARedirectionManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARedirectionManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARedirectionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedirectionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedirectionManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedirectionManager(ARedirectionManager&&); \
	NO_API ARedirectionManager(const ARedirectionManager&); \
public:


#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedirectionManager(ARedirectionManager&&); \
	NO_API ARedirectionManager(const ARedirectionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedirectionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedirectionManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARedirectionManager)


#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_PRIVATE_PROPERTY_OFFSET
#define RDW_TK_Source_RDW_TK_RedirectionManager_h_16_PROLOG
#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_PRIVATE_PROPERTY_OFFSET \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_RPC_WRAPPERS \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_INCLASS \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RDW_TK_Source_RDW_TK_RedirectionManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_PRIVATE_PROPERTY_OFFSET \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_INCLASS_NO_PURE_DECLS \
	RDW_TK_Source_RDW_TK_RedirectionManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RDW_TK_Source_RDW_TK_RedirectionManager_h


#define FOREACH_ENUM_EMOVEMENTCONTROLLER(op) \
	op(keyboard) \
	op(AutoPilot) \
	op(Tracker) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
