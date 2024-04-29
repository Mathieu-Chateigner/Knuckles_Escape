// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformOptions.h"
#include "OVRPlatform/Public/OVRPlatformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate();
	OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAbuseReportOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrApplicationOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAvatarEditorOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengeOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrGroupPresenceOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrId();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrInviteOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrNetSyncOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrRichPresenceOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrRosterOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrUserOptions();
	OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrVoipOptions();
	UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions;
class UScriptStruct* FOvrAbuseReportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrAbuseReportOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrAbuseReportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrAbuseReportOptions>()
{
	return FOvrAbuseReportOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreventPeopleChooser_MetaData[];
#endif
		static void NewProp_PreventPeopleChooser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreventPeopleChooser;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReportType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|AbuseReport" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrAbuseReportOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AbuseReport|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_SetBit(void* Obj)
	{
		((FOvrAbuseReportOptions*)Obj)->PreventPeopleChooser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser = { "PreventPeopleChooser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrAbuseReportOptions), &Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_MetaData), Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AbuseReport|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType = { "ReportType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAbuseReportOptions, ReportType), Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_MetaData), Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_MetaData) }; // 3838170149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrAbuseReportOptions",
		Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers),
		sizeof(FOvrAbuseReportOptions),
		alignof(FOvrAbuseReportOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrAbuseReportOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions;
class UScriptStruct* FOvrAdvancedAbuseReportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrAdvancedAbuseReportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrAdvancedAbuseReportOptions>()
{
	return FOvrAdvancedAbuseReportOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperDefinedContext_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperDefinedContext_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperDefinedContext_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeveloperDefinedContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReportType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedUsers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedUsers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuggestedUsers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrAdvancedAbuseReportOptions>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_ValueProp = { "DeveloperDefinedContext", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_Key_KeyProp = { "DeveloperDefinedContext_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext = { "DeveloperDefinedContext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, DeveloperDefinedContext), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_MetaData), Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
		{ "Comment", "/** If report_type is content, a string representing the type of content being reported. This should correspond to the object_type string used in the UI */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "If report_type is content, a string representing the type of content being reported. This should correspond to the object_type string used in the UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, ObjectType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType_MetaData), Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType = { "ReportType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, ReportType), Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_MetaData), Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_MetaData) }; // 3838170149
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_Inner = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 1486140189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, SuggestedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_MetaData), Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_MetaData) }; // 1486140189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrAdvancedAbuseReportOptions",
		Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers),
		sizeof(FOvrAdvancedAbuseReportOptions),
		alignof(FOvrAdvancedAbuseReportOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrApplicationOptions;
class UScriptStruct* FOvrApplicationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrApplicationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrApplicationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrApplicationOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrApplicationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrApplicationOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrApplicationOptions>()
{
	return FOvrApplicationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationApiName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationApiName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbySessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbySessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchSessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchSessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Application" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrApplicationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
		{ "Comment", "/**\n     * A message to be passed to a launched app, which can be retrieved\n     * with field FOvrLaunchDetails::DeeplinkMessage\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "A message to be passed to a launched app, which can be retrieved\nwith field FOvrLaunchDetails::DeeplinkMessage" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage = { "DeeplinkMessage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, DeeplinkMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage_MetaData), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
		{ "Comment", "/**\n     * If provided, the intended destination to be passed to the launched\n     * app\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "If provided, the intended destination to be passed to the launched\napp" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName = { "DestinationApiName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, DestinationApiName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName_MetaData), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
		{ "Comment", "/**\n     * If provided, the intended lobby where the launched app should take\n     * the user. All users with the same lobby_session_id should end up grouped\n     * together in the launched app.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "If provided, the intended lobby where the launched app should take\nthe user. All users with the same lobby_session_id should end up grouped\ntogether in the launched app." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId = { "LobbySessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, LobbySessionId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId_MetaData), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
		{ "Comment", "/**\n     * If provided, the intended instance of the destination that a user\n     * should be launched into\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "If provided, the intended instance of the destination that a user\nshould be launched into" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId = { "MatchSessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, MatchSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId_MetaData), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
		{ "Comment", "/**\n     * [Deprecated]If provided, the intended room where the launched app\n     * should take the user (all users heading to the same place should have the\n     * same value). A room_id of 0 is INVALID.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "[Deprecated]If provided, the intended room where the launched app\nshould take the user (all users heading to the same place should have the\nsame value). A room_id of 0 is INVALID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, RoomId), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId_MetaData), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId_MetaData) }; // 1486140189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrApplicationOptions",
		Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers),
		sizeof(FOvrApplicationOptions),
		alignof(FOvrApplicationOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrApplicationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrApplicationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrApplicationOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrApplicationOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions;
class UScriptStruct* FOvrAvatarEditorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrAvatarEditorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrAvatarEditorOptions>()
{
	return FOvrAvatarEditorOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|AvatarEditor" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrAvatarEditorOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AvatarEditor|Option" },
		{ "Comment", "/** Optional: Override for where the request is coming from. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Optional: Override for where the request is coming from." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride = { "SourceOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAvatarEditorOptions, SourceOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride_MetaData), Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrAvatarEditorOptions",
		Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers),
		sizeof(FOvrAvatarEditorOptions),
		alignof(FOvrAvatarEditorOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrAvatarEditorOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrChallengeOptions;
class UScriptStruct* FOvrChallengeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrChallengeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrChallengeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrChallengeOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrChallengeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrChallengeOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrChallengeOptions>()
{
	return FOvrChallengeOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeActiveChallenges_MetaData[];
#endif
		static void NewProp_IncludeActiveChallenges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeActiveChallenges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeFutureChallenges_MetaData[];
#endif
		static void NewProp_IncludeFutureChallenges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeFutureChallenges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludePastChallenges_MetaData[];
#endif
		static void NewProp_IncludePastChallenges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludePastChallenges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewerFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewerFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewerFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Challenge" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrChallengeOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_SetBit(void* Obj)
	{
		((FOvrChallengeOptions*)Obj)->IncludeActiveChallenges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges = { "IncludeActiveChallenges", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrChallengeOptions), &Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_SetBit(void* Obj)
	{
		((FOvrChallengeOptions*)Obj)->IncludeFutureChallenges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges = { "IncludeFutureChallenges", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrChallengeOptions), &Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_SetBit(void* Obj)
	{
		((FOvrChallengeOptions*)Obj)->IncludePastChallenges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges = { "IncludePastChallenges", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrChallengeOptions), &Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "Comment", "/** Optional: Only find challenges belonging to this leaderboard. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Optional: Only find challenges belonging to this leaderboard." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter = { "ViewerFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, ViewerFilter), Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_MetaData) }; // 4096897729
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, Visibility), Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_MetaData), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_MetaData) }; // 2364171270
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrChallengeOptions",
		Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers),
		sizeof(FOvrChallengeOptions),
		alignof(FOvrChallengeOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengeOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrChallengeOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrChallengeOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrChallengeOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions;
class UScriptStruct* FOvrGroupPresenceOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrGroupPresenceOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrGroupPresenceOptions>()
{
	return FOvrGroupPresenceOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessageOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessageOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationApiName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationApiName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[];
#endif
		static void NewProp_IsJoinable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbySessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbySessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchSessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchSessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|GroupPresence" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrGroupPresenceOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
		{ "Comment", "/**\n     * Use FOvrGroupPresenceOptions::LobbySessionId or FOvrGroupPresenceOptions::MatchSessionId to specify the session. Use the deeplink message override for\n     * any additional data in whatever format you wish to aid in bringing users together. If not specified, the deeplink_message for the user will default to the one on the\n     * destination.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Use FOvrGroupPresenceOptions::LobbySessionId or FOvrGroupPresenceOptions::MatchSessionId to specify the session. Use the deeplink message override for\nany additional data in whatever format you wish to aid in bringing users together. If not specified, the deeplink_message for the user will default to the one on the\ndestination." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride = { "DeeplinkMessageOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, DeeplinkMessageOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride_MetaData), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
		{ "Comment", "/** This the unique API Name that refers to an in-app destination */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "This the unique API Name that refers to an in-app destination" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName = { "DestinationApiName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, DestinationApiName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName_MetaData), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
		{ "Comment", "/**\n     * Set whether or not the person is shown as joinable or not to others.  A user that is joinable can invite others to join them. Set this to false if other\n     * users would not be able to join this user. For example: the current session is full, or only the host can invite others and the current user is not the host.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Set whether or not the person is shown as joinable or not to others.  A user that is joinable can invite others to join them. Set this to false if other\nusers would not be able to join this user. For example: the current session is full, or only the host can invite others and the current user is not the host." },
	};
#endif
	void Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_SetBit(void* Obj)
	{
		((FOvrGroupPresenceOptions*)Obj)->IsJoinable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrGroupPresenceOptions), &Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_MetaData), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
		{ "Comment", "/**\n     * This is a session that represents a closer group/squad/party of users. It is expected that all users with the same lobby session id can see or\n     * hear each other. Users with the same lobby session id in their group presence will show up in the roster and will show up as \"Recently Played With\"\n     * for future invites if they aren't already Oculus friends. This must be set in addition to is_joinable being true for a user to use invites.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "This is a session that represents a closer group/squad/party of users. It is expected that all users with the same lobby session id can see or\nhear each other. Users with the same lobby session id in their group presence will show up in the roster and will show up as \"Recently Played With\"\nfor future invites if they aren't already Oculus friends. This must be set in addition to is_joinable being true for a user to use invites." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId = { "LobbySessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, LobbySessionId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId_MetaData), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
		{ "Comment", "/**\n     * This is a session that represents all the users that are playing a specific instance of a map, game mode, round, etc. This\n     * can include users from multiple different lobbies that joined together and the users may or may not remain together after the match is over.\n     * Users with the same match session id in their group presence will not show up in the Roster, but will show up as \"Recently Played with\" for future invites.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "This is a session that represents all the users that are playing a specific instance of a map, game mode, round, etc. This\ncan include users from multiple different lobbies that joined together and the users may or may not remain together after the match is over.\nUsers with the same match session id in their group presence will not show up in the Roster, but will show up as \"Recently Played with\" for future invites." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId = { "MatchSessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, MatchSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId_MetaData), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrGroupPresenceOptions",
		Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers),
		sizeof(FOvrGroupPresenceOptions),
		alignof(FOvrGroupPresenceOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrGroupPresenceOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrInviteOptions;
class UScriptStruct* FOvrInviteOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrInviteOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrInviteOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrInviteOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrInviteOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrInviteOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrInviteOptions>()
{
	return FOvrInviteOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrInviteOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedUsers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedUsers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuggestedUsers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Invite" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrInviteOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_Inner = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 1486140189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Invite|Option" },
		{ "Comment", "/** Passing in these users will add them to the invitable users list */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Passing in these users will add them to the invitable users list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrInviteOptions, SuggestedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_MetaData), Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_MetaData) }; // 1486140189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrInviteOptions",
		Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers),
		sizeof(FOvrInviteOptions),
		alignof(FOvrInviteOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrInviteOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrInviteOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrInviteOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrInviteOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions;
class UScriptStruct* FOvrMultiplayerErrorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrMultiplayerErrorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrMultiplayerErrorOptions>()
{
	return FOvrMultiplayerErrorOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorKey_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorKey_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|MultiplayerError" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrMultiplayerErrorOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_MetaData[] = {
		{ "Category", "OvrPlatform|Options|MultiplayerError|Option" },
		{ "Comment", "/** Key associated with the predefined error message to be shown to users. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Key associated with the predefined error message to be shown to users." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey = { "ErrorKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrMultiplayerErrorOptions, ErrorKey), Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_MetaData), Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_MetaData) }; // 2611589755
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrMultiplayerErrorOptions",
		Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers),
		sizeof(FOvrMultiplayerErrorOptions),
		alignof(FOvrMultiplayerErrorOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrNetSyncOptions;
class UScriptStruct* FOvrNetSyncOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrNetSyncOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrNetSyncOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrNetSyncOptions>()
{
	return FOvrNetSyncOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoipGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoipGroup;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VoipStreamDefault_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoipStreamDefault_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VoipStreamDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|NetSync" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrNetSyncOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup_MetaData[] = {
		{ "Category", "OvrPlatform|Options|NetSync|Option" },
		{ "Comment", "/**\n     * If provided, immediately set the voip_group to this value upon\n     * connection\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "If provided, immediately set the voip_group to this value upon\nconnection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup = { "VoipGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrNetSyncOptions, VoipGroup), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup_MetaData), Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_MetaData[] = {
		{ "Category", "OvrPlatform|Options|NetSync|Option" },
		{ "Comment", "/**\n     * When a new remote voip user connects, default that connection to this\n     * stream type by default.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "When a new remote voip user connects, default that connection to this\nstream type by default." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault = { "VoipStreamDefault", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrNetSyncOptions, VoipStreamDefault), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_MetaData), Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_MetaData) }; // 3376788165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|NetSync|Option" },
		{ "Comment", "/** Unique identifier within the current application grouping */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Unique identifier within the current application grouping" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId = { "ZoneId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrNetSyncOptions, ZoneId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId_MetaData), Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrNetSyncOptions",
		Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers),
		sizeof(FOvrNetSyncOptions),
		alignof(FOvrNetSyncOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrNetSyncOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions;
class UScriptStruct* FOvrRichPresenceOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrRichPresenceOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrRichPresenceOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrRichPresenceOptions>()
{
	return FOvrRichPresenceOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessageOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessageOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[];
#endif
		static void NewProp_IsJoinable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|RichPresence" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrRichPresenceOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|RichPresence|Option" },
		{ "Comment", "/** DEPRECATED. Use FOvrGroupPresenceOptions::DestinationApiName */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FOvrGroupPresenceOptions::DestinationApiName" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "DEPRECATED. Use FOvrGroupPresenceOptions::DestinationApiName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName = { "ApiName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrRichPresenceOptions, ApiName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName_MetaData), Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride_MetaData[] = {
		{ "Category", "OvrPlatform|Options|RichPresence|Option" },
		{ "Comment", "/** DEPRECATED. Use FOvrGroupPresenceOptions::DeeplinkMessageOverride */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FOvrGroupPresenceOptions::DeeplinkMessageOverride" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "DEPRECATED. Use FOvrGroupPresenceOptions::DeeplinkMessageOverride" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride = { "DeeplinkMessageOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrRichPresenceOptions, DeeplinkMessageOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride_MetaData), Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_MetaData[] = {
		{ "Category", "OvrPlatform|Options|RichPresence|Option" },
		{ "Comment", "/** DEPRECATED. Use FOvrGroupPresenceOptions::IsJoinable */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FOvrGroupPresenceOptions::IsJoinable" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "DEPRECATED. Use FOvrGroupPresenceOptions::IsJoinable" },
	};
#endif
	void Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_SetBit(void* Obj)
	{
		((FOvrRichPresenceOptions*)Obj)->IsJoinable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrRichPresenceOptions), &Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_MetaData), Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrRichPresenceOptions",
		Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers),
		sizeof(FOvrRichPresenceOptions),
		alignof(FOvrRichPresenceOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrRichPresenceOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrRosterOptions;
class UScriptStruct* FOvrRosterOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrRosterOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrRosterOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrRosterOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrRosterOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrRosterOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrRosterOptions>()
{
	return FOvrRosterOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrRosterOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedUsers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedUsers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuggestedUsers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Roster" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrRosterOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_Inner = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 1486140189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Roster|Option" },
		{ "Comment", "/**\n     * Passing in these users will add them to the invitable users list. From the roster panel, the user can open the invite list,\n     * where the suggested users will be added.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Passing in these users will add them to the invitable users list. From the roster panel, the user can open the invite list,\nwhere the suggested users will be added." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrRosterOptions, SuggestedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_MetaData), Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_MetaData) }; // 1486140189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrRosterOptions",
		Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers),
		sizeof(FOvrRosterOptions),
		alignof(FOvrRosterOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrRosterOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrRosterOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrRosterOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrRosterOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrUserOptions;
class UScriptStruct* FOvrUserOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrUserOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrUserOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrUserOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrUserOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrUserOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrUserOptions>()
{
	return FOvrUserOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrUserOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxUsers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUsers;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ServiceProviders_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ServiceProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServiceProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ServiceProviders;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeWindow_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindow_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeWindow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrUserOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|User" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrUserOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|User|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers = { "MaxUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrUserOptions, MaxUsers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers_MetaData), Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner = { "ServiceProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider, METADATA_PARAMS(0, nullptr) }; // 1139256461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_MetaData[] = {
		{ "Category", "OvrPlatform|Options|User|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders = { "ServiceProviders", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrUserOptions, ServiceProviders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_MetaData), Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_MetaData) }; // 1139256461
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_MetaData[] = {
		{ "Category", "OvrPlatform|Options|User|Option" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow = { "TimeWindow", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrUserOptions, TimeWindow), Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_MetaData), Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_MetaData) }; // 1757290216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrUserOptions",
		Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers),
		sizeof(FOvrUserOptions),
		alignof(FOvrUserOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrUserOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrUserOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrUserOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrUserOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrUserOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrUserOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrVoipOptions;
class UScriptStruct* FOvrVoipOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrVoipOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrVoipOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrVoipOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrVoipOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrVoipOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrVoipOptions>()
{
	return FOvrVoipOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOvrVoipOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitrateForNewConnections_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitrateForNewConnections_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BitrateForNewConnections;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CreateNewConnectionUseDtx_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateNewConnectionUseDtx_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CreateNewConnectionUseDtx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Voip" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrVoipOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Voip|Option" },
		{ "Comment", "/**\n     * Sets the maximum average bitrate the audio codec should use. Higher bitrates\n     * will increase audio quality at the expense of increased network usage. Use a lower\n     * bitrate if you think the quality is good but the network usage is too much. Use a\n     * higher bitrate if you think the quality is bad and you can afford to have a large\n     * streaming bitrate.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Sets the maximum average bitrate the audio codec should use. Higher bitrates\nwill increase audio quality at the expense of increased network usage. Use a lower\nbitrate if you think the quality is good but the network usage is too much. Use a\nhigher bitrate if you think the quality is bad and you can afford to have a large\nstreaming bitrate." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections = { "BitrateForNewConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVoipOptions, BitrateForNewConnections), Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_MetaData), Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_MetaData) }; // 1196634490
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Voip|Option" },
		{ "Comment", "/**\n     * Set the opus codec to use discontinous transmission (DTX). DTX only transmits\n     * data when a person is speaking. Setting this to true takes advantage of the fact\n     * that in a two-way converstation each individual speaks for less than half the time.\n     * Enabling DTX will conserve battery power and reduce transmission rate when a pause\n     * in the voice chat is detected.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
		{ "ToolTip", "Set the opus codec to use discontinous transmission (DTX). DTX only transmits\ndata when a person is speaking. Setting this to true takes advantage of the fact\nthat in a two-way converstation each individual speaks for less than half the time.\nEnabling DTX will conserve battery power and reduce transmission rate when a pause\nin the voice chat is detected." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx = { "CreateNewConnectionUseDtx", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVoipOptions, CreateNewConnectionUseDtx), Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_MetaData), Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_MetaData) }; // 403102528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
		nullptr,
		&NewStructOps,
		"OvrVoipOptions",
		Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers),
		sizeof(FOvrVoipOptions),
		alignof(FOvrVoipOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOvrVoipOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OvrVoipOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrVoipOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OvrVoipOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics::ScriptStructInfo[] = {
		{ FOvrAbuseReportOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewStructOps, TEXT("OvrAbuseReportOptions"), &Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrAbuseReportOptions), 1806460820U) },
		{ FOvrAdvancedAbuseReportOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewStructOps, TEXT("OvrAdvancedAbuseReportOptions"), &Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrAdvancedAbuseReportOptions), 709627819U) },
		{ FOvrApplicationOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewStructOps, TEXT("OvrApplicationOptions"), &Z_Registration_Info_UScriptStruct_OvrApplicationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrApplicationOptions), 3986119237U) },
		{ FOvrAvatarEditorOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewStructOps, TEXT("OvrAvatarEditorOptions"), &Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrAvatarEditorOptions), 1821452396U) },
		{ FOvrChallengeOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewStructOps, TEXT("OvrChallengeOptions"), &Z_Registration_Info_UScriptStruct_OvrChallengeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrChallengeOptions), 1612369313U) },
		{ FOvrGroupPresenceOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewStructOps, TEXT("OvrGroupPresenceOptions"), &Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrGroupPresenceOptions), 3002339038U) },
		{ FOvrInviteOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewStructOps, TEXT("OvrInviteOptions"), &Z_Registration_Info_UScriptStruct_OvrInviteOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrInviteOptions), 2007327145U) },
		{ FOvrMultiplayerErrorOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewStructOps, TEXT("OvrMultiplayerErrorOptions"), &Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrMultiplayerErrorOptions), 789769650U) },
		{ FOvrNetSyncOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewStructOps, TEXT("OvrNetSyncOptions"), &Z_Registration_Info_UScriptStruct_OvrNetSyncOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrNetSyncOptions), 2961854134U) },
		{ FOvrRichPresenceOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewStructOps, TEXT("OvrRichPresenceOptions"), &Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrRichPresenceOptions), 3689340698U) },
		{ FOvrRosterOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewStructOps, TEXT("OvrRosterOptions"), &Z_Registration_Info_UScriptStruct_OvrRosterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrRosterOptions), 756770234U) },
		{ FOvrUserOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewStructOps, TEXT("OvrUserOptions"), &Z_Registration_Info_UScriptStruct_OvrUserOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrUserOptions), 11049269U) },
		{ FOvrVoipOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewStructOps, TEXT("OvrVoipOptions"), &Z_Registration_Info_UScriptStruct_OvrVoipOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrVoipOptions), 3249240462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_1225158421(TEXT("/Script/OVRPlatform"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
