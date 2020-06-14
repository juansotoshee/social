// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social01/Public/TextFileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextFileManager() {}
// Cross Module References
	SOCIAL01_API UClass* Z_Construct_UClass_UTextFileManager_NoRegister();
	SOCIAL01_API UClass* Z_Construct_UClass_UTextFileManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Social01();
// End Cross Module References
	DEFINE_FUNCTION(UTextFileManager::execSaveArrayText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SavedDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_TARRAY(FString,Z_Param_SaveText);
		P_GET_UBOOL(Z_Param_AllowOverWriting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTextFileManager::SaveArrayText(Z_Param_SavedDirectory,Z_Param_Filename,Z_Param_SaveText,Z_Param_AllowOverWriting);
		P_NATIVE_END;
	}
	void UTextFileManager::StaticRegisterNativesUTextFileManager()
	{
		UClass* Class = UTextFileManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveArrayText", &UTextFileManager::execSaveArrayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics
	{
		struct TextFileManager_eventSaveArrayText_Parms
		{
			FString SavedDirectory;
			FString Filename;
			TArray<FString> SaveText;
			bool AllowOverWriting;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextFileManager_eventSaveArrayText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextFileManager_eventSaveArrayText_Parms), &Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((TextFileManager_eventSaveArrayText_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextFileManager_eventSaveArrayText_Parms), &Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventSaveArrayText_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventSaveArrayText_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_SavedDirectory = { "SavedDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventSaveArrayText_Parms, SavedDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_AllowOverWriting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_SaveText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_SavedDirectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Keywords", "Save" },
		{ "ModuleRelativePath", "Public/TextFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextFileManager, nullptr, "SaveArrayText", nullptr, nullptr, sizeof(TextFileManager_eventSaveArrayText_Parms), Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextFileManager_SaveArrayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextFileManager_NoRegister()
	{
		return UTextFileManager::StaticClass();
	}
	struct Z_Construct_UClass_UTextFileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextFileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Social01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextFileManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextFileManager_SaveArrayText, "SaveArrayText" }, // 2128742623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextFileManager.h" },
		{ "ModuleRelativePath", "Public/TextFileManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextFileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextFileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextFileManager_Statics::ClassParams = {
		&UTextFileManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextFileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextFileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextFileManager, 2689488509);
	template<> SOCIAL01_API UClass* StaticClass<UTextFileManager>()
	{
		return UTextFileManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextFileManager(Z_Construct_UClass_UTextFileManager, &UTextFileManager::StaticClass, TEXT("/Script/Social01"), TEXT("UTextFileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextFileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
