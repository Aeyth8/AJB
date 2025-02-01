#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Landscape

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeComponentScreenSizeToUseSubSections final
{
public:
	float                                         InComponentScreenSizeToUseSubSections;             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeComponentScreenSizeToUseSubSections");
static_assert(sizeof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections) == 0x000004, "Wrong size on LandscapeProxy_ChangeComponentScreenSizeToUseSubSections");
static_assert(offsetof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections, InComponentScreenSizeToUseSubSections) == 0x000000, "Member 'LandscapeProxy_ChangeComponentScreenSizeToUseSubSections::InComponentScreenSizeToUseSubSections' has a wrong offset!");

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeLODDistanceFactor final
{
public:
	float                                         InLODDistanceFactor;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(sizeof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong size on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(offsetof(LandscapeProxy_ChangeLODDistanceFactor, InLODDistanceFactor) == 0x000000, "Member 'LandscapeProxy_ChangeLODDistanceFactor::InLODDistanceFactor' has a wrong offset!");

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeTessellationComponentScreenSize final
{
public:
	float                                         InTessellationComponentScreenSize;                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeTessellationComponentScreenSize) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeTessellationComponentScreenSize");
static_assert(sizeof(LandscapeProxy_ChangeTessellationComponentScreenSize) == 0x000004, "Wrong size on LandscapeProxy_ChangeTessellationComponentScreenSize");
static_assert(offsetof(LandscapeProxy_ChangeTessellationComponentScreenSize, InTessellationComponentScreenSize) == 0x000000, "Member 'LandscapeProxy_ChangeTessellationComponentScreenSize::InTessellationComponentScreenSize' has a wrong offset!");

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff final
{
public:
	float                                         InUseTessellationComponentScreenSizeFalloff;       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff");
static_assert(sizeof(LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff) == 0x000004, "Wrong size on LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff");
static_assert(offsetof(LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff, InUseTessellationComponentScreenSizeFalloff) == 0x000000, "Member 'LandscapeProxy_ChangeTessellationComponentScreenSizeFalloff::InUseTessellationComponentScreenSizeFalloff' has a wrong offset!");

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// 0x0001 (0x0001 - 0x0000)
struct LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff final
{
public:
	bool                                          InComponentScreenSizeToUseSubSections;             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff) == 0x000001, "Wrong alignment on LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff");
static_assert(sizeof(LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff) == 0x000001, "Wrong size on LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff");
static_assert(offsetof(LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff, InComponentScreenSizeToUseSubSections) == 0x000000, "Member 'LandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff::InComponentScreenSizeToUseSubSections' has a wrong offset!");

// Function Landscape.LandscapeProxy.EditorApplySpline
// 0x0030 (0x0030 - 0x0000)
struct LandscapeProxy_EditorApplySpline final
{
public:
	class USplineComponent*                       InSplineComponent;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartWidth;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndWidth;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartSideFalloff;                                  // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndSideFalloff;                                    // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartRoll;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndRoll;                                           // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSubdivisions;                                   // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRaiseHeights;                                     // 0x0024(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLowerHeights;                                     // 0x0025(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULandscapeLayerInfoObject*              PaintLayer;                                        // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_EditorApplySpline) == 0x000008, "Wrong alignment on LandscapeProxy_EditorApplySpline");
static_assert(sizeof(LandscapeProxy_EditorApplySpline) == 0x000030, "Wrong size on LandscapeProxy_EditorApplySpline");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, InSplineComponent) == 0x000000, "Member 'LandscapeProxy_EditorApplySpline::InSplineComponent' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartWidth) == 0x000008, "Member 'LandscapeProxy_EditorApplySpline::StartWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndWidth) == 0x00000C, "Member 'LandscapeProxy_EditorApplySpline::EndWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartSideFalloff) == 0x000010, "Member 'LandscapeProxy_EditorApplySpline::StartSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndSideFalloff) == 0x000014, "Member 'LandscapeProxy_EditorApplySpline::EndSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartRoll) == 0x000018, "Member 'LandscapeProxy_EditorApplySpline::StartRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndRoll) == 0x00001C, "Member 'LandscapeProxy_EditorApplySpline::EndRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, NumSubdivisions) == 0x000020, "Member 'LandscapeProxy_EditorApplySpline::NumSubdivisions' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bRaiseHeights) == 0x000024, "Member 'LandscapeProxy_EditorApplySpline::bRaiseHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bLowerHeights) == 0x000025, "Member 'LandscapeProxy_EditorApplySpline::bLowerHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, PaintLayer) == 0x000028, "Member 'LandscapeProxy_EditorApplySpline::PaintLayer' has a wrong offset!");

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// 0x0008 (0x0008 - 0x0000)
struct LandscapeProxy_EditorSetLandscapeMaterial final
{
public:
	class UMaterialInterface*                     NewLandscapeMaterial;                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_EditorSetLandscapeMaterial) == 0x000008, "Wrong alignment on LandscapeProxy_EditorSetLandscapeMaterial");
static_assert(sizeof(LandscapeProxy_EditorSetLandscapeMaterial) == 0x000008, "Wrong size on LandscapeProxy_EditorSetLandscapeMaterial");
static_assert(offsetof(LandscapeProxy_EditorSetLandscapeMaterial, NewLandscapeMaterial) == 0x000000, "Member 'LandscapeProxy_EditorSetLandscapeMaterial::NewLandscapeMaterial' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// 0x0010 (0x0010 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialScalarParameterValue final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue) == 0x000004, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialScalarParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue) == 0x000010, "Wrong size on LandscapeProxy_SetLandscapeMaterialScalarParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialScalarParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue, Value) == 0x000008, "Member 'LandscapeProxy_SetLandscapeMaterialScalarParameterValue::Value' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// 0x0010 (0x0010 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialTextureParameterValue final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               Value;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue) == 0x000008, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialTextureParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue) == 0x000010, "Wrong size on LandscapeProxy_SetLandscapeMaterialTextureParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialTextureParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue, Value) == 0x000008, "Member 'LandscapeProxy_SetLandscapeMaterialTextureParameterValue::Value' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// 0x0018 (0x0018 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialVectorParameterValue final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Value;                                             // 0x0008(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue) == 0x000004, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialVectorParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue) == 0x000018, "Wrong size on LandscapeProxy_SetLandscapeMaterialVectorParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialVectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue, Value) == 0x000008, "Member 'LandscapeProxy_SetLandscapeMaterialVectorParameterValue::Value' has a wrong offset!");

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// 0x0010 (0x0010 - 0x0000)
struct LandscapeComponent_GetMaterialInstanceDynamic final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeComponent_GetMaterialInstanceDynamic) == 0x000008, "Wrong alignment on LandscapeComponent_GetMaterialInstanceDynamic");
static_assert(sizeof(LandscapeComponent_GetMaterialInstanceDynamic) == 0x000010, "Wrong size on LandscapeComponent_GetMaterialInstanceDynamic");
static_assert(offsetof(LandscapeComponent_GetMaterialInstanceDynamic, InIndex) == 0x000000, "Member 'LandscapeComponent_GetMaterialInstanceDynamic::InIndex' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_GetMaterialInstanceDynamic, ReturnValue) == 0x000008, "Member 'LandscapeComponent_GetMaterialInstanceDynamic::ReturnValue' has a wrong offset!");

}

