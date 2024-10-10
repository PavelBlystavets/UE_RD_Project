// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPPROJECT_FPProjectProjectile_generated_h
#error "FPProjectProjectile.generated.h already included, missing '#pragma once' in FPProjectProjectile.h"
#endif
#define FPPROJECT_FPProjectProjectile_generated_h

#define FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPProjectProjectile(); \
	friend struct Z_Construct_UClass_AFPProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPProject"), NO_API) \
	DECLARE_SERIALIZER(AFPProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPProjectProjectile(AFPProjectProjectile&&); \
	AFPProjectProjectile(const AFPProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPProjectProjectile) \
	NO_API virtual ~AFPProjectProjectile();


#define FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_12_PROLOG
#define FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPPROJECT_API UClass* StaticClass<class AFPProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_RD_Project_Source_FPProject_FPProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
