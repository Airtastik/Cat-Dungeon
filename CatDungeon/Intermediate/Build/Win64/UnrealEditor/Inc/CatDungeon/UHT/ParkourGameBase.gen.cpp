// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatDungeon/Public/ParkourGameBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourGameBase() {}

// Begin Cross Module References
CATDUNGEON_API UClass* Z_Construct_UClass_AParkourGameBase();
CATDUNGEON_API UClass* Z_Construct_UClass_AParkourGameBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CatDungeon();
// End Cross Module References

// Begin Class AParkourGameBase
void AParkourGameBase::StaticRegisterNativesAParkourGameBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParkourGameBase);
UClass* Z_Construct_UClass_AParkourGameBase_NoRegister()
{
	return AParkourGameBase::StaticClass();
}
struct Z_Construct_UClass_AParkourGameBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ParkourGameBase.h" },
		{ "ModuleRelativePath", "Public/ParkourGameBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourGameBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AParkourGameBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CatDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourGameBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParkourGameBase_Statics::ClassParams = {
	&AParkourGameBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourGameBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AParkourGameBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParkourGameBase()
{
	if (!Z_Registration_Info_UClass_AParkourGameBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParkourGameBase.OuterSingleton, Z_Construct_UClass_AParkourGameBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParkourGameBase.OuterSingleton;
}
template<> CATDUNGEON_API UClass* StaticClass<AParkourGameBase>()
{
	return AParkourGameBase::StaticClass();
}
AParkourGameBase::AParkourGameBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourGameBase);
AParkourGameBase::~AParkourGameBase() {}
// End Class AParkourGameBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParkourGameBase, AParkourGameBase::StaticClass, TEXT("AParkourGameBase"), &Z_Registration_Info_UClass_AParkourGameBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParkourGameBase), 3402669189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_941870750(TEXT("/Script/CatDungeon"),
	Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
