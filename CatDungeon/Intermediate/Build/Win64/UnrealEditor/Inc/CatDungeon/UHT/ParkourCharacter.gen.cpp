// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatDungeon/Public/ParkourCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourCharacter() {}

// Begin Cross Module References
CATDUNGEON_API UClass* Z_Construct_UClass_AParkourCharacter();
CATDUNGEON_API UClass* Z_Construct_UClass_AParkourCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CatDungeon();
// End Cross Module References

// Begin Class AParkourCharacter
void AParkourCharacter::StaticRegisterNativesAParkourCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParkourCharacter);
UClass* Z_Construct_UClass_AParkourCharacter_NoRegister()
{
	return AParkourCharacter::StaticClass();
}
struct Z_Construct_UClass_AParkourCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ParkourCharacter.h" },
		{ "ModuleRelativePath", "Public/ParkourCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AParkourCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CatDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParkourCharacter_Statics::ClassParams = {
	&AParkourCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AParkourCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParkourCharacter()
{
	if (!Z_Registration_Info_UClass_AParkourCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParkourCharacter.OuterSingleton, Z_Construct_UClass_AParkourCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParkourCharacter.OuterSingleton;
}
template<> CATDUNGEON_API UClass* StaticClass<AParkourCharacter>()
{
	return AParkourCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourCharacter);
AParkourCharacter::~AParkourCharacter() {}
// End Class AParkourCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParkourCharacter, AParkourCharacter::StaticClass, TEXT("AParkourCharacter"), &Z_Registration_Info_UClass_AParkourCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParkourCharacter), 659394885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_312673066(TEXT("/Script/CatDungeon"),
	Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
