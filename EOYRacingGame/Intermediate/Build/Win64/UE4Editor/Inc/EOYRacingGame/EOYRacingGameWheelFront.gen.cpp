// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOYRacingGame/EOYRacingGameWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOYRacingGameWheelFront() {}
// Cross Module References
	EOYRACINGGAME_API UClass* Z_Construct_UClass_UEOYRacingGameWheelFront_NoRegister();
	EOYRACINGGAME_API UClass* Z_Construct_UClass_UEOYRacingGameWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_EOYRacingGame();
// End Cross Module References
	void UEOYRacingGameWheelFront::StaticRegisterNativesUEOYRacingGameWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UEOYRacingGameWheelFront_NoRegister()
	{
		return UEOYRacingGameWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UEOYRacingGameWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_EOYRacingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EOYRacingGameWheelFront.h" },
		{ "ModuleRelativePath", "EOYRacingGameWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOYRacingGameWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::ClassParams = {
		&UEOYRacingGameWheelFront::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOYRacingGameWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOYRacingGameWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOYRacingGameWheelFront, 3355215804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOYRacingGameWheelFront(Z_Construct_UClass_UEOYRacingGameWheelFront, &UEOYRacingGameWheelFront::StaticClass, TEXT("/Script/EOYRacingGame"), TEXT("UEOYRacingGameWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOYRacingGameWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
