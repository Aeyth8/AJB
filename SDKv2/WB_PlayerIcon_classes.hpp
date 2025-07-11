#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PlayerIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PlayerIcon.WB_PlayerIcon_C
// 0x0038 (0x0280 - 0x0248)
class UWB_PlayerIcon_C final : public UAJBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              Img_BG;                                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              Img_Flame;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              PlayerIcon;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Aura_C*                             WB_Aura;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PlayerIconID;                                      // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AuraOffset;                                        // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_PlayerIcon;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_PlayerIcon(int32 EntryPoint);
	void HideDecorations();
	void UpdateIconBlurOffset(float BlurOffset);
	void Construct();
	void SetAuraOffset(float AuraOffset_0);
	void PreConstruct(bool IsDesignTime);
	void SetVisiblePlayerIcon(bool bVisible, bool bEnableGrayscale);
	void SetupIconID(int32 ID, bool bConvertRewardNo);
	void OverrideIconMaterial(class UMaterialInterface* Material);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_PlayerIcon_C">();
	}
	static class UWB_PlayerIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PlayerIcon_C>();
	}
};
static_assert(alignof(UWB_PlayerIcon_C) == 0x000008, "Wrong alignment on UWB_PlayerIcon_C");
static_assert(sizeof(UWB_PlayerIcon_C) == 0x000280, "Wrong size on UWB_PlayerIcon_C");
static_assert(offsetof(UWB_PlayerIcon_C, UberGraphFrame) == 0x000248, "Member 'UWB_PlayerIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, Img_BG) == 0x000250, "Member 'UWB_PlayerIcon_C::Img_BG' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, Img_Flame) == 0x000258, "Member 'UWB_PlayerIcon_C::Img_Flame' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, PlayerIcon) == 0x000260, "Member 'UWB_PlayerIcon_C::PlayerIcon' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, WB_Aura) == 0x000268, "Member 'UWB_PlayerIcon_C::WB_Aura' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, PlayerIconID) == 0x000270, "Member 'UWB_PlayerIcon_C::PlayerIconID' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, AuraOffset) == 0x000274, "Member 'UWB_PlayerIcon_C::AuraOffset' has a wrong offset!");
static_assert(offsetof(UWB_PlayerIcon_C, DMI_PlayerIcon) == 0x000278, "Member 'UWB_PlayerIcon_C::DMI_PlayerIcon' has a wrong offset!");

}

