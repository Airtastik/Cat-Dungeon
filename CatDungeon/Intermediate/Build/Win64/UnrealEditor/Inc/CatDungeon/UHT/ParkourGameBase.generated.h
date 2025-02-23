// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParkourGameBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATDUNGEON_ParkourGameBase_generated_h
#error "ParkourGameBase.generated.h already included, missing '#pragma once' in ParkourGameBase.h"
#endif
#define CATDUNGEON_ParkourGameBase_generated_h

#define FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParkourGameBase(); \
	friend struct Z_Construct_UClass_AParkourGameBase_Statics; \
public: \
	DECLARE_CLASS(AParkourGameBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CatDungeon"), NO_API) \
	DECLARE_SERIALIZER(AParkourGameBase)


#define FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParkourGameBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AParkourGameBase(AParkourGameBase&&); \
	AParkourGameBase(const AParkourGameBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourGameBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParkourGameBase) \
	NO_API virtual ~AParkourGameBase();


#define FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_12_PROLOG
#define FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATDUNGEON_API UClass* StaticClass<class AParkourGameBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CatDungeon_Source_CatDungeon_Public_ParkourGameBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
