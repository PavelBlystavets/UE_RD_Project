// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPProject/FPAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPAttributeSet() {}

// Begin Cross Module References
FPPROJECT_API UClass* Z_Construct_UClass_UFPAttributeSet();
FPPROJECT_API UClass* Z_Construct_UClass_UFPAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_FPProject();
// End Cross Module References

// Begin Class UFPAttributeSet
void UFPAttributeSet::StaticRegisterNativesUFPAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPAttributeSet);
UClass* Z_Construct_UClass_UFPAttributeSet_NoRegister()
{
	return UFPAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UFPAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FPAttributeSet.h" },
		{ "ModuleRelativePath", "FPAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFPAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_FPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPAttributeSet_Statics::ClassParams = {
	&UFPAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPAttributeSet()
{
	if (!Z_Registration_Info_UClass_UFPAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPAttributeSet.OuterSingleton, Z_Construct_UClass_UFPAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPAttributeSet.OuterSingleton;
}
template<> FPPROJECT_API UClass* StaticClass<UFPAttributeSet>()
{
	return UFPAttributeSet::StaticClass();
}
UFPAttributeSet::UFPAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPAttributeSet);
UFPAttributeSet::~UFPAttributeSet() {}
// End Class UFPAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPAttributeSet, UFPAttributeSet::StaticClass, TEXT("UFPAttributeSet"), &Z_Registration_Info_UClass_UFPAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPAttributeSet), 44030285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_1066047323(TEXT("/Script/FPProject"),
	Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_FPAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
