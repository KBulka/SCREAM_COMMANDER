// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rts_camera/Public/RTSPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
RTS_CAMERA_API UClass* Z_Construct_UClass_ARTSPawn();
RTS_CAMERA_API UClass* Z_Construct_UClass_ARTSPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_rts_camera();
// End Cross Module References

// Begin Class ARTSPawn Function ReplicateTransform
struct RTSPawn_eventReplicateTransform_Parms
{
	FVector Transform;
};
static FName NAME_ARTSPawn_ReplicateTransform = FName(TEXT("ReplicateTransform"));
void ARTSPawn::ReplicateTransform(FVector Transform)
{
	RTSPawn_eventReplicateTransform_Parms Parms;
	Parms.Transform=Transform;
	ProcessEvent(FindFunctionChecked(NAME_ARTSPawn_ReplicateTransform),&Parms);
}
struct Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSPawn_eventReplicateTransform_Parms, Transform), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "ReplicateTransform", nullptr, nullptr, Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::PropPointers), sizeof(RTSPawn_eventReplicateTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSPawn_eventReplicateTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSPawn_ReplicateTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_ReplicateTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSPawn::execReplicateTransform)
{
	P_GET_STRUCT(FVector,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReplicateTransform_Implementation(Z_Param_Transform);
	P_NATIVE_END;
}
// End Class ARTSPawn Function ReplicateTransform

// Begin Class ARTSPawn Function ResetCamera
struct Z_Construct_UFunction_ARTSPawn_ResetCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_ResetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "ResetCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_ResetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSPawn_ResetCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARTSPawn_ResetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_ResetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSPawn::execResetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCamera();
	P_NATIVE_END;
}
// End Class ARTSPawn Function ResetCamera

