// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOYRacingGame/EOYRacingGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOYRacingGameGameMode() {}
// Cross Module References
	EOYRACINGGAME_API UClass* Z_Construct_UClass_AEOYRacingGameGameMode_NoRegister();
	EOYRACINGGAME_API UClass* Z_Construct_UClass_AEOYRacingGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EOYRacingGame();
// End Cross Module References
	void AEOYRacingGameGameMode::StaticRegisterNativesAEOYRacingGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEOYRacingGameGameMode_NoRegister()
	{
		return AEOYRacingGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEOYRacingGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEOYRacingGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EOYRacingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEOYRacingGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EOYRacingGameGameMode.h" },
		{ "ModuleRelativePath", "EOYRacingGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEOYRacingGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEOYRacingGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEOYRacingGameGameMode_Statics::ClassParams = {
		&AEOYRacingGameGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEOYRacingGameGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEOYRacingGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEOYRacingGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEOYRacingGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEOYRacingGameGameMode, 2826416092);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEOYRacingGameGameMode(Z_Construct_UClass_AEOYRacingGameGameMode, &AEOYRacingGameGameMode::StaticClass, TEXT("/Script/EOYRacingGame"), TEXT("AEOYRacingGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEOYRacingGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
