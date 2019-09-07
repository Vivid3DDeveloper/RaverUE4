// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Raver/RaverGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaverGameModeBase() {}
// Cross Module References
	RAVER_API UClass* Z_Construct_UClass_ARaverGameModeBase_NoRegister();
	RAVER_API UClass* Z_Construct_UClass_ARaverGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Raver();
// End Cross Module References
	void ARaverGameModeBase::StaticRegisterNativesARaverGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARaverGameModeBase_NoRegister()
	{
		return ARaverGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARaverGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaverGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Raver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaverGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RaverGameModeBase.h" },
		{ "ModuleRelativePath", "RaverGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaverGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaverGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARaverGameModeBase_Statics::ClassParams = {
		&ARaverGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARaverGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARaverGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaverGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaverGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaverGameModeBase, 3682579400);
	template<> RAVER_API UClass* StaticClass<ARaverGameModeBase>()
	{
		return ARaverGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaverGameModeBase(Z_Construct_UClass_ARaverGameModeBase, &ARaverGameModeBase::StaticClass, TEXT("/Script/Raver"), TEXT("ARaverGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaverGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
