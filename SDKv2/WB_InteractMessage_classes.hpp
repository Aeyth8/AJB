#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_InteractMessage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "EInteractTextColor_structs.hpp"
#include "AJB_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_InteractMessage.WB_InteractMessage_C
// 0x0040 (0x0248 - 0x0208)
class UWB_InteractMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              Img_Button;                                        // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Text_Message;                                      // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         IntaractionMessageList;                            // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EAJBPadIconType                               PadType;                                           // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x3];                                      // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           InactiveColor;                                     // 0x0234(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_InteractMessage(int32 EntryPoint);
	void OnChangedPadicon();
	void OnChangeErrorCondition(bool bErrorCondition, uint8 ErrorConditionType);
	void PreConstruct(bool IsDesignTime);
	void OnChangeInteractActor(class ABP_AJBInGameCharacter_C* OperatorCharacter, class AActor* InteractActor);
	void ChangeColor();
	void UpdateTextColor(EInteractTextColor Selection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_InteractMessage_C">();
	}
	static class UWB_InteractMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_InteractMessage_C>();
	}
};
static_assert(alignof(UWB_InteractMessage_C) == 0x000008, "Wrong alignment on UWB_InteractMessage_C");
static_assert(sizeof(UWB_InteractMessage_C) == 0x000248, "Wrong size on UWB_InteractMessage_C");
static_assert(offsetof(UWB_InteractMessage_C, UberGraphFrame) == 0x000208, "Member 'UWB_InteractMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_InteractMessage_C, Img_Button) == 0x000210, "Member 'UWB_InteractMessage_C::Img_Button' has a wrong offset!");
static_assert(offsetof(UWB_InteractMessage_C, Text_Message) == 0x000218, "Member 'UWB_InteractMessage_C::Text_Message' has a wrong offset!");
static_assert(offsetof(UWB_InteractMessage_C, IntaractionMessageList) == 0x000220, "Member 'UWB_InteractMessage_C::IntaractionMessageList' has a wrong offset!");
static_assert(offsetof(UWB_InteractMessage_C, PadType) == 0x000230, "Member 'UWB_InteractMessage_C::PadType' has a wrong offset!");
static_assert(offsetof(UWB_InteractMessage_C, InactiveColor) == 0x000234, "Member 'UWB_InteractMessage_C::InactiveColor' has a wrong offset!");

}

