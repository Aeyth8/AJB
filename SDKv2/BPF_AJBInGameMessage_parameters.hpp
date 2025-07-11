#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_AJBInGameMessage

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPF_AJBInGameMessage.BPF_AJBInGameMessage_C.ConvertActionLogTypeByMessageType
// 0x0018 (0x0018 - 0x0000)
struct BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActionLogType;                                     // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType) == 0x000008, "Wrong alignment on BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType");
static_assert(sizeof(BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType) == 0x000018, "Wrong size on BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType, Type) == 0x000000, "Member 'BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType::Type' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType, __WorldContext) == 0x000008, "Member 'BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType, ActionLogType) == 0x000010, "Member 'BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType::ActionLogType' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BPF_AJBInGameMessage_C_ConvertActionLogTypeByMessageType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BPF_AJBInGameMessage.BPF_AJBInGameMessage_C.IsActionLogMessageType
// 0x0018 (0x0018 - 0x0000)
struct BPF_AJBInGameMessage_C_IsActionLogMessageType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_AJBInGameMessage_C_IsActionLogMessageType) == 0x000008, "Wrong alignment on BPF_AJBInGameMessage_C_IsActionLogMessageType");
static_assert(sizeof(BPF_AJBInGameMessage_C_IsActionLogMessageType) == 0x000018, "Wrong size on BPF_AJBInGameMessage_C_IsActionLogMessageType");
static_assert(offsetof(BPF_AJBInGameMessage_C_IsActionLogMessageType, Type) == 0x000000, "Member 'BPF_AJBInGameMessage_C_IsActionLogMessageType::Type' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_IsActionLogMessageType, __WorldContext) == 0x000008, "Member 'BPF_AJBInGameMessage_C_IsActionLogMessageType::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_IsActionLogMessageType, ReturnValue) == 0x000010, "Member 'BPF_AJBInGameMessage_C_IsActionLogMessageType::ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_IsActionLogMessageType, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000011, "Member 'BPF_AJBInGameMessage_C_IsActionLogMessageType::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_IsActionLogMessageType, CallFunc_Less_IntInt_ReturnValue) == 0x000012, "Member 'BPF_AJBInGameMessage_C_IsActionLogMessageType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_IsActionLogMessageType, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BPF_AJBInGameMessage_C_IsActionLogMessageType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BPF_AJBInGameMessage.BPF_AJBInGameMessage_C.ConvertMessageTypeByActionLogType
// 0x0018 (0x0018 - 0x0000)
struct BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType final
{
public:
	int32                                         ActionLogType;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType) == 0x000008, "Wrong alignment on BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType");
static_assert(sizeof(BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType) == 0x000018, "Wrong size on BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType, ActionLogType) == 0x000000, "Member 'BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType::ActionLogType' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType, __WorldContext) == 0x000008, "Member 'BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType, Type) == 0x000010, "Member 'BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType::Type' has a wrong offset!");
static_assert(offsetof(BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'BPF_AJBInGameMessage_C_ConvertMessageTypeByActionLogType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

}

