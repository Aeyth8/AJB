#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_AJBWwiseFunctionLibrary

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "E_WwiseManagerPlayMode_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventOnLocal
// 0x0060 (0x0060 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoPost;                                         // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAutoDestroy;                                      // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           AkComponent;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_PostWwiseEventOnLocal_AkComponent;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal) == 0x000060, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, EventTag) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::EventTag' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, Location) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::Location' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, bAutoPost) == 0x000014, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::bAutoPost' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, bAutoDestroy) == 0x000015, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::bAutoDestroy' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, __WorldContext) == 0x000018, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, AkComponent) == 0x000020, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::AkComponent' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_IsDedicatedServer_ReturnValue) == 0x000038, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_Array_Get_Item) == 0x000040, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_PostWwiseEventOnLocal_AkComponent) == 0x000050, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_PostWwiseEventOnLocal_AkComponent' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000059, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnLocal::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventAttachedOnLocal
// 0x0068 (0x0068 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoPost;                                         // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAutoDestroy;                                      // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bKeepRelative;                                     // 0x0016(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        AttachToComponent;                                 // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           AkComponent;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_PostWwiseEventAttachedOnLocal_AkComponent; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal) == 0x000068, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, EventTag) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::EventTag' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, Location) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::Location' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, bAutoPost) == 0x000014, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::bAutoPost' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, bAutoDestroy) == 0x000015, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::bAutoDestroy' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, bKeepRelative) == 0x000016, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::bKeepRelative' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, AttachToComponent) == 0x000018, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::AttachToComponent' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, __WorldContext) == 0x000020, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, AkComponent) == 0x000028, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::AkComponent' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_GetAllActorsOfClass_OutActors) == 0x000030, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_IsDedicatedServer_ReturnValue) == 0x000040, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_Array_Get_Item) == 0x000048, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_PostWwiseEventAttachedOnLocal_AkComponent) == 0x000058, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_PostWwiseEventAttachedOnLocal_AkComponent' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000061, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnLocal::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventOnAll
// 0x0048 (0x0048 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll) == 0x000048, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, EventTag) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::EventTag' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, Location) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::Location' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, __WorldContext) == 0x000018, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000030, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, CallFunc_Array_Get_Item) == 0x000038, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventOnAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseEventAttachedOnAll
// 0x0050 (0x0050 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bKeepRelative;                                     // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneComponentToAttach;                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll) == 0x000050, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, EventTag) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::EventTag' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, Location) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::Location' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, bKeepRelative) == 0x000014, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::bKeepRelative' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, SceneComponentToAttach) == 0x000018, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::SceneComponentToAttach' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, __WorldContext) == 0x000020, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000038, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, CallFunc_Array_Get_Item) == 0x000040, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseEventAttachedOnAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseBGM_Event
// 0x0040 (0x0040 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldPlayFromStart;                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event) == 0x000040, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, EventTag) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::EventTag' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, bShouldPlayFromStart) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::bShouldPlayFromStart' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, __WorldContext) == 0x000010, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, CallFunc_IsDedicatedServer_ReturnValue) == 0x000028, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, CallFunc_Array_Get_Item) == 0x000030, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00003A, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_Event::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.RequestWwiseBGM_StopEvent
// 0x0030 (0x0030 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent) == 0x000030, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, __WorldContext) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, CallFunc_Array_Get_Item) == 0x000020, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00002A, "Member 'BPF_AJBWwiseFunctionLibrary_C_RequestWwiseBGM_StopEvent::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BPF_AJBWwiseFunctionLibrary.BPF_AJBWwiseFunctionLibrary_C.ChangeWwisePlayMode
// 0x0030 (0x0030 - 0x0000)
struct BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode final
{
public:
	E_WwiseManagerPlayMode                        PlayMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AJBWwiseManager_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBWwiseManager_C*                  CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode) == 0x000008, "Wrong alignment on BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode");
static_assert(sizeof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode) == 0x000030, "Wrong size on BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode, PlayMode) == 0x000000, "Member 'BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode::PlayMode' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode, __WorldContext) == 0x000008, "Member 'BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000020, "Member 'BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode, CallFunc_Array_Get_Item) == 0x000028, "Member 'BPF_AJBWwiseFunctionLibrary_C_ChangeWwisePlayMode::CallFunc_Array_Get_Item' has a wrong offset!");

}

