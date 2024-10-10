// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Indicator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPPROJECT_Indicator_generated_h
#error "Indicator.generated.h already included, missing '#pragma once' in Indicator.h"
#endif
#define FPPROJECT_Indicator_generated_h

#define FID_UE_RD_Project_Source_FPProject_Indicator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIndicator(); \
	friend struct Z_Construct_UClass_AIndicator_Statics; \
public: \
	DECLARE_CLASS(AIndicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPProject"), NO_API) \
	DECLARE_SERIALIZER(AIndicator)


#define FID_UE_RD_Project_Source_FPProject_Indicator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIndicator(AIndicator&&); \
	AIndicator(const AIndicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIndicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIndicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIndicator) \
	NO_API virtual ~AIndicator();


#define FID_UE_RD_Project_Source_FPProject_Indicator_h_9_PROLOG
#define FID_UE_RD_Project_Source_FPProject_Indicator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_Indicator_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_Indicator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class AIndicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_Indicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
