// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformTypes() {}
// Cross Module References
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrId();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrVariant();
	UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrId;
class UScriptStruct* FOvrId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrId, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrId"));
	}
	return Z_Registration_Info_UScriptStruct_OvrId.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrId>()
{
	return FOvrId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|CustomModels|ID" },
		{ "Comment", "/** UE type corresponding to OVR Platform ovrID */" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
		{ "ToolTip", "UE type corresponding to OVR Platform ovrID" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrId, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrId",
		Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers),
		sizeof(FOvrId),
		alignof(FOvrId),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrId_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrId()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrId.InnerSingleton, Z_Construct_UScriptStruct_FOvrId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrVariant;
class UScriptStruct* FOvrVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrVariant, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrVariant"));
	}
	return Z_Registration_Info_UScriptStruct_OvrVariant.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrVariant>()
{
	return FOvrVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|CustomModels|Variant" },
		{ "Comment", "/** UE type corresponding to OVR Platform ovrKeyValuePair */" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
		{ "ToolTip", "UE type corresponding to OVR Platform ovrKeyValuePair" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrVariant>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, Type), Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_MetaData) }; // 1395201135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "EditCondition", "Type == EOvrVariantType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue_MetaData), Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "EditCondition", "Type == EOvrVariantType::Int" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue_MetaData), Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "EditCondition", "Type == EOvrVariantType::Double" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue_MetaData), Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrVariant",
		Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers),
		sizeof(FOvrVariant),
		alignof(FOvrVariant),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrVariant_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrVariant.InnerSingleton, Z_Construct_UScriptStruct_FOvrVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrVariant.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics::ScriptStructInfo[] = {
		{ FOvrId::StaticStruct, Z_Construct_UScriptStruct_FOvrId_Statics::NewStructOps, TEXT("OvrId"), &Z_Registration_Info_UScriptStruct_OvrId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrId), 1486140189U) },
		{ FOvrVariant::StaticStruct, Z_Construct_UScriptStruct_FOvrVariant_Statics::NewStructOps, TEXT("OvrVariant"), &Z_Registration_Info_UScriptStruct_OvrVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrVariant), 2137730452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_3103843079(TEXT("/Script/OVRPlatform"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
