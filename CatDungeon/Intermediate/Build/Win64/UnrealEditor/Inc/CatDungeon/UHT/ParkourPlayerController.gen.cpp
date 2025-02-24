// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatDungeon/Public/ParkourPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourPlayerController() {}

// Begin Cross Module References
CATDUNGEON_API UClass* Z_Construct_UClass_AParkourPlayerController();
CATDUNGEON_API UClass* Z_Construct_UClass_AParkourPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_CatDungeon();
// End Cross Module References

// Begin Class AParkourPlayerController
void AParkourPlayerController::StaticRegisterNativesAParkourPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParkourPlayerController);
UClass* Z_Construct_UClass_AParkourPlayerController_NoRegister()
{
	return AParkourPlayerController::StaticClass();
}
struct Z_Construct_UClass_AParkourPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ParkourPlayerController.h" },
		{ "ModuleRelativePath", "Public/ParkourPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AParkourPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CatDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParkourPlayerController_Statics::ClassParams = {
	&AParkourPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AParkourPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParkourPlayerController()
{
	if (!Z_Registration_Info_UClass_AParkourPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParkourPlayerController.OuterSingleton, Z_Construct_UClass_AParkourPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParkourPlayerController.OuterSingleton;
}
template<> CATDUNGEON_API UClass* StaticClass<AParkourPlayerController>()
{
	return AParkourPlayerController::StaticClass();
}
AParkourPlayerController::AParkourPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourPlayerController);
AParkourPlayerController::~AParkourPlayerController() {}
// End Class AParkourPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParkourPlayerController, AParkourPlayerController::StaticClass, TEXT("AParkourPlayerController"), &Z_Registration_Info_UClass_AParkourPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParkourPlayerController), 1773654067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_414960588(TEXT("/Script/CatDungeon"),
	Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
