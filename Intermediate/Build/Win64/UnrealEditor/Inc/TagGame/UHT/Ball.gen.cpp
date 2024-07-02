// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TagGame/Ball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TAGGAME_API UClass* Z_Construct_UClass_ABall();
TAGGAME_API UClass* Z_Construct_UClass_ABall_NoRegister();
UPackage* Z_Construct_UPackage__Script_TagGame();
// End Cross Module References

// Begin Class ABall
void ABall::StaticRegisterNativesABall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABall);
UClass* Z_Construct_UClass_ABall_NoRegister()
{
	return ABall::StaticClass();
}
struct Z_Construct_UClass_ABall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_BallMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TagGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
	&ABall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams), Z_Construct_UClass_ABall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABall()
{
	if (!Z_Registration_Info_UClass_ABall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABall.OuterSingleton, Z_Construct_UClass_ABall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABall.OuterSingleton;
}
template<> TAGGAME_API UClass* StaticClass<ABall>()
{
	return ABall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
ABall::~ABall() {}
// End Class ABall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_Ball_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABall, ABall::StaticClass, TEXT("ABall"), &Z_Registration_Info_UClass_ABall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABall), 2542484083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_Ball_h_2650717763(TEXT("/Script/TagGame"),
	Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_Ball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_Ball_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
