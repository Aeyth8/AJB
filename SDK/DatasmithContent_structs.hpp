#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DatasmithContent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum DatasmithContent.EDatasmithAreaLightActorShape
// NumValues: 0x0005
enum class EDatasmithAreaLightActorShape : uint8
{
	Rectangle                                = 0,
	Disc                                     = 1,
	Sphere                                   = 2,
	Cylinder                                 = 3,
	EDatasmithAreaLightActorShape_MAX        = 4,
};

// Enum DatasmithContent.EDatasmithImportHierarchy
// NumValues: 0x0004
enum class EDatasmithImportHierarchy : uint8
{
	UseMultipleActors                        = 0,
	UseSingleActor                           = 1,
	UseOneBlueprint                          = 2,
	EDatasmithImportHierarchy_MAX            = 3,
};

// Enum DatasmithContent.EDatasmithImportScene
// NumValues: 0x0004
enum class EDatasmithImportScene : uint8
{
	NewLevel                                 = 0,
	CurrentLevel                             = 1,
	AssetsOnly                               = 2,
	EDatasmithImportScene_MAX                = 3,
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
// NumValues: 0x0008
enum class EDatasmithImportLightmapMax : uint8
{
	LIGHTMAP_64                              = 0,
	LIGHTMAP_128                             = 1,
	LIGHTMAP_256                             = 2,
	LIGHTMAP_512                             = 3,
	LIGHTMAP_1024                            = 4,
	LIGHTMAP_2048                            = 5,
	LIGHTMAP_4096                            = 6,
	LIGHTMAP_MAX                             = 7,
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
// NumValues: 0x0007
enum class EDatasmithImportLightmapMin : uint8
{
	LIGHTMAP_16                              = 0,
	LIGHTMAP_32                              = 1,
	LIGHTMAP_64                              = 2,
	LIGHTMAP_128                             = 3,
	LIGHTMAP_256                             = 4,
	LIGHTMAP_512                             = 5,
	LIGHTMAP_MAX                             = 6,
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
// NumValues: 0x0004
enum class EDatasmithImportMaterialQuality : uint8
{
	UseNoFresnelCurves                       = 0,
	UseSimplifierFresnelCurves               = 1,
	UseRealFresnelCurves                     = 2,
	EDatasmithImportMaterialQuality_MAX      = 3,
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
// NumValues: 0x0004
enum class EDatasmithImportActorPolicy : uint8
{
	Update                                   = 0,
	Full                                     = 1,
	Ignore                                   = 2,
	EDatasmithImportActorPolicy_MAX          = 3,
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
// NumValues: 0x0005
enum class EDatasmithImportAssetConflictPolicy : uint8
{
	Replace                                  = 0,
	Update                                   = 1,
	Use                                      = 2,
	Ignore                                   = 3,
	EDatasmithImportAssetConflictPolicy_MAX  = 4,
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
// NumValues: 0x0003
enum class EDatasmithImportSearchPackagePolicy : uint8
{
	Current                                  = 0,
	All                                      = 1,
	EDatasmithImportSearchPackagePolicy_MAX  = 2,
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FDatasmithAssetImportOptions final
{
public:
	class FName                                   PackagePath;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithAssetImportOptions) == 0x000008, "Wrong alignment on FDatasmithAssetImportOptions");
static_assert(sizeof(FDatasmithAssetImportOptions) == 0x000008, "Wrong size on FDatasmithAssetImportOptions");
static_assert(offsetof(FDatasmithAssetImportOptions, PackagePath) == 0x000000, "Member 'FDatasmithAssetImportOptions::PackagePath' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0004 (0x0004 - 0x0000)
struct FDatasmithStaticMeshImportOptions final
{
public:
	EDatasmithImportLightmapMin                   MinLightmapResolution;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDatasmithImportLightmapMax                   MaxLightmapResolution;                             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenerateLightmapUVs;                              // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRemoveDegenerates;                                // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithStaticMeshImportOptions) == 0x000001, "Wrong alignment on FDatasmithStaticMeshImportOptions");
static_assert(sizeof(FDatasmithStaticMeshImportOptions) == 0x000004, "Wrong size on FDatasmithStaticMeshImportOptions");
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MinLightmapResolution) == 0x000000, "Member 'FDatasmithStaticMeshImportOptions::MinLightmapResolution' has a wrong offset!");
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MaxLightmapResolution) == 0x000001, "Member 'FDatasmithStaticMeshImportOptions::MaxLightmapResolution' has a wrong offset!");
static_assert(offsetof(FDatasmithStaticMeshImportOptions, bGenerateLightmapUVs) == 0x000002, "Member 'FDatasmithStaticMeshImportOptions::bGenerateLightmapUVs' has a wrong offset!");
static_assert(offsetof(FDatasmithStaticMeshImportOptions, bRemoveDegenerates) == 0x000003, "Member 'FDatasmithStaticMeshImportOptions::bRemoveDegenerates' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0018 (0x0018 - 0x0000)
struct FDatasmithImportBaseOptions final
{
public:
	EDatasmithImportScene                         SceneHandling;                                     // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeGeometry;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeMaterial;                                  // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeLight;                                     // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeCamera;                                    // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDatasmithAssetImportOptions           AssetOptions;                                      // 0x0008(0x0008)(BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FDatasmithStaticMeshImportOptions      StaticMeshOptions;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDatasmithImportBaseOptions) == 0x000008, "Wrong alignment on FDatasmithImportBaseOptions");
static_assert(sizeof(FDatasmithImportBaseOptions) == 0x000018, "Wrong size on FDatasmithImportBaseOptions");
static_assert(offsetof(FDatasmithImportBaseOptions, SceneHandling) == 0x000000, "Member 'FDatasmithImportBaseOptions::SceneHandling' has a wrong offset!");
static_assert(offsetof(FDatasmithImportBaseOptions, bIncludeGeometry) == 0x000001, "Member 'FDatasmithImportBaseOptions::bIncludeGeometry' has a wrong offset!");
static_assert(offsetof(FDatasmithImportBaseOptions, bIncludeMaterial) == 0x000002, "Member 'FDatasmithImportBaseOptions::bIncludeMaterial' has a wrong offset!");
static_assert(offsetof(FDatasmithImportBaseOptions, bIncludeLight) == 0x000003, "Member 'FDatasmithImportBaseOptions::bIncludeLight' has a wrong offset!");
static_assert(offsetof(FDatasmithImportBaseOptions, bIncludeCamera) == 0x000004, "Member 'FDatasmithImportBaseOptions::bIncludeCamera' has a wrong offset!");
static_assert(offsetof(FDatasmithImportBaseOptions, AssetOptions) == 0x000008, "Member 'FDatasmithImportBaseOptions::AssetOptions' has a wrong offset!");
static_assert(offsetof(FDatasmithImportBaseOptions, StaticMeshOptions) == 0x000010, "Member 'FDatasmithImportBaseOptions::StaticMeshOptions' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0040 (0x0040 - 0x0000)
struct FDatasmithPostProcessSettingsTemplate final
{
public:
	uint8                                         bOverride_WhiteTemp : 1;                           // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_ColorSaturation : 1;                     // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_VignetteIntensity : 1;                   // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_FilmWhitePoint : 1;                      // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_AutoExposureMethod : 1;                  // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_CameraISO : 1;                           // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WhiteTemp;                                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VignetteIntensity;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           FilmWhitePoint;                                    // 0x000C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               ColorSaturation;                                   // 0x0020(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAutoExposureMethod                           AutoExposureMethod;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraISO;                                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDatasmithPostProcessSettingsTemplate) == 0x000010, "Wrong alignment on FDatasmithPostProcessSettingsTemplate");
static_assert(sizeof(FDatasmithPostProcessSettingsTemplate) == 0x000040, "Wrong size on FDatasmithPostProcessSettingsTemplate");
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, WhiteTemp) == 0x000004, "Member 'FDatasmithPostProcessSettingsTemplate::WhiteTemp' has a wrong offset!");
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, VignetteIntensity) == 0x000008, "Member 'FDatasmithPostProcessSettingsTemplate::VignetteIntensity' has a wrong offset!");
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, FilmWhitePoint) == 0x00000C, "Member 'FDatasmithPostProcessSettingsTemplate::FilmWhitePoint' has a wrong offset!");
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, ColorSaturation) == 0x000020, "Member 'FDatasmithPostProcessSettingsTemplate::ColorSaturation' has a wrong offset!");
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, AutoExposureMethod) == 0x000030, "Member 'FDatasmithPostProcessSettingsTemplate::AutoExposureMethod' has a wrong offset!");
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, CameraISO) == 0x000034, "Member 'FDatasmithPostProcessSettingsTemplate::CameraISO' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0004 (0x0004 - 0x0000)
struct FDatasmithCameraFocusSettingsTemplate final
{
public:
	float                                         ManualFocusDistance;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithCameraFocusSettingsTemplate) == 0x000004, "Wrong alignment on FDatasmithCameraFocusSettingsTemplate");
