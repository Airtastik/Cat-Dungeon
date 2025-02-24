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
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmFor3D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParkourCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmFor2D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParkourCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFor3D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParkourCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFor2D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParkourCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmFor3D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmFor2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraFor3D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraFor2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParkourCharacter_Statics::NewProp_SpringArmFor3D = { "SpringArmFor3D", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParkourCharacter, SpringArmFor3D), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmFor3D_MetaData), NewProp_SpringArmFor3D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParkourCharacter_Statics::NewProp_SpringArmFor2D = { "SpringArmFor2D", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParkourCharacter, SpringArmFor2D), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmFor2D_MetaData), NewProp_SpringArmFor2D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParkourCharacter_Statics::NewProp_CameraFor3D = { "CameraFor3D", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParkourCharacter, CameraFor3D), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFor3D_MetaData), NewProp_CameraFor3D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParkourCharacter_Statics::NewProp_CameraFor2D = { "CameraFor2D", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParkourCharacter, CameraFor2D), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFor2D_MetaData), NewProp_CameraFor2D_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParkourCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParkourCharacter_Statics::NewProp_SpringArmFor3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParkourCharacter_Statics::NewProp_SpringArmFor2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParkourCharacter_Statics::NewProp_CameraFor3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParkourCharacter_Statics::NewProp_CameraFor2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourCharacter_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AParkourCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AParkourCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_AParkourCharacter, AParkourCharacter::StaticClass, TEXT("AParkourCharacter"), &Z_Registration_Info_UClass_AParkourCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParkourCharacter), 3982810542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_1379342474(TEXT("/Script/CatDungeon"),
	Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
