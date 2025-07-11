#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBKillerRushSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBCloseRangeSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBKillerRushSkill.BP_AJBKillerRushSkill_C
// 0x0008 (0x0390 - 0x0388)
class UBP_AJBKillerRushSkill_C final : public UBP_AJBCloseRangeSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBKillerRushSkill_C;            // 0x0388(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AJBKillerRushSkill(int32 EntryPoint);
	void SpeakRushVoice();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBKillerRushSkill_C">();
	}
	static class UBP_AJBKillerRushSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBKillerRushSkill_C>();
	}
};
static_assert(alignof(UBP_AJBKillerRushSkill_C) == 0x000008, "Wrong alignment on UBP_AJBKillerRushSkill_C");
static_assert(sizeof(UBP_AJBKillerRushSkill_C) == 0x000390, "Wrong size on UBP_AJBKillerRushSkill_C");
static_assert(offsetof(UBP_AJBKillerRushSkill_C, UberGraphFrame_BP_AJBKillerRushSkill_C) == 0x000388, "Member 'UBP_AJBKillerRushSkill_C::UberGraphFrame_BP_AJBKillerRushSkill_C' has a wrong offset!");

}

