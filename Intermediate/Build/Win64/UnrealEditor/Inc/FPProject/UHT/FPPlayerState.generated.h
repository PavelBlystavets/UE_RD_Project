// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPPROJECT_FPPlayerState_generated_h
#error "FPPlayerState.generated.h already included, missing '#pragma once' in FPPlayerState.h"
#endif
#define FPPROJECT_FPPlayerState_generated_h

#define FID_UE_RD_Project_Source_FPProject_FPPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPPlayerState(); \
	friend struct Z_Construct_UClass_AFPPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFPPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPProject"), NO_API) \
	DECLARE_SERIALIZER(AFPPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AFPPlayerState*>(this); }


#define FID_UE_RD_Project_Source_FPProject_FPPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPPlayerState(AFPPlayerState&&); \
	AFPPlayerState(const AFPPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPPlayerState) \
	NO_API virtual ~AFPPlayerState();


#define FID_UE_RD_Project_Source_FPProject_FPPlayerState_h_13_PROLOG
#define FID_UE_RD_Project_Source_FPProject_FPPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_FPPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class AFPPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_FPPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
