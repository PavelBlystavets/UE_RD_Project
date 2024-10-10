// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPProject/FPProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPPROJECT_API UClass* Z_Construct_UClass_AFPProjectGameMode();
FPPROJECT_API UClass* Z_Construct_UClass_AFPProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPProject();
// End Cross Module References

// Begin Class AFPProjectGameMode
void AFPProjectGameMode::StaticRegisterNativesAFPProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPProjectGameMode);
UClass* Z_Construct_UClass_AFPProjectGameMode_NoRegister()
{
	return AFPProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AFPProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPProjectGameMode.h" },
		{ "ModuleRelativePath", "FPProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPProjectGameMode_Statics::ClassParams = {
	&AFPProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AFPProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPProjectGameMode.OuterSingleton, Z_Construct_UClass_AFPProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPProjectGameMode.OuterSingleton;
}
template<> FPPROJECT_API UClass* StaticClass<AFPProjectGameMode>()
{
	return AFPProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPProjectGameMode);
AFPProjectGameMode::~AFPProjectGameMode() {}
// End Class AFPProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPProjectGameMode, AFPProjectGameMode::StaticClass, TEXT("AFPProjectGameMode"), &Z_Registration_Info_UClass_AFPProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPProjectGameMode), 3293670285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_4108350138(TEXT("/Script/FPProject"),
	Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
