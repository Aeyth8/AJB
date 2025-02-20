#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreenSystem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class LoadingScreenSystem.LoadingScreenInterface
// 0x0000 (0x0028 - 0x0028)
class ILoadingScreenInterface final : public IInterface
{
public:
	void InitializeLoadingScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenInterface">();
	}
	static class ILoadingScreenInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILoadingScreenInterface>();
	}
};
static_assert(alignof(ILoadingScreenInterface) == 0x000008, "Wrong alignment on ILoadingScreenInterface");
static_assert(sizeof(ILoadingScreenInterface) == 0x000028, "Wrong size on ILoadingScreenInterface");

// Class LoadingScreenSystem.LoadingScreenManager
// 0x0050 (0x0078 - 0x0028)
class ULoadingScreenManager : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                LoadingScreenWidgetClass;                          // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LoadingScreenContentType;                          // 0x0040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreInputLoadingScreenWidget;                   // 0x0048(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bManualMode;                                       // 0x0049(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            LoadingScreenWidget;                               // 0x0050(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                          OwnerGameInstance;                                 // 0x0058(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedIntegerLength;                               // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedFloatLength;                                 // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedStringLength;                                // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedVectorLength;                                // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedRotatorLength;                               // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Finalize();
	void Initialize(class UGameInstance* GameInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenManager">();
	}
	static class ULoadingScreenManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenManager>();
	}
};
static_assert(alignof(ULoadingScreenManager) == 0x000008, "Wrong alignment on ULoadingScreenManager");
static_assert(sizeof(ULoadingScreenManager) == 0x000078, "Wrong size on ULoadingScreenManager");
static_assert(offsetof(ULoadingScreenManager, LoadingScreenWidgetClass) == 0x000038, "Member 'ULoadingScreenManager::LoadingScreenWidgetClass' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, LoadingScreenContentType) == 0x000040, "Member 'ULoadingScreenManager::LoadingScreenContentType' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, bIgnoreInputLoadingScreenWidget) == 0x000048, "Member 'ULoadingScreenManager::bIgnoreInputLoadingScreenWidget' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, bManualMode) == 0x000049, "Member 'ULoadingScreenManager::bManualMode' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, LoadingScreenWidget) == 0x000050, "Member 'ULoadingScreenManager::LoadingScreenWidget' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, OwnerGameInstance) == 0x000058, "Member 'ULoadingScreenManager::OwnerGameInstance' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, CachedIntegerLength) == 0x000060, "Member 'ULoadingScreenManager::CachedIntegerLength' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, CachedFloatLength) == 0x000064, "Member 'ULoadingScreenManager::CachedFloatLength' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, CachedStringLength) == 0x000068, "Member 'ULoadingScreenManager::CachedStringLength' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, CachedVectorLength) == 0x00006C, "Member 'ULoadingScreenManager::CachedVectorLength' has a wrong offset!");
static_assert(offsetof(ULoadingScreenManager, CachedRotatorLength) == 0x000070, "Member 'ULoadingScreenManager::CachedRotatorLength' has a wrong offset!");

// Class LoadingScreenSystem.LoadingScreenSystemBPLibrary
// 0x0000 (0x0028 - 0x0028)
class ULoadingScreenSystemBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class ULoadingScreenManager* CreateManager(class UGameInstance* GameInstance, TSubclassOf<class ULoadingScreenManager> LoadingScreenManagerClass);
	static void DestroyManager();
	static void EndManualLoadingScreen();
	static bool GetCacheFloat(const int32 Index_0, float* OutValue);
	static bool GetCacheInteger(const int32 Index_0, int32* OutValue);
	static bool GetCacheRotator(const int32 Index_0, struct FRotator* OutValue);
	static bool GetCacheString(const int32 Index_0, class FString* OutValue);
	static bool GetCacheVector(const int32 Index_0, struct FVector* OutValue);
	static class UUserWidget* GetLoadingScreenWidget();
	static class ULoadingScreenManager* GetManager();
	static bool SetCacheFloat(const int32 Index_0, const float Value);
	static bool SetCacheInteger(const int32 Index_0, const int32 Value);
	static bool SetCacheRotator(const int32 Index_0, const struct FRotator& Value);
	static bool SetCacheString(const int32 Index_0, const class FString& Value);
	static bool SetCacheVector(const int32 Index_0, const struct FVector& Value);
	static void SetEnableAutoLoadingScreen();
	static void SetupLoadingScreenWidgetClass(TSubclassOf<class UUserWidget> NewWidgetClass);
	static void StartManualLoadingScreen(bool bIgnoreInputLoadingScreen);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenSystemBPLibrary">();
	}
	static class ULoadingScreenSystemBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenSystemBPLibrary>();
	}
};
static_assert(alignof(ULoadingScreenSystemBPLibrary) == 0x000008, "Wrong alignment on ULoadingScreenSystemBPLibrary");
static_assert(sizeof(ULoadingScreenSystemBPLibrary) == 0x000028, "Wrong size on ULoadingScreenSystemBPLibrary");

}

