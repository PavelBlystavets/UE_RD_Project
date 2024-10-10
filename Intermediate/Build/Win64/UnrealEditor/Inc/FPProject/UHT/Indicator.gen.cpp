// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPProject/Indicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
FPPROJECT_API UClass* Z_Construct_UClass_AIndicator();
FPPROJECT_API UClass* Z_Construct_UClass_AIndicator_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPProject();
// End Cross Module References

// Begin Class AIndicator
void AIndicator::StaticRegisterNativesAIndicator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIndicator);
UClass* Z_Construct_UClass_AIndicator_NoRegister()
{
	return AIndicator::StaticClass();
}
struct Z_Construct_UClass_AIndicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Indicator.h" },
		{ "ModuleRelativePath", "Indicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextComponent_MetaData[] = {
		{ "Category", "Indicator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Indicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIndicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIndicator_Statics::NewProp_TextComponent = { "TextComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIndicator, TextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextComponent_MetaData), NewProp_TextComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIndicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIndicator_Statics::NewProp_TextComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIndicator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIndicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIndicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIndicator_Statics::ClassParams = {
	&AIndicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIndicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIndicator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIndicator_Statics::Class_MetaDataParams), Z_Construct_UClass_AIndicator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIndicator()
{
	if (!Z_Registration_Info_UClass_AIndicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIndicator.OuterSingleton, Z_Construct_UClass_AIndicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIndicator.OuterSingleton;
}
template<> FPPROJECT_API UClass* StaticClass<AIndicator>()
{
	return AIndicator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIndicator);
AIndicator::~AIndicator() {}
// End Class AIndicator

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_Indicator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIndicator, AIndicator::StaticClass, TEXT("AIndicator"), &Z_Registration_Info_UClass_AIndicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIndicator), 253408990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_Indicator_h_3166285173(TEXT("/Script/FPProject"),
	Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_Indicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_Indicator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
