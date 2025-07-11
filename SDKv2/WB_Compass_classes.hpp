#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Compass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Compass.WB_Compass_C
// 0x0060 (0x0268 - 0x0208)
class UWB_Compass_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              AJBImage_PairMarker;                               // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_PlayerMarker;                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Compass;                                           // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_Compass;                                       // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_PlayerMarker;                                  // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_PairMarker;                                    // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentPlayerRotation;                             // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBUIMapManager_C*                  CachedMapManager;                                  // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_LandmarkableMap_C*                  CachedLastMapWidget;                               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CurrentPlayerMarkerNormalizedPosition;             // 0x0258(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CurrentPairMarkerNormalizedPosition;               // 0x0260(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Compass(int32 EntryPoint);
	void OnStickedPlayerMarker(const struct FVector2D& NormalizedPosition, class UWB_LandmarkableMap_C* MapWidget, const struct FGameplayTag& SignalTypeTag, bool FromMap);
	void OnStickedPairMarker(const struct FVector2D& NormalizedPosition, class UWB_LandmarkableMap_C* MapWidget, const struct FGameplayTag& SignalTypeTag);
	void OnHighlightPlayBegin();
	void Construct();
	void Update(float Yaw);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Compass_C">();
	}
	static class UWB_Compass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Compass_C>();
	}
};
static_assert(alignof(UWB_Compass_C) == 0x000008, "Wrong alignment on UWB_Compass_C");
static_assert(sizeof(UWB_Compass_C) == 0x000268, "Wrong size on UWB_Compass_C");
static_assert(offsetof(UWB_Compass_C, UberGraphFrame) == 0x000208, "Member 'UWB_Compass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, AJBImage_PairMarker) == 0x000210, "Member 'UWB_Compass_C::AJBImage_PairMarker' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, AJBImage_PlayerMarker) == 0x000218, "Member 'UWB_Compass_C::AJBImage_PlayerMarker' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, Compass) == 0x000220, "Member 'UWB_Compass_C::Compass' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, DMI_Compass) == 0x000228, "Member 'UWB_Compass_C::DMI_Compass' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, DMI_PlayerMarker) == 0x000230, "Member 'UWB_Compass_C::DMI_PlayerMarker' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, DMI_PairMarker) == 0x000238, "Member 'UWB_Compass_C::DMI_PairMarker' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, CurrentPlayerRotation) == 0x000240, "Member 'UWB_Compass_C::CurrentPlayerRotation' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, CachedMapManager) == 0x000248, "Member 'UWB_Compass_C::CachedMapManager' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, CachedLastMapWidget) == 0x000250, "Member 'UWB_Compass_C::CachedLastMapWidget' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, CurrentPlayerMarkerNormalizedPosition) == 0x000258, "Member 'UWB_Compass_C::CurrentPlayerMarkerNormalizedPosition' has a wrong offset!");
static_assert(offsetof(UWB_Compass_C, CurrentPairMarkerNormalizedPosition) == 0x000260, "Member 'UWB_Compass_C::CurrentPairMarkerNormalizedPosition' has a wrong offset!");

}

