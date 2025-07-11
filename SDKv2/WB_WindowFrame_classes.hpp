#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_WindowFrame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_WindowFrame.WB_WindowFrame_C
// 0x0038 (0x0240 - 0x0208)
class UWB_WindowFrame_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               TitleRoot;                                         // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_Title;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0220(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bVisibleTitle;                                     // 0x0238(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_WindowFrame(int32 EntryPoint);
	void SetTextTitle(const class FText& InText);
	void SetVisibleTitle(bool bVisible);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_WindowFrame_C">();
	}
	static class UWB_WindowFrame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_WindowFrame_C>();
	}
};
static_assert(alignof(UWB_WindowFrame_C) == 0x000008, "Wrong alignment on UWB_WindowFrame_C");
static_assert(sizeof(UWB_WindowFrame_C) == 0x000240, "Wrong size on UWB_WindowFrame_C");
static_assert(offsetof(UWB_WindowFrame_C, UberGraphFrame) == 0x000208, "Member 'UWB_WindowFrame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_WindowFrame_C, TitleRoot) == 0x000210, "Member 'UWB_WindowFrame_C::TitleRoot' has a wrong offset!");
static_assert(offsetof(UWB_WindowFrame_C, Txt_Title) == 0x000218, "Member 'UWB_WindowFrame_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UWB_WindowFrame_C, Title) == 0x000220, "Member 'UWB_WindowFrame_C::Title' has a wrong offset!");
static_assert(offsetof(UWB_WindowFrame_C, bVisibleTitle) == 0x000238, "Member 'UWB_WindowFrame_C::bVisibleTitle' has a wrong offset!");

}

