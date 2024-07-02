// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TagGame/EnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
TAGGAME_API UClass* Z_Construct_UClass_AEnemyAIController();
TAGGAME_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TagGame();
// End Cross Module References

// Begin Class AEnemyAIController
void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyAIController);
UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
{
	return AEnemyAIController::StaticClass();
}
struct Z_Construct_UClass_AEnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyAIController.h" },
		{ "ModuleRelativePath", "EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAIController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComponent_MetaData), NewProp_BlackboardComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BlackboardComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TagGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAIController_Statics::ClassParams = {
	&AEnemyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyAIController()
{
	if (!Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton, Z_Construct_UClass_AEnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton;
}
template<> TAGGAME_API UClass* StaticClass<AEnemyAIController>()
{
	return AEnemyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
AEnemyAIController::~AEnemyAIController() {}
// End Class AEnemyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_EnemyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAIController, AEnemyAIController::StaticClass, TEXT("AEnemyAIController"), &Z_Registration_Info_UClass_AEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAIController), 3819845982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_EnemyAIController_h_2793437646(TEXT("/Script/TagGame"),
	Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_EnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ntnca_Documents_Unreal_Projects_TagGame_Source_TagGame_EnemyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
