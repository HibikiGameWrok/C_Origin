// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Origin/C_OriginGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_OriginGameModeBase() {}
// Cross Module References
	C_ORIGIN_API UClass* Z_Construct_UClass_AC_OriginGameModeBase_NoRegister();
	C_ORIGIN_API UClass* Z_Construct_UClass_AC_OriginGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_C_Origin();
// End Cross Module References
	void AC_OriginGameModeBase::StaticRegisterNativesAC_OriginGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AC_OriginGameModeBase_NoRegister()
	{
		return AC_OriginGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AC_OriginGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_OriginGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_OriginGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "C_OriginGameModeBase.h" },
		{ "ModuleRelativePath", "C_OriginGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_OriginGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_OriginGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_OriginGameModeBase_Statics::ClassParams = {
		&AC_OriginGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_OriginGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AC_OriginGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_OriginGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_OriginGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_OriginGameModeBase, 3397851992);
	template<> C_ORIGIN_API UClass* StaticClass<AC_OriginGameModeBase>()
	{
		return AC_OriginGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_OriginGameModeBase(Z_Construct_UClass_AC_OriginGameModeBase, &AC_OriginGameModeBase::StaticClass, TEXT("/Script/C_Origin"), TEXT("AC_OriginGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_OriginGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
