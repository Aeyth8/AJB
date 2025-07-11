#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSimpleMatchHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBOutGameHUD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBSimpleMatchHUD.BP_AJBSimpleMatchHUD_C
// 0x0010 (0x0588 - 0x0578)
class ABP_AJBSimpleMatchHUD_C final : public ABP_AJBOutGameHUD_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBSimpleMatchHUD_C;             // 0x0578(0x0008)(Transient, DuplicateTransient)
	bool                                          bCharacterSelect;                                  // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBSimpleMatchHUD(int32 EntryPoint);
	void BeginplayFadeInOut();
	void Finished_AED095FE4FD6B8CEBAC02496C9F278F7();
	void Finished_B844E74940F3A4CBD672FCA63F12DE8F();
	void OnBegin_SelectCharacter(const struct FGameplayTag& PrevState);
	void OnFinishedIntro();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBSimpleMatchHUD_C">();
	}
	static class ABP_AJBSimpleMatchHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBSimpleMatchHUD_C>();
	}
};
static_assert(alignof(ABP_AJBSimpleMatchHUD_C) == 0x000008, "Wrong alignment on ABP_AJBSimpleMatchHUD_C");
static_assert(sizeof(ABP_AJBSimpleMatchHUD_C) == 0x000588, "Wrong size on ABP_AJBSimpleMatchHUD_C");
static_assert(offsetof(ABP_AJBSimpleMatchHUD_C, UberGraphFrame_BP_AJBSimpleMatchHUD_C) == 0x000578, "Member 'ABP_AJBSimpleMatchHUD_C::UberGraphFrame_BP_AJBSimpleMatchHUD_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBSimpleMatchHUD_C, bCharacterSelect) == 0x000580, "Member 'ABP_AJBSimpleMatchHUD_C::bCharacterSelect' has a wrong offset!");

}

