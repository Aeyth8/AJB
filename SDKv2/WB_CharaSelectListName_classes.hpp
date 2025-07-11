#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharaSelectListName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CharaSelectListName.WB_CharaSelectListName_C
// 0x0030 (0x0238 - 0x0208)
class UWB_CharaSelectListName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              AJBImage_0;                                        // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_1;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_Title;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECharacterBattleType                          BattleType;                                        // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_CharaSelectListName(int32 EntryPoint);
	void SetupWidgetSize(float WidthOverride);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CharaSelectListName_C">();
	}
	static class UWB_CharaSelectListName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CharaSelectListName_C>();
	}
};
static_assert(alignof(UWB_CharaSelectListName_C) == 0x000008, "Wrong alignment on UWB_CharaSelectListName_C");
static_assert(sizeof(UWB_CharaSelectListName_C) == 0x000238, "Wrong size on UWB_CharaSelectListName_C");
static_assert(offsetof(UWB_CharaSelectListName_C, UberGraphFrame) == 0x000208, "Member 'UWB_CharaSelectListName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharaSelectListName_C, AJBImage_0) == 0x000210, "Member 'UWB_CharaSelectListName_C::AJBImage_0' has a wrong offset!");
static_assert(offsetof(UWB_CharaSelectListName_C, AJBImage_1) == 0x000218, "Member 'UWB_CharaSelectListName_C::AJBImage_1' has a wrong offset!");
static_assert(offsetof(UWB_CharaSelectListName_C, Overlay_0) == 0x000220, "Member 'UWB_CharaSelectListName_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UWB_CharaSelectListName_C, Txt_Title) == 0x000228, "Member 'UWB_CharaSelectListName_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UWB_CharaSelectListName_C, BattleType) == 0x000230, "Member 'UWB_CharaSelectListName_C::BattleType' has a wrong offset!");

}

