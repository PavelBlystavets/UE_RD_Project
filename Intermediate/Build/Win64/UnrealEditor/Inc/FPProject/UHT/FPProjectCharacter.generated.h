// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPPROJECT_FPProjectCharacter_generated_h
#error "FPProjectCharacter.generated.h already included, missing '#pragma once' in FPProjectCharacter.h"
#endif
#define FPPROJECT_FPProjectCharacter_generated_h

#define FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPProjectCharacter(); \
	friend struct Z_Construct_UClass_AFPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPProject"), NO_API) \
	DECLARE_SERIALIZER(AFPProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AFPProjectCharacter*>(this); }


#define FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPProjectCharacter(AFPProjectCharacter&&); \
	AFPProjectCharacter(const AFPProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPProjectCharacter) \
	NO_API virtual ~AFPProjectCharacter();


#define FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h_20_PROLOG
#define FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class AFPProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_FPProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