static_assert(sizeof(FDatasmithCameraFocusSettingsTemplate) == 0x000004, "Wrong size on FDatasmithCameraFocusSettingsTemplate");
static_assert(offsetof(FDatasmithCameraFocusSettingsTemplate, ManualFocusDistance) == 0x000000, "Member 'FDatasmithCameraFocusSettingsTemplate::ManualFocusDistance' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0004 (0x0004 - 0x0000)
struct FDatasmithCameraLensSettingsTemplate final
{
public:
	float                                         MaxFStop;                                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithCameraLensSettingsTemplate) == 0x000004, "Wrong alignment on FDatasmithCameraLensSettingsTemplate");
static_assert(sizeof(FDatasmithCameraLensSettingsTemplate) == 0x000004, "Wrong size on FDatasmithCameraLensSettingsTemplate");
static_assert(offsetof(FDatasmithCameraLensSettingsTemplate, MaxFStop) == 0x000000, "Member 'FDatasmithCameraLensSettingsTemplate::MaxFStop' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0008 (0x0008 - 0x0000)
struct FDatasmithCameraFilmbackSettingsTemplate final
{
public:
	float                                         SensorWidth;                                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SensorHeight;                                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithCameraFilmbackSettingsTemplate) == 0x000004, "Wrong alignment on FDatasmithCameraFilmbackSettingsTemplate");