// Begin Class ARTSPawn Function RotateCamera
struct Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics
{
	struct RTSPawn_eventRotateCamera_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSPawn_eventRotateCamera_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "RotateCamera", nullptr, nullptr, Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::RTSPawn_eventRotateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::RTSPawn_eventRotateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSPawn_RotateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSPawn::execRotateCamera)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateCamera(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ARTSPawn Function RotateCamera

// Begin Class ARTSPawn Function XMovement
struct Z_Construct_UFunction_ARTSPawn_XMovement_Statics
{
	struct RTSPawn_eventXMovement_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSPawn_eventXMovement_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_XMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "XMovement", nullptr, nullptr, Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::RTSPawn_eventXMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSPawn_XMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::RTSPawn_eventXMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSPawn_XMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_XMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSPawn::execXMovement)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->XMovement(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ARTSPawn Function XMovement

// Begin Class ARTSPawn Function YMovement
struct Z_Construct_UFunction_ARTSPawn_YMovement_Statics
{
	struct RTSPawn_eventYMovement_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSPawn_eventYMovement_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_YMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "YMovement", nullptr, nullptr, Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::RTSPawn_eventYMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSPawn_YMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::RTSPawn_eventYMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSPawn_YMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_YMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSPawn::execYMovement)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->YMovement(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ARTSPawn Function YMovement

// Begin Class ARTSPawn Function Zoom
struct Z_Construct_UFunction_ARTSPawn_Zoom_Statics
{
	struct RTSPawn_eventZoom_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTSPawn_Zoom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSPawn_eventZoom_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_Zoom_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "Zoom", nullptr, nullptr, Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::RTSPawn_eventZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSPawn_Zoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::RTSPawn_eventZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSPawn_Zoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_Zoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSPawn::execZoom)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Zoom(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ARTSPawn Function Zoom

// Begin Class ARTSPawn
void ARTSPawn::StaticRegisterNativesARTSPawn()
{
	UClass* Class = ARTSPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReplicateTransform", &ARTSPawn::execReplicateTransform },
		{ "ResetCamera", &ARTSPawn::execResetCamera },
		{ "RotateCamera", &ARTSPawn::execRotateCamera },
		{ "XMovement", &ARTSPawn::execXMovement },
		{ "YMovement", &ARTSPawn::execYMovement },
		{ "Zoom", &ARTSPawn::execZoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSPawn);
UClass* Z_Construct_UClass_ARTSPawn_NoRegister()
{
	return ARTSPawn::StaticClass();
}
struct Z_Construct_UClass_ARTSPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSPawn.h" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxisAction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisAction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetCameraAction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementZoneInPercent_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Defines the Area in % of the viewport in which the Movement is activated\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Defines the Area in % of the viewport in which the Movement is activated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBoundaries_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Ignores the boundaries, allows movement with the mouse off the viewport\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Ignores the boundaries, allows movement with the mouse off the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateCameraMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// By how much the InputAxis should be multiplied\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "By how much the InputAxis should be multiplied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSmoothness_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Smoothness of the Movement\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Smoothness of the Movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightAdjustment_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// Whether the RTS Camera should always have the same height or adjust to the world\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Whether the RTS Camera should always have the same height or adjust to the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// The channel used for the height adjustment\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "The channel used for the height adjustment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranceFromCamera_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// Whether the camera should be used for the height adjustead\n// instead of the screen center\n" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Whether the camera should be used for the height adjustead\ninstead of the screen center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// The Threshold required to adjust the camera\n" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "The Threshold required to adjust the camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightAdjustmentSmoothness_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// By how much the InputAxis should be multiplied\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "By how much the InputAxis should be multiplied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxisAction_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSmoothness_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// Smoothness of the Rotation\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Smoothness of the Rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAxisAction_MetaData[] = {
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMultiplier_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// By how much the InputAxis should be multiplied\n// Required for high Zoom Speeds\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "By how much the InputAxis should be multiplied\nRequired for high Zoom Speeds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSmoothness_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Smoothness of the Zoom\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Smoothness of the Zoom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpringArm_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Minimum length of the Spring Arm\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Minimum length of the Spring Arm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpringArm_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Maximum length of the Spring Arm\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Maximum length of the Spring Arm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseZoomSteps_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Maximum length of the Spring Arm\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Maximum length of the Spring Arm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSteps_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Maximum length of the Spring Arm\n" },
		{ "EditCondition", "UseZoomSteps" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Maximum length of the Spring Arm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetVector_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetZoom_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetCameraAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementZoneInPercent;
	static void NewProp_IgnoreBoundaries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreBoundaries;
	static void NewProp_ReplicateCameraMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateCameraMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSmoothness;
	static void NewProp_HeightAdjustment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HeightAdjustment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_TranceFromCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TranceFromCamera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAdjustmentSmoothness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationAxisAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSmoothness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomAxisAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSmoothness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpringArm;
	static void NewProp_UseZoomSteps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseZoomSteps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoomSteps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPawn_ReplicateTransform, "ReplicateTransform" }, // 1976866350
		{ &Z_Construct_UFunction_ARTSPawn_ResetCamera, "ResetCamera" }, // 3120264264
		{ &Z_Construct_UFunction_ARTSPawn_RotateCamera, "RotateCamera" }, // 3255681336
		{ &Z_Construct_UFunction_ARTSPawn_XMovement, "XMovement" }, // 3550899020
		{ &Z_Construct_UFunction_ARTSPawn_YMovement, "YMovement" }, // 1502803568
		{ &Z_Construct_UFunction_ARTSPawn_Zoom, "Zoom" }, // 408185148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxisAction = { "XAxisAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, XAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxisAction_MetaData), NewProp_XAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxisAction = { "YAxisAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, YAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisAction_MetaData), NewProp_YAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ResetCameraAction = { "ResetCameraAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, ResetCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetCameraAction_MetaData), NewProp_ResetCameraAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent = { "MovementZoneInPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, MovementZoneInPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementZoneInPercent_MetaData), NewProp_MovementZoneInPercent_MetaData) };
void Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_SetBit(void* Obj)
{
	((ARTSPawn*)Obj)->IgnoreBoundaries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries = { "IgnoreBoundaries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreBoundaries_MetaData), NewProp_IgnoreBoundaries_MetaData) };
void Z_Construct_UClass_ARTSPawn_Statics::NewProp_ReplicateCameraMovement_SetBit(void* Obj)
{
	((ARTSPawn*)Obj)->ReplicateCameraMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ReplicateCameraMovement = { "ReplicateCameraMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_ReplicateCameraMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateCameraMovement_MetaData), NewProp_ReplicateCameraMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier = { "MovementMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, MovementMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMultiplier_MetaData), NewProp_MovementMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness = { "MovementSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, MovementSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSmoothness_MetaData), NewProp_MovementSmoothness_MetaData) };
void Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_SetBit(void* Obj)
{
	((ARTSPawn*)Obj)->HeightAdjustment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment = { "HeightAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightAdjustment_MetaData), NewProp_HeightAdjustment_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_SetBit(void* Obj)
{
	((ARTSPawn*)Obj)->TranceFromCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera = { "TranceFromCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranceFromCamera_MetaData), NewProp_TranceFromCamera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness = { "HeightAdjustmentSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, HeightAdjustmentSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightAdjustmentSmoothness_MetaData), NewProp_HeightAdjustmentSmoothness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, RotationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMultiplier_MetaData), NewProp_RotationMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxisAction = { "RotationAxisAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, RotationAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxisAction_MetaData), NewProp_RotationAxisAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness = { "RotationSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, RotationSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSmoothness_MetaData), NewProp_RotationSmoothness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_DefaultRotation = { "DefaultRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, DefaultRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRotation_MetaData), NewProp_DefaultRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxisAction = { "ZoomAxisAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, ZoomAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomAxisAction_MetaData), NewProp_ZoomAxisAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier = { "ZoomMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, ZoomMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomMultiplier_MetaData), NewProp_ZoomMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness = { "ZoomSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, ZoomSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSmoothness_MetaData), NewProp_ZoomSmoothness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm = { "MinSpringArm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, MinSpringArm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpringArm_MetaData), NewProp_MinSpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm = { "MaxSpringArm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, MaxSpringArm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpringArm_MetaData), NewProp_MaxSpringArm_MetaData) };
void Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_SetBit(void* Obj)
{
	((ARTSPawn*)Obj)->UseZoomSteps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps = { "UseZoomSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseZoomSteps_MetaData), NewProp_UseZoomSteps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps = { "ZoomSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, ZoomSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSteps_MetaData), NewProp_ZoomSteps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TargetVector = { "TargetVector", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, TargetVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetVector_MetaData), NewProp_TargetVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, TargetRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TargetZoom = { "TargetZoom", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSPawn, TargetZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetZoom_MetaData), NewProp_TargetZoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ResetCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ReplicateCameraMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_DefaultRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TargetVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TargetZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARTSPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_rts_camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSPawn_Statics::ClassParams = {
	&ARTSPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARTSPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTSPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARTSPawn()
{
	if (!Z_Registration_Info_UClass_ARTSPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSPawn.OuterSingleton, Z_Construct_UClass_ARTSPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTSPawn.OuterSingleton;
}
template<> RTS_CAMERA_API UClass* StaticClass<ARTSPawn>()
{
	return ARTSPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPawn);
ARTSPawn::~ARTSPawn() {}
// End Class ARTSPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTSPawn, ARTSPawn::StaticClass, TEXT("ARTSPawn"), &Z_Registration_Info_UClass_ARTSPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSPawn), 3201481119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_2376870260(TEXT("/Script/rts_camera"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
