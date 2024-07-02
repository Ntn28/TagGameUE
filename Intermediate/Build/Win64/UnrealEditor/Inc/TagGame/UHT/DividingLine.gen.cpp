// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TagGame/DividingLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDividingLine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
TAGGAME_API UClass* Z_Construct_UClass_ADividingLine();
TAGGAME_API UClass* Z_Construct_UClass_ADividingLine_NoRegister();
UPackage* Z_Construct_UPackage__Script_TagGame();
// End Cross Module References

// Begin Class ADividingLine
void ADividingLine::StaticRegisterNativesADividingLine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADividingLine);
UClass* Z_Construct_UClass_ADividingLine_NoRegister()
{
	return ADividingLine::StaticClass();
}
struct Z_Construct_UClass_ADividingLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DividingLine.h" },
		{ "ModuleRelativePath", "DividingLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineCollider_MetaData[] = {
		{ "Category", "DividingLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DividingLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineCollider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADividingLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADividingLine_Statics::NewProp_LineCollider = { "LineCollider", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADividingLine, LineCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineCollider_MetaData), NewProp_LineCollider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADividingLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADividingLine_Statics::NewProp_LineCollider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADividingLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADividingLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TagGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADividingLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADividingLine_Statics::ClassParams = {
	&ADividingLine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADividingLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADividingLine_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADividingLine_Statics::Class_MetaDataParams), Z_Construct_UClass_ADividingLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADividingLine()
{
	if (!Z_Registration_Info_UClass_ADividingLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADividingLine.OuterSingleton, Z_Construct_UClass_ADividingLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADividingLine.OuterSingleton;
}
template<> TAGGAME_API UClass* StaticClass<ADividingLine>()
{
	return ADividingLine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADividingLine);
ADividingLine::~ADividingLine() {}
// End Class ADividingLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_DividingLine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADividingLine, ADividingLine::StaticClass, TEXT("ADividingLine"), &Z_Registration_Info_UClass_ADividingLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADividingLine), 3454441974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_DividingLine_h_1118975926(TEXT("/Script/TagGame"),
	Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_DividingLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_DividingLine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
