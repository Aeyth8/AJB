#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EmissionRate_RarityList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_EmissionRate_RarityList.WB_EmissionRate_RarityList_C
// 0x0048 (0x0250 - 0x0208)
class UWB_EmissionRate_RarityList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UAJBTextBlock*                          TEXT_RARE;                                         // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Rarity_C*                           WB_Rarity;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_EmptyStar_C*>                RarityList_Star;                                   // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Set_StarNum;                                       // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Set_PercentNum;                                    // 0x0238(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_WB_EmissionRate_RarityList(int32 EntryPoint);
	void SetTextPercentNum(const class FText& Set_PercentNum_0);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_EmissionRate_RarityList_C">();
	}
	static class UWB_EmissionRate_RarityList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_EmissionRate_RarityList_C>();
	}
};
static_assert(alignof(UWB_EmissionRate_RarityList_C) == 0x000008, "Wrong alignment on UWB_EmissionRate_RarityList_C");
static_assert(sizeof(UWB_EmissionRate_RarityList_C) == 0x000250, "Wrong size on UWB_EmissionRate_RarityList_C");
static_assert(offsetof(UWB_EmissionRate_RarityList_C, UberGraphFrame) == 0x000208, "Member 'UWB_EmissionRate_RarityList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_EmissionRate_RarityList_C, TEXT_RARE) == 0x000210, "Member 'UWB_EmissionRate_RarityList_C::TEXT_RARE' has a wrong offset!");
static_assert(offsetof(UWB_EmissionRate_RarityList_C, WB_Rarity) == 0x000218, "Member 'UWB_EmissionRate_RarityList_C::WB_Rarity' has a wrong offset!");
static_assert(offsetof(UWB_EmissionRate_RarityList_C, RarityList_Star) == 0x000220, "Member 'UWB_EmissionRate_RarityList_C::RarityList_Star' has a wrong offset!");
static_assert(offsetof(UWB_EmissionRate_RarityList_C, Set_StarNum) == 0x000230, "Member 'UWB_EmissionRate_RarityList_C::Set_StarNum' has a wrong offset!");
static_assert(offsetof(UWB_EmissionRate_RarityList_C, Set_PercentNum) == 0x000238, "Member 'UWB_EmissionRate_RarityList_C::Set_PercentNum' has a wrong offset!");

}

