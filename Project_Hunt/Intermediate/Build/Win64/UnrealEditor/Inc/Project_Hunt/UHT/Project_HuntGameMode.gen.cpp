// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Hunt/Project_HuntGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_HuntGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT_HUNT_API UClass* Z_Construct_UClass_AProject_HuntGameMode();
PROJECT_HUNT_API UClass* Z_Construct_UClass_AProject_HuntGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Hunt();
// End Cross Module References

// Begin Class AProject_HuntGameMode
void AProject_HuntGameMode::StaticRegisterNativesAProject_HuntGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_HuntGameMode);
UClass* Z_Construct_UClass_AProject_HuntGameMode_NoRegister()
{
	return AProject_HuntGameMode::StaticClass();
}
struct Z_Construct_UClass_AProject_HuntGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_HuntGameMode.h" },
		{ "ModuleRelativePath", "Project_HuntGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_HuntGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject_HuntGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Hunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_HuntGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_HuntGameMode_Statics::ClassParams = {
	&AProject_HuntGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_HuntGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_HuntGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_HuntGameMode()
{
	if (!Z_Registration_Info_UClass_AProject_HuntGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_HuntGameMode.OuterSingleton, Z_Construct_UClass_AProject_HuntGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_HuntGameMode.OuterSingleton;
}
template<> PROJECT_HUNT_API UClass* StaticClass<AProject_HuntGameMode>()
{
	return AProject_HuntGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_HuntGameMode);
AProject_HuntGameMode::~AProject_HuntGameMode() {}
// End Class AProject_HuntGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_joe19_Documents_GitHub_Project_Hunt_Project_Hunt_Source_Project_Hunt_Project_HuntGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_HuntGameMode, AProject_HuntGameMode::StaticClass, TEXT("AProject_HuntGameMode"), &Z_Registration_Info_UClass_AProject_HuntGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_HuntGameMode), 327413298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_Documents_GitHub_Project_Hunt_Project_Hunt_Source_Project_Hunt_Project_HuntGameMode_h_2547831096(TEXT("/Script/Project_Hunt"),
	Z_CompiledInDeferFile_FID_Users_joe19_Documents_GitHub_Project_Hunt_Project_Hunt_Source_Project_Hunt_Project_HuntGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_Documents_GitHub_Project_Hunt_Project_Hunt_Source_Project_Hunt_Project_HuntGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
