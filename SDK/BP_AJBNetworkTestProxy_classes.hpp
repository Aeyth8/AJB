#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBNetworkTestProxy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBNetworkTestProxy.BP_AJBNetworkTestProxy_C
// 0x0018 (0x0340 - 0x0328)
class ABP_AJBNetworkTestProxy_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNetHttp*                               NetHttp;                                           // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBNetworkTestProxy(int32 EntryPoint);
	void RequestGameServerTest();
	void ReceiveBeginPlay();
	void OnSuccess_A97A969547DB49218203D18F22CD930E(EAJBNetAPIResult Result);
	void OnFailed_A97A969547DB49218203D18F22CD930E(EAJBNetAPIResult Result);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBNetworkTestProxy_C">();
	}
	static class ABP_AJBNetworkTestProxy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBNetworkTestProxy_C>();
	}
};
static_assert(alignof(ABP_AJBNetworkTestProxy_C) == 0x000008, "Wrong alignment on ABP_AJBNetworkTestProxy_C");
static_assert(sizeof(ABP_AJBNetworkTestProxy_C) == 0x000340, "Wrong size on ABP_AJBNetworkTestProxy_C");
static_assert(offsetof(ABP_AJBNetworkTestProxy_C, UberGraphFrame) == 0x000328, "Member 'ABP_AJBNetworkTestProxy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBNetworkTestProxy_C, DefaultSceneRoot) == 0x000330, "Member 'ABP_AJBNetworkTestProxy_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBNetworkTestProxy_C, NetHttp) == 0x000338, "Member 'ABP_AJBNetworkTestProxy_C::NetHttp' has a wrong offset!");

}

