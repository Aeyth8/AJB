#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EyeTracker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum EyeTracker.EEyeTrackerStatus
// NumValues: 0x0004
enum class EEyeTrackerStatus : uint8
{
	NotConnected                             = 0,
	NotTracking                              = 1,
	Tracking                                 = 2,
	EEyeTrackerStatus_MAX                    = 3,
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040 (0x0040 - 0x0000)
struct FEyeTrackerStereoGazeData final
{
public:
	struct FVector                                LeftEyeOrigin;                                     // 0x0000(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LeftEyeDirection;                                  // 0x000C(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RightEyeOrigin;                                    // 0x0018(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RightEyeDirection;                                 // 0x0024(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FixationPoint;                                     // 0x0030(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConfidenceValue;                                   // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEyeTrackerStereoGazeData) == 0x000004, "Wrong alignment on FEyeTrackerStereoGazeData");
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x000040, "Wrong size on FEyeTrackerStereoGazeData");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x000000, "Member 'FEyeTrackerStereoGazeData::LeftEyeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x00000C, "Member 'FEyeTrackerStereoGazeData::LeftEyeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x000018, "Member 'FEyeTrackerStereoGazeData::RightEyeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x000024, "Member 'FEyeTrackerStereoGazeData::RightEyeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x000030, "Member 'FEyeTrackerStereoGazeData::FixationPoint' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, ConfidenceValue) == 0x00003C, "Member 'FEyeTrackerStereoGazeData::ConfidenceValue' has a wrong offset!");

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028 (0x0028 - 0x0000)
struct FEyeTrackerGazeData final
{
public:
	struct FVector                                GazeOrigin;                                        // 0x0000(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GazeDirection;                                     // 0x000C(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FixationPoint;                                     // 0x0018(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConfidenceValue;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEyeTrackerGazeData) == 0x000004, "Wrong alignment on FEyeTrackerGazeData");
static_assert(sizeof(FEyeTrackerGazeData) == 0x000028, "Wrong size on FEyeTrackerGazeData");
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x000000, "Member 'FEyeTrackerGazeData::GazeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x00000C, "Member 'FEyeTrackerGazeData::GazeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x000018, "Member 'FEyeTrackerGazeData::FixationPoint' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, ConfidenceValue) == 0x000024, "Member 'FEyeTrackerGazeData::ConfidenceValue' has a wrong offset!");

}

