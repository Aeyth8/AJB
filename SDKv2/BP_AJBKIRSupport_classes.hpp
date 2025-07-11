#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBKIRSupport

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBSupportSkillBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBKIRSupport.BP_AJBKIRSupport_C
// 0x0010 (0x0168 - 0x0158)
class UBP_AJBKIRSupport_C final : public UBP_AJBSupportSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBKIRSupport_C;                 // 0x0158(0x0008)(Transient, DuplicateTransient)
	float                                         Distance_cm_;                                      // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HPRate___;                                         // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBKIRSupport(int32 EntryPoint);
	void TrySpawnEmphasizeActor();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBKIRSupport_C">();
	}
	static class UBP_AJBKIRSupport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBKIRSupport_C>();
	}
};
static_assert(alignof(UBP_AJBKIRSupport_C) == 0x000008, "Wrong alignment on UBP_AJBKIRSupport_C");
static_assert(sizeof(UBP_AJBKIRSupport_C) == 0x000168, "Wrong size on UBP_AJBKIRSupport_C");
static_assert(offsetof(UBP_AJBKIRSupport_C, UberGraphFrame_BP_AJBKIRSupport_C) == 0x000158, "Member 'UBP_AJBKIRSupport_C::UberGraphFrame_BP_AJBKIRSupport_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBKIRSupport_C, Distance_cm_) == 0x000160, "Member 'UBP_AJBKIRSupport_C::Distance_cm_' has a wrong offset!");
static_assert(offsetof(UBP_AJBKIRSupport_C, HPRate___) == 0x000164, "Member 'UBP_AJBKIRSupport_C::HPRate___' has a wrong offset!");

}