static_assert(sizeof(FDatasmithCameraFilmbackSettingsTemplate) == 0x000008, "Wrong size on FDatasmithCameraFilmbackSettingsTemplate");
static_assert(offsetof(FDatasmithCameraFilmbackSettingsTemplate, SensorWidth) == 0x000000, "Member 'FDatasmithCameraFilmbackSettingsTemplate::SensorWidth' has a wrong offset!");
static_assert(offsetof(FDatasmithCameraFilmbackSettingsTemplate, SensorHeight) == 0x000004, "Member 'FDatasmithCameraFilmbackSettingsTemplate::SensorHeight' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x000C (0x000C - 0x0000)
struct FDatasmithTessellationOptions final
{
public:
	float                                         ChordTolerance;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxEdgeLength;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalTolerance;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithTessellationOptions) == 0x000004, "Wrong alignment on FDatasmithTessellationOptions");
static_assert(sizeof(FDatasmithTessellationOptions) == 0x00000C, "Wrong size on FDatasmithTessellationOptions");
static_assert(offsetof(FDatasmithTessellationOptions, ChordTolerance) == 0x000000, "Member 'FDatasmithTessellationOptions::ChordTolerance' has a wrong offset!");
static_assert(offsetof(FDatasmithTessellationOptions, MaxEdgeLength) == 0x000004, "Member 'FDatasmithTessellationOptions::MaxEdgeLength' has a wrong offset!");
static_assert(offsetof(FDatasmithTessellationOptions, NormalTolerance) == 0x000008, "Member 'FDatasmithTessellationOptions::NormalTolerance' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0002 (0x0002 - 0x0000)
struct FDatasmithReimportOptions final
{
public:
	bool                                          bUpdateActors;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRespawnDeletedActors;                             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithReimportOptions) == 0x000001, "Wrong alignment on FDatasmithReimportOptions");
