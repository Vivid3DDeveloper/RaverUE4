// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAVER_RaverGameModeBase_generated_h
#error "RaverGameModeBase.generated.h already included, missing '#pragma once' in RaverGameModeBase.h"
#endif
#define RAVER_RaverGameModeBase_generated_h

#define Raver_Source_Raver_RaverGameModeBase_h_15_RPC_WRAPPERS
#define Raver_Source_Raver_RaverGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Raver_Source_Raver_RaverGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaverGameModeBase(); \
	friend struct Z_Construct_UClass_ARaverGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARaverGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Raver"), NO_API) \
	DECLARE_SERIALIZER(ARaverGameModeBase)


#define Raver_Source_Raver_RaverGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARaverGameModeBase(); \
	friend struct Z_Construct_UClass_ARaverGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARaverGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Raver"), NO_API) \
	DECLARE_SERIALIZER(ARaverGameModeBase)


#define Raver_Source_Raver_RaverGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARaverGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARaverGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaverGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaverGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaverGameModeBase(ARaverGameModeBase&&); \
	NO_API ARaverGameModeBase(const ARaverGameModeBase&); \
public:


#define Raver_Source_Raver_RaverGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARaverGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaverGameModeBase(ARaverGameModeBase&&); \
	NO_API ARaverGameModeBase(const ARaverGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaverGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaverGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARaverGameModeBase)


#define Raver_Source_Raver_RaverGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Raver_Source_Raver_RaverGameModeBase_h_12_PROLOG
#define Raver_Source_Raver_RaverGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Raver_Source_Raver_RaverGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Raver_Source_Raver_RaverGameModeBase_h_15_RPC_WRAPPERS \
	Raver_Source_Raver_RaverGameModeBase_h_15_INCLASS \
	Raver_Source_Raver_RaverGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Raver_Source_Raver_RaverGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Raver_Source_Raver_RaverGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Raver_Source_Raver_RaverGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Raver_Source_Raver_RaverGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Raver_Source_Raver_RaverGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAVER_API UClass* StaticClass<class ARaverGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Raver_Source_Raver_RaverGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
