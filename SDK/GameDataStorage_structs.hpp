#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameDataStorage

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct GameDataStorage.DataStorageSaveBase
// 0x0008 (0x0008 - 0x0000)
struct FDataStorageSaveBase
{
public:
	struct FGameplayTag                           Key;                                               // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveBase) == 0x000008, "Wrong alignment on FDataStorageSaveBase");
static_assert(sizeof(FDataStorageSaveBase) == 0x000008, "Wrong size on FDataStorageSaveBase");
static_assert(offsetof(FDataStorageSaveBase, Key) == 0x000000, "Member 'FDataStorageSaveBase::Key' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorageSaveString
// 0x0010 (0x0018 - 0x0008)
struct FDataStorageSaveString final : public FDataStorageSaveBase
{
public:
	TArray<class FString>                         Values;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveString) == 0x000008, "Wrong alignment on FDataStorageSaveString");
static_assert(sizeof(FDataStorageSaveString) == 0x000018, "Wrong size on FDataStorageSaveString");
static_assert(offsetof(FDataStorageSaveString, Values) == 0x000008, "Member 'FDataStorageSaveString::Values' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorage
// 0x01E0 (0x01E0 - 0x0000)
struct alignas(0x08) FDataStorage final
{
public:
	uint8                                         Pad_0[0x1E0];                                      // 0x0000(0x01E0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDataStorage) == 0x000008, "Wrong alignment on FDataStorage");
static_assert(sizeof(FDataStorage) == 0x0001E0, "Wrong size on FDataStorage");

// ScriptStruct GameDataStorage.DataStorageSaveByte
// 0x0010 (0x0018 - 0x0008)
struct FDataStorageSaveByte final : public FDataStorageSaveBase
{
public:
	TArray<uint8>                                 Values;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveByte) == 0x000008, "Wrong alignment on FDataStorageSaveByte");
static_assert(sizeof(FDataStorageSaveByte) == 0x000018, "Wrong size on FDataStorageSaveByte");
static_assert(offsetof(FDataStorageSaveByte, Values) == 0x000008, "Member 'FDataStorageSaveByte::Values' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorageSaveInt
// 0x0010 (0x0018 - 0x0008)
struct FDataStorageSaveInt final : public FDataStorageSaveBase
{
public:
	TArray<int32>                                 Values;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveInt) == 0x000008, "Wrong alignment on FDataStorageSaveInt");
static_assert(sizeof(FDataStorageSaveInt) == 0x000018, "Wrong size on FDataStorageSaveInt");
static_assert(offsetof(FDataStorageSaveInt, Values) == 0x000008, "Member 'FDataStorageSaveInt::Values' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorageSaveFloat
// 0x0010 (0x0018 - 0x0008)
struct FDataStorageSaveFloat final : public FDataStorageSaveBase
{
public:
	TArray<float>                                 Values;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveFloat) == 0x000008, "Wrong alignment on FDataStorageSaveFloat");
static_assert(sizeof(FDataStorageSaveFloat) == 0x000018, "Wrong size on FDataStorageSaveFloat");
static_assert(offsetof(FDataStorageSaveFloat, Values) == 0x000008, "Member 'FDataStorageSaveFloat::Values' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorageSaveVector
// 0x0010 (0x0018 - 0x0008)
struct FDataStorageSaveVector final : public FDataStorageSaveBase
{
public:
	TArray<struct FVector>                        Values;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveVector) == 0x000008, "Wrong alignment on FDataStorageSaveVector");
static_assert(sizeof(FDataStorageSaveVector) == 0x000018, "Wrong size on FDataStorageSaveVector");
static_assert(offsetof(FDataStorageSaveVector, Values) == 0x000008, "Member 'FDataStorageSaveVector::Values' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorageSaveRotator
// 0x0010 (0x0018 - 0x0008)
struct FDataStorageSaveRotator final : public FDataStorageSaveBase
{
public:
	TArray<struct FRotator>                       Values;                                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveRotator) == 0x000008, "Wrong alignment on FDataStorageSaveRotator");
static_assert(sizeof(FDataStorageSaveRotator) == 0x000018, "Wrong size on FDataStorageSaveRotator");
static_assert(offsetof(FDataStorageSaveRotator, Values) == 0x000008, "Member 'FDataStorageSaveRotator::Values' has a wrong offset!");

// ScriptStruct GameDataStorage.DataStorageSaveData
// 0x0060 (0x0060 - 0x0000)
struct FDataStorageSaveData final
{
public:
	TArray<struct FDataStorageSaveByte>           ByteValues;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataStorageSaveInt>            IntValues;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataStorageSaveFloat>          FloatValues;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataStorageSaveString>         StringValues;                                      // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataStorageSaveVector>         VectorValues;                                      // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataStorageSaveRotator>        RotatorValues;                                     // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataStorageSaveData) == 0x000008, "Wrong alignment on FDataStorageSaveData");
static_assert(sizeof(FDataStorageSaveData) == 0x000060, "Wrong size on FDataStorageSaveData");
static_assert(offsetof(FDataStorageSaveData, ByteValues) == 0x000000, "Member 'FDataStorageSaveData::ByteValues' has a wrong offset!");
static_assert(offsetof(FDataStorageSaveData, IntValues) == 0x000010, "Member 'FDataStorageSaveData::IntValues' has a wrong offset!");
static_assert(offsetof(FDataStorageSaveData, FloatValues) == 0x000020, "Member 'FDataStorageSaveData::FloatValues' has a wrong offset!");
static_assert(offsetof(FDataStorageSaveData, StringValues) == 0x000030, "Member 'FDataStorageSaveData::StringValues' has a wrong offset!");
static_assert(offsetof(FDataStorageSaveData, VectorValues) == 0x000040, "Member 'FDataStorageSaveData::VectorValues' has a wrong offset!");
static_assert(offsetof(FDataStorageSaveData, RotatorValues) == 0x000050, "Member 'FDataStorageSaveData::RotatorValues' has a wrong offset!");

}