static_assert(sizeof(FDatasmithReimportOptions) == 0x000002, "Wrong size on FDatasmithReimportOptions");
static_assert(offsetof(FDatasmithReimportOptions, bUpdateActors) == 0x000000, "Member 'FDatasmithReimportOptions::bUpdateActors' has a wrong offset!");
static_assert(offsetof(FDatasmithReimportOptions, bRespawnDeletedActors) == 0x000001, "Member 'FDatasmithReimportOptions::bRespawnDeletedActors' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0004 (0x0004 - 0x0000)
struct FDatasmithMeshSectionInfoTemplate final
{
public:
	int32                                         MaterialIndex;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithMeshSectionInfoTemplate) == 0x000004, "Wrong alignment on FDatasmithMeshSectionInfoTemplate");
static_assert(sizeof(FDatasmithMeshSectionInfoTemplate) == 0x000004, "Wrong size on FDatasmithMeshSectionInfoTemplate");
static_assert(offsetof(FDatasmithMeshSectionInfoTemplate, MaterialIndex) == 0x000000, "Member 'FDatasmithMeshSectionInfoTemplate::MaterialIndex' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0050 (0x0050 - 0x0000)
struct FDatasmithMeshSectionInfoMapTemplate final
{
public:
	TMap<uint32, struct FDatasmithMeshSectionInfoTemplate> Map;                                               // 0x0000(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithMeshSectionInfoMapTemplate) == 0x000008, "Wrong alignment on FDatasmithMeshSectionInfoMapTemplate");
static_assert(sizeof(FDatasmithMeshSectionInfoMapTemplate) == 0x000050, "Wrong size on FDatasmithMeshSectionInfoMapTemplate");
static_assert(offsetof(FDatasmithMeshSectionInfoMapTemplate, Map) == 0x000000, "Member 'FDatasmithMeshSectionInfoMapTemplate::Map' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0010 (0x0010 - 0x0000)
struct FDatasmithStaticMaterialTemplate final
{
public:
	class FName                                   MaterialSlotName;                                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MaterialInterface;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithStaticMaterialTemplate) == 0x000008, "Wrong alignment on FDatasmithStaticMaterialTemplate");
static_assert(sizeof(FDatasmithStaticMaterialTemplate) == 0x000010, "Wrong size on FDatasmithStaticMaterialTemplate");
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialSlotName) == 0x000000, "Member 'FDatasmithStaticMaterialTemplate::MaterialSlotName' has a wrong offset!");
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialInterface) == 0x000008, "Member 'FDatasmithStaticMaterialTemplate::MaterialInterface' has a wrong offset!");

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0010 (0x0010 - 0x0000)
struct FDatasmithMeshBuildSettingsTemplate final
{
public:
	uint8                                         bUseMikkTSpace : 1;                                // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRecomputeNormals : 1;                             // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRecomputeTangents : 1;                            // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRemoveDegenerates : 1;                            // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bBuildAdjacencyBuffer : 1;                         // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseHighPrecisionTangentBasis : 1;                 // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseFullPrecisionUVs : 1;                          // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bGenerateLightmapUVs : 1;                          // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinLightmapResolution;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SrcLightmapIndex;                                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DstLightmapIndex;                                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDatasmithMeshBuildSettingsTemplate) == 0x000004, "Wrong alignment on FDatasmithMeshBuildSettingsTemplate");
static_assert(sizeof(FDatasmithMeshBuildSettingsTemplate) == 0x000010, "Wrong size on FDatasmithMeshBuildSettingsTemplate");
static_assert(offsetof(FDatasmithMeshBuildSettingsTemplate, MinLightmapResolution) == 0x000004, "Member 'FDatasmithMeshBuildSettingsTemplate::MinLightmapResolution' has a wrong offset!");
static_assert(offsetof(FDatasmithMeshBuildSettingsTemplate, SrcLightmapIndex) == 0x000008, "Member 'FDatasmithMeshBuildSettingsTemplate::SrcLightmapIndex' has a wrong offset!");
static_assert(offsetof(FDatasmithMeshBuildSettingsTemplate, DstLightmapIndex) == 0x00000C, "Member 'FDatasmithMeshBuildSettingsTemplate::DstLightmapIndex' has a wrong offset!");

}

