// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformRequestsSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformRequestsSupport() {}
// Cross Module References
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins();
	UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrRequestOutputPins;
	static UEnum* EOvrRequestOutputPins_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOvrRequestOutputPins.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOvrRequestOutputPins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrRequestOutputPins"));
		}
		return Z_Registration_Info_UEnum_EOvrRequestOutputPins.OuterSingleton;
	}
	template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrRequestOutputPins>()
	{
		return EOvrRequestOutputPins_StaticEnum();
	}
	struct Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::Enumerators[] = {
		{ "EOvrRequestOutputPins::Then", (int64)EOvrRequestOutputPins::Then },
		{ "EOvrRequestOutputPins::Success", (int64)EOvrRequestOutputPins::Success },
		{ "EOvrRequestOutputPins::Failure", (int64)EOvrRequestOutputPins::Failure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Requests output pins. */" },
		{ "Failure.Comment", "/** Failed request.  Check ErrorMsg. */" },
		{ "Failure.Name", "EOvrRequestOutputPins::Failure" },
		{ "Failure.ToolTip", "Failed request.  Check ErrorMsg." },
		{ "ModuleRelativePath", "Public/OVRPlatformRequestsSupport.h" },
		{ "Success.Comment", "/** Successful request. */" },
		{ "Success.Name", "EOvrRequestOutputPins::Success" },
		{ "Success.ToolTip", "Successful request." },
		{ "Then.Comment", "/** Always executes immediately, before the request is sent. */" },
		{ "Then.Name", "EOvrRequestOutputPins::Then" },
		{ "Then.ToolTip", "Always executes immediately, before the request is sent." },
		{ "ToolTip", "Requests output pins." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		"EOvrRequestOutputPins",
		"EOvrRequestOutputPins",
		Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins()
	{
		if (!Z_Registration_Info_UEnum_EOvrRequestOutputPins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrRequestOutputPins.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrRequestOutputPins_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOvrRequestOutputPins.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPageRequestOutputPins;
	static UEnum* EOvrPageRequestOutputPins_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOvrPageRequestOutputPins.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOvrPageRequestOutputPins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPageRequestOutputPins"));
		}
		return Z_Registration_Info_UEnum_EOvrPageRequestOutputPins.OuterSingleton;
	}
	template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPageRequestOutputPins>()
	{
		return EOvrPageRequestOutputPins_StaticEnum();
	}
	struct Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::Enumerators[] = {
		{ "EOvrPageRequestOutputPins::Then", (int64)EOvrPageRequestOutputPins::Then },
		{ "EOvrPageRequestOutputPins::PageReady", (int64)EOvrPageRequestOutputPins::PageReady },
		{ "EOvrPageRequestOutputPins::NoMorePages", (int64)EOvrPageRequestOutputPins::NoMorePages },
		{ "EOvrPageRequestOutputPins::Failure", (int64)EOvrPageRequestOutputPins::Failure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Paged array requests output pins. */" },
		{ "Failure.Comment", "/** Failed request.  Check ErrorMsg. */" },
		{ "Failure.Name", "EOvrPageRequestOutputPins::Failure" },
		{ "Failure.ToolTip", "Failed request.  Check ErrorMsg." },
		{ "ModuleRelativePath", "Public/OVRPlatformRequestsSupport.h" },
		{ "NoMorePages.Comment", "/** We attempted to fetch beyond the first or last pages. */" },
		{ "NoMorePages.Name", "EOvrPageRequestOutputPins::NoMorePages" },
		{ "NoMorePages.ToolTip", "We attempted to fetch beyond the first or last pages." },
		{ "PageReady.Comment", "/** The page content is available in the output array. */" },
		{ "PageReady.Name", "EOvrPageRequestOutputPins::PageReady" },
		{ "PageReady.ToolTip", "The page content is available in the output array." },
		{ "Then.Comment", "/** Always executes immediately when the node is entered, before any page request is sent. */" },
		{ "Then.Name", "EOvrPageRequestOutputPins::Then" },
		{ "Then.ToolTip", "Always executes immediately when the node is entered, before any page request is sent." },
		{ "ToolTip", "Paged array requests output pins." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		"EOvrPageRequestOutputPins",
		"EOvrPageRequestOutputPins",
		Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins()
	{
		if (!Z_Registration_Info_UEnum_EOvrPageRequestOutputPins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPageRequestOutputPins.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOvrPageRequestOutputPins.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformRequestsSupport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformRequestsSupport_h_Statics::EnumInfo[] = {
		{ EOvrRequestOutputPins_StaticEnum, TEXT("EOvrRequestOutputPins"), &Z_Registration_Info_UEnum_EOvrRequestOutputPins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3276987296U) },
		{ EOvrPageRequestOutputPins_StaticEnum, TEXT("EOvrPageRequestOutputPins"), &Z_Registration_Info_UEnum_EOvrPageRequestOutputPins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2231247403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformRequestsSupport_h_1579455670(TEXT("/Script/OVRPlatform"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformRequestsSupport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformRequestsSupport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
