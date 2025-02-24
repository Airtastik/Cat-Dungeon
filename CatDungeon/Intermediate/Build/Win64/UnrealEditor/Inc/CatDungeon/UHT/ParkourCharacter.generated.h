// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParkourCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATDUNGEON_ParkourCharacter_generated_h
#error "ParkourCharacter.generated.h already included, missing '#pragma once' in ParkourCharacter.h"
#endif
#define CATDUNGEON_ParkourCharacter_generated_h

#define FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParkourCharacter(); \
	friend struct Z_Construct_UClass_AParkourCharacter_Statics; \
public: \
	DECLARE_CLASS(AParkourCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CatDungeon"), NO_API) \
	DECLARE_SERIALIZER(AParkourCharacter)


#define FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AParkourCharacter(AParkourCharacter&&); \
	AParkourCharacter(const AParkourCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParkourCharacter) \
	NO_API virtual ~AParkourCharacter();


#define FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_9_PROLOG
#define FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATDUNGEON_API UClass* StaticClass<class AParkourCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CatDungeon_Source_CatDungeon_Public_ParkourCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
