#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBWaitTime_Paramed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AJBWaitTime_Paramed.BTT_AJBWaitTime_Paramed_C
// 0x0028 (0x00C8 - 0x00A0)
class UBTT_AJBWaitTime_Paramed_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	class FName                                   WaitTimeBase;                                      // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   WaitTimeDeviation;                                 // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WaitTimeBaseParam;                                 // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WaitTimeDeviationParam;                            // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WaitTimeCurrent;                                   // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_AJBWaitTime_Paramed(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AJBWaitTime_Paramed_C">();
	}
	static class UBTT_AJBWaitTime_Paramed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AJBWaitTime_Paramed_C>();
	}
};
static_assert(alignof(UBTT_AJBWaitTime_Paramed_C) == 0x000008, "Wrong alignment on UBTT_AJBWaitTime_Paramed_C");
static_assert(sizeof(UBTT_AJBWaitTime_Paramed_C) == 0x0000C8, "Wrong size on UBTT_AJBWaitTime_Paramed_C");
static_assert(offsetof(UBTT_AJBWaitTime_Paramed_C, UberGraphFrame) == 0x0000A0, "Member 'UBTT_AJBWaitTime_Paramed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AJBWaitTime_Paramed_C, WaitTimeBase) == 0x0000A8, "Member 'UBTT_AJBWaitTime_Paramed_C::WaitTimeBase' has a wrong offset!");
static_assert(offsetof(UBTT_AJBWaitTime_Paramed_C, WaitTimeDeviation) == 0x0000B0, "Member 'UBTT_AJBWaitTime_Paramed_C::WaitTimeDeviation' has a wrong offset!");
static_assert(offsetof(UBTT_AJBWaitTime_Paramed_C, WaitTimeBaseParam) == 0x0000B8, "Member 'UBTT_AJBWaitTime_Paramed_C::WaitTimeBaseParam' has a wrong offset!");
static_assert(offsetof(UBTT_AJBWaitTime_Paramed_C, WaitTimeDeviationParam) == 0x0000BC, "Member 'UBTT_AJBWaitTime_Paramed_C::WaitTimeDeviationParam' has a wrong offset!");
static_assert(offsetof(UBTT_AJBWaitTime_Paramed_C, WaitTimeCurrent) == 0x0000C0, "Member 'UBTT_AJBWaitTime_Paramed_C::WaitTimeCurrent' has a wrong offset!");

}

