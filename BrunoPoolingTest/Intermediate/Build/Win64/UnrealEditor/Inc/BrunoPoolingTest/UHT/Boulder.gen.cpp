// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrunoPoolingTest/Boulder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoulder() {}

// Begin Cross Module References
BRUNOPOOLINGTEST_API UClass* Z_Construct_UClass_ABoulder();
BRUNOPOOLINGTEST_API UClass* Z_Construct_UClass_ABoulder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BrunoPoolingTest();
// End Cross Module References

// Begin Class ABoulder
void ABoulder::StaticRegisterNativesABoulder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoulder);
UClass* Z_Construct_UClass_ABoulder_NoRegister()
{
	return ABoulder::StaticClass();
}
struct Z_Construct_UClass_ABoulder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Boulder.h" },
		{ "ModuleRelativePath", "Boulder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoulder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABoulder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BrunoPoolingTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoulder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoulder_Statics::ClassParams = {
	&ABoulder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoulder_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoulder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoulder()
{
	if (!Z_Registration_Info_UClass_ABoulder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoulder.OuterSingleton, Z_Construct_UClass_ABoulder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoulder.OuterSingleton;
}
template<> BRUNOPOOLINGTEST_API UClass* StaticClass<ABoulder>()
{
	return ABoulder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoulder);
ABoulder::~ABoulder() {}
// End Class ABoulder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_PoolingTest_BrunoPoolingTest_Source_BrunoPoolingTest_Boulder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoulder, ABoulder::StaticClass, TEXT("ABoulder"), &Z_Registration_Info_UClass_ABoulder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoulder), 3104623006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_PoolingTest_BrunoPoolingTest_Source_BrunoPoolingTest_Boulder_h_3627840202(TEXT("/Script/BrunoPoolingTest"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_PoolingTest_BrunoPoolingTest_Source_BrunoPoolingTest_Boulder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_PoolingTest_BrunoPoolingTest_Source_BrunoPoolingTest_Boulder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
