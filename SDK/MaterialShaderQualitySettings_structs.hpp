#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaterialShaderQualitySettings

#include "Basic.hpp"


namespace SDK
{

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
// NumValues: 0x0004
enum class EMobileCSMQuality : uint8
{
	NoFiltering                              = 0,
	PCF_1x1                                  = 1,
	PCF_2x2                                  = 2,
	EMobileCSMQuality_MAX                    = 3,
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0007 (0x0007 - 0x0000)
struct FMaterialQualityOverrides final
{
public:
	bool                                          bEnableOverride;                                   // 0x0000(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceFullyRough;                                  // 0x0001(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceNonMetal;                                    // 0x0002(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceDisableLMDirectionality;                     // 0x0003(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceLQReflections;                               // 0x0004(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableMaterialNormalCalculation;                 // 0x0005(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMobileCSMQuality                             MobileCSMQuality;                                  // 0x0006(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMaterialQualityOverrides) == 0x000001, "Wrong alignment on FMaterialQualityOverrides");
static_assert(sizeof(FMaterialQualityOverrides) == 0x000007, "Wrong size on FMaterialQualityOverrides");
static_assert(offsetof(FMaterialQualityOverrides, bEnableOverride) == 0x000000, "Member 'FMaterialQualityOverrides::bEnableOverride' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceFullyRough) == 0x000001, "Member 'FMaterialQualityOverrides::bForceFullyRough' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceNonMetal) == 0x000002, "Member 'FMaterialQualityOverrides::bForceNonMetal' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisableLMDirectionality) == 0x000003, "Member 'FMaterialQualityOverrides::bForceDisableLMDirectionality' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceLQReflections) == 0x000004, "Member 'FMaterialQualityOverrides::bForceLQReflections' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bDisableMaterialNormalCalculation) == 0x000005, "Member 'FMaterialQualityOverrides::bDisableMaterialNormalCalculation' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, MobileCSMQuality) == 0x000006, "Member 'FMaterialQualityOverrides::MobileCSMQuality' has a wrong offset!");

}

