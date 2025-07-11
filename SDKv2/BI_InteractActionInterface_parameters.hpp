#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_InteractActionInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_InteractActionInterface.BI_InteractActionInterface_C.CheckInteractable
// 0x0018 (0x0018 - 0x0000)
struct BI_InteractActionInterface_C_CheckInteractable final
{
public:
	class ABP_AJBInGameCharacter_C*               OperatorCharacter;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseTraceLength;                                   // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteractable;                                     // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_InteractActionInterface_C_CheckInteractable) == 0x000008, "Wrong alignment on BI_InteractActionInterface_C_CheckInteractable");
static_assert(sizeof(BI_InteractActionInterface_C_CheckInteractable) == 0x000018, "Wrong size on BI_InteractActionInterface_C_CheckInteractable");
static_assert(offsetof(BI_InteractActionInterface_C_CheckInteractable, OperatorCharacter) == 0x000000, "Member 'BI_InteractActionInterface_C_CheckInteractable::OperatorCharacter' has a wrong offset!");
static_assert(offsetof(BI_InteractActionInterface_C_CheckInteractable, TargetActor) == 0x000008, "Member 'BI_InteractActionInterface_C_CheckInteractable::TargetActor' has a wrong offset!");
static_assert(offsetof(BI_InteractActionInterface_C_CheckInteractable, BaseTraceLength) == 0x000010, "Member 'BI_InteractActionInterface_C_CheckInteractable::BaseTraceLength' has a wrong offset!");
static_assert(offsetof(BI_InteractActionInterface_C_CheckInteractable, bInteractable) == 0x000014, "Member 'BI_InteractActionInterface_C_CheckInteractable::bInteractable' has a wrong offset!");

// Function BI_InteractActionInterface.BI_InteractActionInterface_C.GetText
// 0x0020 (0x0020 - 0x0000)
struct BI_InteractActionInterface_C_GetText final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
};
static_assert(alignof(BI_InteractActionInterface_C_GetText) == 0x000008, "Wrong alignment on BI_InteractActionInterface_C_GetText");
static_assert(sizeof(BI_InteractActionInterface_C_GetText) == 0x000020, "Wrong size on BI_InteractActionInterface_C_GetText");
static_assert(offsetof(BI_InteractActionInterface_C_GetText, bSuccess) == 0x000000, "Member 'BI_InteractActionInterface_C_GetText::bSuccess' has a wrong offset!");
static_assert(offsetof(BI_InteractActionInterface_C_GetText, Text) == 0x000008, "Member 'BI_InteractActionInterface_C_GetText::Text' has a wrong offset!");

// Function BI_InteractActionInterface.BI_InteractActionInterface_C.GetPriority
// 0x0004 (0x0004 - 0x0000)
struct BI_InteractActionInterface_C_GetPriority final
{
public:
	int32                                         Priority;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_InteractActionInterface_C_GetPriority) == 0x000004, "Wrong alignment on BI_InteractActionInterface_C_GetPriority");
static_assert(sizeof(BI_InteractActionInterface_C_GetPriority) == 0x000004, "Wrong size on BI_InteractActionInterface_C_GetPriority");
static_assert(offsetof(BI_InteractActionInterface_C_GetPriority, Priority) == 0x000000, "Member 'BI_InteractActionInterface_C_GetPriority::Priority' has a wrong offset!");

// Function BI_InteractActionInterface.BI_InteractActionInterface_C.OnBeginInteract
// 0x0008 (0x0008 - 0x0000)
struct BI_InteractActionInterface_C_OnBeginInteract final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_InteractActionInterface_C_OnBeginInteract) == 0x000008, "Wrong alignment on BI_InteractActionInterface_C_OnBeginInteract");
static_assert(sizeof(BI_InteractActionInterface_C_OnBeginInteract) == 0x000008, "Wrong size on BI_InteractActionInterface_C_OnBeginInteract");
static_assert(offsetof(BI_InteractActionInterface_C_OnBeginInteract, TargetActor) == 0x000000, "Member 'BI_InteractActionInterface_C_OnBeginInteract::TargetActor' has a wrong offset!");

// Function BI_InteractActionInterface.BI_InteractActionInterface_C.OnEndInteract
// 0x0010 (0x0010 - 0x0000)
struct BI_InteractActionInterface_C_OnEndInteract final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceCancel;                                      // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_InteractActionInterface_C_OnEndInteract) == 0x000008, "Wrong alignment on BI_InteractActionInterface_C_OnEndInteract");
static_assert(sizeof(BI_InteractActionInterface_C_OnEndInteract) == 0x000010, "Wrong size on BI_InteractActionInterface_C_OnEndInteract");
static_assert(offsetof(BI_InteractActionInterface_C_OnEndInteract, TargetActor) == 0x000000, "Member 'BI_InteractActionInterface_C_OnEndInteract::TargetActor' has a wrong offset!");
static_assert(offsetof(BI_InteractActionInterface_C_OnEndInteract, bSuccess) == 0x000008, "Member 'BI_InteractActionInterface_C_OnEndInteract::bSuccess' has a wrong offset!");
static_assert(offsetof(BI_InteractActionInterface_C_OnEndInteract, bForceCancel) == 0x000009, "Member 'BI_InteractActionInterface_C_OnEndInteract::bForceCancel' has a wrong offset!");

// Function BI_InteractActionInterface.BI_InteractActionInterface_C.BeginInteract
// 0x0001 (0x0001 - 0x0000)
struct BI_InteractActionInterface_C_BeginInteract final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_InteractActionInterface_C_BeginInteract) == 0x000001, "Wrong alignment on BI_InteractActionInterface_C_BeginInteract");
static_assert(sizeof(BI_InteractActionInterface_C_BeginInteract) == 0x000001, "Wrong size on BI_InteractActionInterface_C_BeginInteract");
static_assert(offsetof(BI_InteractActionInterface_C_BeginInteract, bSuccess) == 0x000000, "Member 'BI_InteractActionInterface_C_BeginInteract::bSuccess' has a wrong offset!");

}

