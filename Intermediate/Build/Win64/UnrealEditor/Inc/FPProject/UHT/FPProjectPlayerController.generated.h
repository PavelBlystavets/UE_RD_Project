// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPProjectPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPPROJECT_FPProjectPlayerController_generated_h
#error "FPProjectPlayerController.generated.h already included, missing '#pragma once' in FPProjectPlayerController.h"
#endif
#define FPPROJECT_FPProjectPlayerController_generated_h

#define FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPProjectPlayerController(); \
	friend struct Z_Construct_UClass_AFPProjectPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPProject"), NO_API) \
	DECLARE_SERIALIZER(AFPProjectPlayerController)


#define FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPProjectPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPProjectPlayerController(AFPProjectPlayerController&&); \
	AFPProjectPlayerController(const AFPProjectPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPProjectPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPProjectPlayerController) \
	NO_API virtual ~AFPProjectPlayerController();


#define FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h_14_PROLOG
#define FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class AFPProjectPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_FPProjectPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
