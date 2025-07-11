#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test1_BTT_Wait

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass test1_BTT_Wait.test1_BTT_Wait_C
// 0x0010 (0x00B0 - 0x00A0)
class UTest1_BTT_Wait_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	float                                         WaitTime;                                          // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomDeviation;                                   // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_test1_BTT_Wait(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"test1_BTT_Wait_C">();
	}
	static class UTest1_BTT_Wait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTest1_BTT_Wait_C>();
	}
};
static_assert(alignof(UTest1_BTT_Wait_C) == 0x000008, "Wrong alignment on UTest1_BTT_Wait_C");
static_assert(sizeof(UTest1_BTT_Wait_C) == 0x0000B0, "Wrong size on UTest1_BTT_Wait_C");
static_assert(offsetof(UTest1_BTT_Wait_C, UberGraphFrame) == 0x0000A0, "Member 'UTest1_BTT_Wait_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTest1_BTT_Wait_C, WaitTime) == 0x0000A8, "Member 'UTest1_BTT_Wait_C::WaitTime' has a wrong offset!");
static_assert(offsetof(UTest1_BTT_Wait_C, RandomDeviation) == 0x0000AC, "Member 'UTest1_BTT_Wait_C::RandomDeviation' has a wrong offset!");

}

