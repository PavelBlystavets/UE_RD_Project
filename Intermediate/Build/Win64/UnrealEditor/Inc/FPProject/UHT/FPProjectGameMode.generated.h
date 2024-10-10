// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPProjectGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPPROJECT_FPProjectGameMode_generated_h
#error "FPProjectGameMode.generated.h already included, missing '#pragma once' in FPProjectGameMode.h"
#endif
#define FPPROJECT_FPProjectGameMode_generated_h

#define FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPProjectGameMode(); \
	friend struct Z_Construct_UClass_AFPProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPProject"), FPPROJECT_API) \
	DECLARE_SERIALIZER(AFPProjectGameMode)


#define FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPProjectGameMode(AFPProjectGameMode&&); \
	AFPProjectGameMode(const AFPProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPPROJECT_API, AFPProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPProjectGameMode) \
	FPPROJECT_API virtual ~AFPProjectGameMode();


#define FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_9_PROLOG
#define FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class AFPProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
