// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParkourPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATDUNGEON_ParkourPlayerController_generated_h
#error "ParkourPlayerController.generated.h already included, missing '#pragma once' in ParkourPlayerController.h"
#endif
#define CATDUNGEON_ParkourPlayerController_generated_h

#define FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParkourPlayerController(); \
	friend struct Z_Construct_UClass_AParkourPlayerController_Statics; \
public: \
	DECLARE_CLASS(AParkourPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CatDungeon"), NO_API) \
	DECLARE_SERIALIZER(AParkourPlayerController)


#define FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParkourPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AParkourPlayerController(AParkourPlayerController&&); \
	AParkourPlayerController(const AParkourPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParkourPlayerController) \
	NO_API virtual ~AParkourPlayerController();


#define FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_12_PROLOG
#define FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATDUNGEON_API UClass* StaticClass<class AParkourPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CatDungeon_Source_CatDungeon_Public_ParkourPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
