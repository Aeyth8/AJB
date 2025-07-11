#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBPushContext

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AJBPushContext.BTT_AJBPushContext_C
// 0x0018 (0x00B8 - 0x00A0)
class UBTT_AJBPushContext_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           TagToPush;                                         // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsErrorContext;                                   // 0x00B0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BTT_AJBPushContext(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AJBPushContext_C">();
	}
	static class UBTT_AJBPushContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AJBPushContext_C>();
	}
};
static_assert(alignof(UBTT_AJBPushContext_C) == 0x000008, "Wrong alignment on UBTT_AJBPushContext_C");
static_assert(sizeof(UBTT_AJBPushContext_C) == 0x0000B8, "Wrong size on UBTT_AJBPushContext_C");
static_assert(offsetof(UBTT_AJBPushContext_C, UberGraphFrame) == 0x0000A0, "Member 'UBTT_AJBPushContext_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AJBPushContext_C, TagToPush) == 0x0000A8, "Member 'UBTT_AJBPushContext_C::TagToPush' has a wrong offset!");
static_assert(offsetof(UBTT_AJBPushContext_C, bIsErrorContext) == 0x0000B0, "Member 'UBTT_AJBPushContext_C::bIsErrorContext' has a wrong offset!");

}

