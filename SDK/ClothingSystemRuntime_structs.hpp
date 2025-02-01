#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"


namespace SDK
{

// Enum ClothingSystemRuntime.EClothingWindMethod
// NumValues: 0x0003
enum class EClothingWindMethod : uint8
{
	Legacy                                   = 0,
	Accurate                                 = 1,
	EClothingWindMethod_MAX                  = 2,
};

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
// NumValues: 0x0006
enum class EMaskTarget_PhysMesh : uint8
{
	None                                     = 0,
	MaxDistance                              = 1,
	BackstopDistance                         = 2,
	BackstopRadius                           = 3,
	AnimDriveMultiplier                      = 4,
	MaskTarget_MAX                           = 5,
};

// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0034 (0x0034 - 0x0000)
struct FClothVertBoneData final
{
public:
	int32                                         NumInfluences;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        BoneIndices[0x8];                                  // 0x0004(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BoneWeights[0x8];                                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothVertBoneData) == 0x000004, "Wrong alignment on FClothVertBoneData");
static_assert(sizeof(FClothVertBoneData) == 0x000034, "Wrong size on FClothVertBoneData");
static_assert(offsetof(FClothVertBoneData, NumInfluences) == 0x000000, "Member 'FClothVertBoneData::NumInfluences' has a wrong offset!");
static_assert(offsetof(FClothVertBoneData, BoneIndices) == 0x000004, "Member 'FClothVertBoneData::BoneIndices' has a wrong offset!");
static_assert(offsetof(FClothVertBoneData, BoneWeights) == 0x000014, "Member 'FClothVertBoneData::BoneWeights' has a wrong offset!");

// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x00A8 (0x00A8 - 0x0000)
struct FClothPhysicalMeshData final
{
public:
	TArray<struct FVector>                        Vertices;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        Normals;                                           // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                Indices;                                           // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 MaxDistances;                                      // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopDistances;                                 // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopRadiuses;                                  // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 AnimDriveMultipliers;                              // 0x0060(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 InverseMasses;                                     // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>             BoneData;                                          // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         MaxBoneWeights;                                    // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumFixedVerts;                                     // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                                SelfCollisionIndices;                              // 0x0098(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothPhysicalMeshData) == 0x000008, "Wrong alignment on FClothPhysicalMeshData");
static_assert(sizeof(FClothPhysicalMeshData) == 0x0000A8, "Wrong size on FClothPhysicalMeshData");
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x000000, "Member 'FClothPhysicalMeshData::Vertices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x000010, "Member 'FClothPhysicalMeshData::Normals' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x000020, "Member 'FClothPhysicalMeshData::Indices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, MaxDistances) == 0x000030, "Member 'FClothPhysicalMeshData::MaxDistances' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BackstopDistances) == 0x000040, "Member 'FClothPhysicalMeshData::BackstopDistances' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BackstopRadiuses) == 0x000050, "Member 'FClothPhysicalMeshData::BackstopRadiuses' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, AnimDriveMultipliers) == 0x000060, "Member 'FClothPhysicalMeshData::AnimDriveMultipliers' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x000070, "Member 'FClothPhysicalMeshData::InverseMasses' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x000080, "Member 'FClothPhysicalMeshData::BoneData' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, MaxBoneWeights) == 0x000090, "Member 'FClothPhysicalMeshData::MaxBoneWeights' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, NumFixedVerts) == 0x000094, "Member 'FClothPhysicalMeshData::NumFixedVerts' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x000098, "Member 'FClothPhysicalMeshData::SelfCollisionIndices' has a wrong offset!");

// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x00F8 (0x00F8 - 0x0000)
struct FClothLODData final
{
public:
	struct FClothPhysicalMeshData                 PhysicalMeshData;                                  // 0x0000(0x00A8)(Edit, NativeAccessSpecifierPublic)
	struct FClothCollisionData                    CollisionData;                                     // 0x00A8(0x0030)(Edit, NativeAccessSpecifierPublic)
	uint8                                         Pad_D8[0x20];                                      // 0x00D8(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClothLODData) == 0x000008, "Wrong alignment on FClothLODData");
static_assert(sizeof(FClothLODData) == 0x0000F8, "Wrong size on FClothLODData");
static_assert(offsetof(FClothLODData, PhysicalMeshData) == 0x000000, "Member 'FClothLODData::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(FClothLODData, CollisionData) == 0x0000A8, "Member 'FClothLODData::CollisionData' has a wrong offset!");

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0010 (0x0010 - 0x0000)
struct FClothConstraintSetup final
{
public:
	float                                         Stiffness;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessMultiplier;                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StretchLimit;                                      // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CompressionLimit;                                  // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothConstraintSetup) == 0x000004, "Wrong alignment on FClothConstraintSetup");
static_assert(sizeof(FClothConstraintSetup) == 0x000010, "Wrong size on FClothConstraintSetup");
static_assert(offsetof(FClothConstraintSetup, Stiffness) == 0x000000, "Member 'FClothConstraintSetup::Stiffness' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup, StiffnessMultiplier) == 0x000004, "Member 'FClothConstraintSetup::StiffnessMultiplier' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup, StretchLimit) == 0x000008, "Member 'FClothConstraintSetup::StretchLimit' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup, CompressionLimit) == 0x00000C, "Member 'FClothConstraintSetup::CompressionLimit' has a wrong offset!");

// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x00C4 (0x00C4 - 0x0000)
struct FClothConfig final
{
public:
	EClothingWindMethod                           WindMethod;                                        // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FClothConstraintSetup                  VerticalConstraintConfig;                          // 0x0004(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                  HorizontalConstraintConfig;                        // 0x0014(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                  BendConstraintConfig;                              // 0x0024(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                  ShearConstraintConfig;                             // 0x0034(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SelfCollisionRadius;                               // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionStiffness;                            // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionCullScale;                            // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Damping;                                           // 0x0050(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Friction;                                          // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindDragCoefficient;                               // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindLiftCoefficient;                               // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearDrag;                                        // 0x0068(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularDrag;                                       // 0x0074(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearInertiaScale;                                // 0x0080(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularInertiaScale;                               // 0x008C(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CentrifugalInertiaScale;                           // 0x0098(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SolverFrequency;                                   // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessFrequency;                                // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GravityScale;                                      // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherStiffness;                                   // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherLimit;                                       // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionThickness;                                // 0x00B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveSpringStiffness;                          // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveDamperStiffness;                          // 0x00C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothConfig) == 0x000004, "Wrong alignment on FClothConfig");
static_assert(sizeof(FClothConfig) == 0x0000C4, "Wrong size on FClothConfig");
static_assert(offsetof(FClothConfig, WindMethod) == 0x000000, "Member 'FClothConfig::WindMethod' has a wrong offset!");
static_assert(offsetof(FClothConfig, VerticalConstraintConfig) == 0x000004, "Member 'FClothConfig::VerticalConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig, HorizontalConstraintConfig) == 0x000014, "Member 'FClothConfig::HorizontalConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig, BendConstraintConfig) == 0x000024, "Member 'FClothConfig::BendConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig, ShearConstraintConfig) == 0x000034, "Member 'FClothConfig::ShearConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig, SelfCollisionRadius) == 0x000044, "Member 'FClothConfig::SelfCollisionRadius' has a wrong offset!");
static_assert(offsetof(FClothConfig, SelfCollisionStiffness) == 0x000048, "Member 'FClothConfig::SelfCollisionStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig, SelfCollisionCullScale) == 0x00004C, "Member 'FClothConfig::SelfCollisionCullScale' has a wrong offset!");
static_assert(offsetof(FClothConfig, Damping) == 0x000050, "Member 'FClothConfig::Damping' has a wrong offset!");
static_assert(offsetof(FClothConfig, Friction) == 0x00005C, "Member 'FClothConfig::Friction' has a wrong offset!");
static_assert(offsetof(FClothConfig, WindDragCoefficient) == 0x000060, "Member 'FClothConfig::WindDragCoefficient' has a wrong offset!");
static_assert(offsetof(FClothConfig, WindLiftCoefficient) == 0x000064, "Member 'FClothConfig::WindLiftCoefficient' has a wrong offset!");
static_assert(offsetof(FClothConfig, LinearDrag) == 0x000068, "Member 'FClothConfig::LinearDrag' has a wrong offset!");
static_assert(offsetof(FClothConfig, AngularDrag) == 0x000074, "Member 'FClothConfig::AngularDrag' has a wrong offset!");
static_assert(offsetof(FClothConfig, LinearInertiaScale) == 0x000080, "Member 'FClothConfig::LinearInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig, AngularInertiaScale) == 0x00008C, "Member 'FClothConfig::AngularInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig, CentrifugalInertiaScale) == 0x000098, "Member 'FClothConfig::CentrifugalInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig, SolverFrequency) == 0x0000A4, "Member 'FClothConfig::SolverFrequency' has a wrong offset!");
static_assert(offsetof(FClothConfig, StiffnessFrequency) == 0x0000A8, "Member 'FClothConfig::StiffnessFrequency' has a wrong offset!");
static_assert(offsetof(FClothConfig, GravityScale) == 0x0000AC, "Member 'FClothConfig::GravityScale' has a wrong offset!");
static_assert(offsetof(FClothConfig, TetherStiffness) == 0x0000B0, "Member 'FClothConfig::TetherStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig, TetherLimit) == 0x0000B4, "Member 'FClothConfig::TetherLimit' has a wrong offset!");
static_assert(offsetof(FClothConfig, CollisionThickness) == 0x0000B8, "Member 'FClothConfig::CollisionThickness' has a wrong offset!");
static_assert(offsetof(FClothConfig, AnimDriveSpringStiffness) == 0x0000BC, "Member 'FClothConfig::AnimDriveSpringStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig, AnimDriveDamperStiffness) == 0x0000C0, "Member 'FClothConfig::AnimDriveDamperStiffness' has a wrong offset!");

// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0030 (0x0030 - 0x0000)
struct FClothParameterMask_PhysMesh final
{
public:
	class FName                                   MaskName;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaskTarget_PhysMesh                          CurrentTarget;                                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxValue;                                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinValue;                                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Values;                                            // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClothParameterMask_PhysMesh) == 0x000008, "Wrong alignment on FClothParameterMask_PhysMesh");
static_assert(sizeof(FClothParameterMask_PhysMesh) == 0x000030, "Wrong size on FClothParameterMask_PhysMesh");
static_assert(offsetof(FClothParameterMask_PhysMesh, MaskName) == 0x000000, "Member 'FClothParameterMask_PhysMesh::MaskName' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_PhysMesh, CurrentTarget) == 0x000008, "Member 'FClothParameterMask_PhysMesh::CurrentTarget' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_PhysMesh, MaxValue) == 0x00000C, "Member 'FClothParameterMask_PhysMesh::MaxValue' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_PhysMesh, MinValue) == 0x000010, "Member 'FClothParameterMask_PhysMesh::MinValue' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_PhysMesh, Values) == 0x000018, "Member 'FClothParameterMask_PhysMesh::Values' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_PhysMesh, bEnabled) == 0x000028, "Member 'FClothParameterMask_PhysMesh::bEnabled' has a wrong offset!");

}

