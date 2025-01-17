// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TagGame/TagGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTagGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TAGGAME_API UClass* Z_Construct_UClass_ATagGameGameMode();
TAGGAME_API UClass* Z_Construct_UClass_ATagGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TagGame();
// End Cross Module References

// Begin Class ATagGameGameMode
void ATagGameGameMode::StaticRegisterNativesATagGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATagGameGameMode);
UClass* Z_Construct_UClass_ATagGameGameMode_NoRegister()
{
	return ATagGameGameMode::StaticClass();
}
struct Z_Construct_UClass_ATagGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TagGameGameMode.h" },
		{ "ModuleRelativePath", "TagGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATagGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATagGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TagGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATagGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATagGameGameMode_Statics::ClassParams = {
	&ATagGameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATagGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATagGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATagGameGameMode()
{
	if (!Z_Registration_Info_UClass_ATagGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATagGameGameMode.OuterSingleton, Z_Construct_UClass_ATagGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATagGameGameMode.OuterSingleton;
}
template<> TAGGAME_API UClass* StaticClass<ATagGameGameMode>()
{
	return ATagGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATagGameGameMode);
ATagGameGameMode::~ATagGameGameMode() {}
// End Class ATagGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_TagGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATagGameGameMode, ATagGameGameMode::StaticClass, TEXT("ATagGameGameMode"), &Z_Registration_Info_UClass_ATagGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATagGameGameMode), 24068963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_TagGameGameMode_h_2751440879(TEXT("/Script/TagGame"),
	Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_TagGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_TagGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
