// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPProject/TestAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestAttributeSet() {}

// Begin Cross Module References
FPPROJECT_API UClass* Z_Construct_UClass_UFPAttributeSet();
FPPROJECT_API UClass* Z_Construct_UClass_UTestAttributeSet();
FPPROJECT_API UClass* Z_Construct_UClass_UTestAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_FPProject();
// End Cross Module References

// Begin Class UTestAttributeSet
void UTestAttributeSet::StaticRegisterNativesUTestAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestAttributeSet);
UClass* Z_Construct_UClass_UTestAttributeSet_NoRegister()
{
	return UTestAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UTestAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TestAttributeSet.h" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestAttribute_MetaData[] = {
		{ "Category", "TestAttributeSet" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_TestAttribute = { "TestAttribute", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, TestAttribute), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestAttribute_MetaData), NewProp_TestAttribute_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_TestAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFPAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_FPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestAttributeSet_Statics::ClassParams = {
	&UTestAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestAttributeSet()
{
	if (!Z_Registration_Info_UClass_UTestAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestAttributeSet.OuterSingleton, Z_Construct_UClass_UTestAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestAttributeSet.OuterSingleton;
}
template<> FPPROJECT_API UClass* StaticClass<UTestAttributeSet>()
{
	return UTestAttributeSet::StaticClass();
}
UTestAttributeSet::UTestAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestAttributeSet);
UTestAttributeSet::~UTestAttributeSet() {}
// End Class UTestAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_TestAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestAttributeSet, UTestAttributeSet::StaticClass, TEXT("UTestAttributeSet"), &Z_Registration_Info_UClass_UTestAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestAttributeSet), 2085996316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_TestAttributeSet_h_2715504979(TEXT("/Script/FPProject"),
	Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_TestAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_RD_Project_Source_FPProject_TestAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
