#pragma once
#include "../../Dumper-7/SDK/Engine_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

// This doesn't belong here but I don't have time to bother rearranging everything right now.

struct FActorSpawnParameters
{
	SDK::FName Name;

	SDK::AActor* Template;

	SDK::AActor* Owner;

	SDK::APawn* Instigator;

	SDK::ULevel* OverrideLevel;

	SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
};

namespace A8CL
{
	enum EObjectFlags : __int32
	{
		// -- EObjectFlags

		NoFlags							= 0x00000000,

		Public							= 0x00000001,
		Standalone						= 0x00000002,
		MarkAsNative					= 0x00000004,
		Transactional					= 0x00000008,
		ClassDefaultObject				= 0x00000010,
		ArchetypeObject					= 0x00000020,
		Transient						= 0x00000040,

		MarkAsRootSet					= 0x00000080,
		TagGarbageTemp					= 0x00000100,

		NeedInitialization				= 0x00000200,
		NeedLoad						= 0x00000400,
		KeepForCooker					= 0x00000800,
		NeedPostLoad					= 0x00001000,
		NeedPostLoadSubObjects			= 0x00002000,
		NewerVersionExists				= 0x00004000,
		BeginDestroyed					= 0x00008000,
		FinishDestroyed					= 0x00010000,

		BeingRegenerated				= 0x00020000,
		DefaultSubObject				= 0x00040000,
		WasLoaded						= 0x00080000,
		TextExportTransient				= 0x00100000,
		LoadCompleted					= 0x00200000,
		InheritableComponentTemplate	= 0x00400000,
		DuplicateTransient				= 0x00800000,
		StrongRefOnFrame				= 0x01000000,
		NonPIEDuplicateTransient		= 0x02000000,
		Dynamic							= 0x04000000,
		WillBeLoaded					= 0x08000000,
		HasExternalPackage				= 0x10000000,

		MirroredGarbage					= 0x40000000,
		AllocatedInSharedPage			= 0x80000000,

		// -- EInternalObjectFlags 

		ReachableInCluster				= 1 << 23, /// If an external reference to the Object in cluster exists.
		ClusterRoot						= 1 << 24, /// Root of a cluster.
		Native							= 1 << 25, /// Native (UClass only). 
		Async							= 1 << 26, /// If Object exists only on a different thread than the game thread.
		AsyncLoading					= 1 << 27, /// If Object is being asynchronously loaded.
		Unreachable						= 1 << 28, /// If Object is not reachable on the object graph.
		PendingKill						= 1 << 29, /// If Object is pending destruction.
		RootSet							= 1 << 30, /// Object will not be garbage collected, even if unreferenced.
		HadReferenceKilled				= 1 << 31, /// If Object had a reference nulled out by MarkPendingKill.

		GarbageCollectionKeepFlags = Native | Async | AsyncLoading,

		AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet | HadReferenceKilled
	};

	constexpr const static char* StringObjectFlags[44]
	{
		"NoFlags", "Public", "Standalone", "MarkAsNative", "Transactional", "ClassDefaultObject", "ArchetypeObject", "Transient", "MarkAsRootSet", "TagGarbageTemp", "NeedInitialization", "NeedLoad",
		"KeepForCooker", "NeedPostLoad", "NeedPostLoadSubObjects", "NewerVersionExists", "BeginDestroyed", "FinishDestroyed", "BeingRegenerated", "DefaultSubObject", "WasLoaded", "TextExportTransient",
		"LoadCompleted", "InheritableComponentTemplate", "DuplicateTransient", "StrongRefOnFrame", "NonPIEDuplicateTransient", "Dynamic", "WillBeLoaded", "HasExternalPackage", "MirroredGarbage",
		"AllocatedInSharedPage", "ReachableInCluster", "ClusterRoot", "Native", "Async", "AsyncLoading", "Unreachable", "PendingKill", "RootSet", "HadReferenceKilled", "GarbageCollectionKeepFlags", "AllFlags",

		"Unknown Flag"
	};


namespace Pointers
{
	SDK::UEngine* const& UEngine(const bool bLog = true);
	SDK::UWorld* UWorld(const bool bLog = true);
	
	// Returns Player0 by default.
	// * * A replicated client only has access to their PlayerController. 
	SDK::APlayerController* Player(const int Index = 0);

	// Much more convenient class casted template for custom controller classes.  
	template <typename UClass>
	UClass* const& Player(const int& Index = 0)
	{
		SDK::APlayerController* PlayerController = Player(Index);

		if (PlayerController && PlayerController->IsA(UClass::StaticClass()))
		{
			return static_cast<UClass*>(PlayerController);
		}

		return nullptr;
	}

	const SDK::FName& FString2FName(const SDK::FString& String);

	bool ConstructUConsole(SDK::UEngine* EngineOverride, const SDK::FString ConsoleKey = L"Tilde");
	bool ConstructUConsole(const SDK::FString ConsoleKey = L"Tilde");

	template <typename UClass>
	std::vector<UClass*> FindObjects(bool IncludeDefaultObjects = true)
	{
		// Iterates through all of the GObjects array and returns a vector containing all found objects that match types.

		SDK::UObject* CurrentObject;
		std::vector<UClass*> ObjectsList;

		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			CurrentObject = SDK::UObject::GObjects->GetByIndex(i);

			if (!CurrentObject) continue;

			if (CurrentObject->IsA(UClass::StaticClass()))
			{
				if (!IncludeDefaultObjects && CurrentObject->IsDefaultObject()) continue;
				ObjectsList.push_back((UClass*)CurrentObject);
			}
		}

		return ObjectsList;
	}

	template <typename UClass>
	UClass* GetLastOf(bool IncludeDefaultObjects = true)
	{
		return Pointers::FindObjects<UClass>(IncludeDefaultObjects).back();
	}

	std::vector<EObjectFlags> EGetObjectFlags(SDK::UObject* Object);
	std::vector<const char*> sGetObjectFlags(SDK::UObject* Object);

	bool ObjectHasFlag(SDK::UObject* Object, EObjectFlags Flag);

	template <short ArraySize>
	bool ObjectHasFlags(SDK::UObject* Object, const EObjectFlags(&Flags)[ArraySize])
	{
		for (short i{0}; i < ArraySize; ++i)
		{
			if (!ObjectHasFlag(Object, Flags[i])) return false;
		}

		return true;
	}

	__int64* SpawnActorInternal(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, struct FActorSpawnParameters& SpawnParameters);

	template <typename UClass>
	UClass* SpawnActor(SDK::UWorld* World = UWorld(), SDK::UClass* Class = UClass::StaticClass(), SDK::FVector Location = SDK::FVector(), SDK::FRotator Rotation = SDK::FRotator(), FActorSpawnParameters SpawnParameters = FActorSpawnParameters{})
	{
		return reinterpret_cast<UClass*>(SpawnActorInternal(World, Class, Location, Rotation, SpawnParameters));
	}

	template <typename UClass>
	UClass* SpawnActor(struct FActorSpawnParameters& SpawnParameters)
	{
		return SpawnActor<UClass>(UWorld(), UClass::StaticClass(), SDK::FVector(), SDK::FRotator(), SpawnParameters);
	}




};

	


















}