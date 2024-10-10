// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPPROJECT_FPAttributeSet_generated_h
#error "FPAttributeSet.generated.h already included, missing '#pragma once' in FPAttributeSet.h"
#endif
#define FPPROJECT_FPAttributeSet_generated_h

#define FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPAttributeSet(); \
	friend struct Z_Construct_UClass_UFPAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UFPAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPProject"), NO_API) \
	DECLARE_SERIALIZER(UFPAttributeSet)


#define FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPAttributeSet(UFPAttributeSet&&); \
	UFPAttributeSet(const UFPAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPAttributeSet) \
	NO_API virtual ~UFPAttributeSet();


#define FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_19_PROLOG
#define FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class UFPAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
