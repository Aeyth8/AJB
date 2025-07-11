#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test1_BTT_Attack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass test1_BTT_Attack.test1_BTT_Attack_C
// 0x0018 (0x00B8 - 0x00A0)
class UTest1_BTT_Attack_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	float                                         AttackRate;                                        // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 UseSkill;                                          // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_test1_BTT_Attack(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"test1_BTT_Attack_C">();
	}
	static class UTest1_BTT_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTest1_BTT_Attack_C>();
	}
};
static_assert(alignof(UTest1_BTT_Attack_C) == 0x000008, "Wrong alignment on UTest1_BTT_Attack_C");
static_assert(sizeof(UTest1_BTT_Attack_C) == 0x0000B8, "Wrong size on UTest1_BTT_Attack_C");
static_assert(offsetof(UTest1_BTT_Attack_C, UberGraphFrame) == 0x0000A0, "Member 'UTest1_BTT_Attack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTest1_BTT_Attack_C, AttackRate) == 0x0000A8, "Member 'UTest1_BTT_Attack_C::AttackRate' has a wrong offset!");
static_assert(offsetof(UTest1_BTT_Attack_C, UseSkill) == 0x0000B0, "Member 'UTest1_BTT_Attack_C::UseSkill' has a wrong offset!");

}

