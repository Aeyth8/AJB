#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_HitEventReceiverInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_HitEventReceiverInterface.BI_HitEventReceiverInterface_C.NotifyHitEvent_Server
// 0x0010 (0x0010 - 0x0000)
struct BI_HitEventReceiverInterface_C_NotifyHitEvent_Server final
{
public:
	class AAJBInGameCharacterBase*                HitCharacter;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Causer;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Server) == 0x000008, "Wrong alignment on BI_HitEventReceiverInterface_C_NotifyHitEvent_Server");
static_assert(sizeof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Server) == 0x000010, "Wrong size on BI_HitEventReceiverInterface_C_NotifyHitEvent_Server");
static_assert(offsetof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Server, HitCharacter) == 0x000000, "Member 'BI_HitEventReceiverInterface_C_NotifyHitEvent_Server::HitCharacter' has a wrong offset!");
static_assert(offsetof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Server, Causer) == 0x000008, "Member 'BI_HitEventReceiverInterface_C_NotifyHitEvent_Server::Causer' has a wrong offset!");

// Function BI_HitEventReceiverInterface.BI_HitEventReceiverInterface_C.NotifyHitEvent_Client
// 0x0010 (0x0010 - 0x0000)
struct BI_HitEventReceiverInterface_C_NotifyHitEvent_Client final
{
public:
	class AAJBInGameCharacterBase*                HitCharacter;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Causer;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Client) == 0x000008, "Wrong alignment on BI_HitEventReceiverInterface_C_NotifyHitEvent_Client");
static_assert(sizeof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Client) == 0x000010, "Wrong size on BI_HitEventReceiverInterface_C_NotifyHitEvent_Client");
static_assert(offsetof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Client, HitCharacter) == 0x000000, "Member 'BI_HitEventReceiverInterface_C_NotifyHitEvent_Client::HitCharacter' has a wrong offset!");
static_assert(offsetof(BI_HitEventReceiverInterface_C_NotifyHitEvent_Client, Causer) == 0x000008, "Member 'BI_HitEventReceiverInterface_C_NotifyHitEvent_Client::Causer' has a wrong offset!");

}

