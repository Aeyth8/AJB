#pragma once
#include "../../Dumper-7/SDK/Engine_classes.hpp"
#include "../../Dumper-7/SDK/OnlineSubsystemUtils_classes.hpp"


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

typedef void* LPVOID;

namespace A8CL
{



class UFunctions
{
public:

	class Helpers
	{
	private:

		const inline static SDK::FString SDK::FURL::* FURLPointers[] = {&SDK::FURL::Protocol, &SDK::FURL::Host, &SDK::FURL::Map, &SDK::FURL::RedirectURL, &SDK::FURL::Portal};
		const inline static std::string FURLPointerNames[] = { "Protocol", "Host", "Map", "RedirectURL", "Portal" };
		inline static std::string FURLParseCache{""};

		const inline static std::string FullyLoadPackageType[] = { "Map = 0", "Game_PreLoadClass = 1", "Game_PostLoadClass = 2", "Always = 3", "Mutator = 4", "MAX = 5" };
		inline static std::string FLPIParseCache{""};


		inline static std::string FWorldContextParseCache{""};

	public:

		const static std::string& FURLParser(SDK::FURL& URL);
		const static std::string& FLPIParser(SDK::FFullyLoadedPackagesInfo& Info);
		const static std::string& FLPIParser_T(SDK::TArray<SDK::FFullyLoadedPackagesInfo>& Info);
		const static std::string& FWorldContextParser(SDK::FWorldContext& Context);

	public:

		static void ProcessEnd();

	public:

		// Overcomplicated function to check if the first 9 characters of the the wchar_t are equal to "../../../" or "..\..\..\"
		// And the backslashes can be vice-versa there isn't logic that checks for that nor is it needed. (I hope)
		static bool CheckForLocalDirectory(const wchar_t* Filename, unsigned char& Byte);

		
		// TO DO : FWorldContext Parser :(
		


	};

	enum BrowseReturnVal
	{
		/** Successfully browsed to a new map. */
		Success,
		/** Immediately failed to browse. */
		Failure,
		/** A connection is pending. */
		Pending,
	};

	struct FActorSpawnParameters
	{
		SDK::FName Name;

		SDK::AActor* Template;

		SDK::AActor* Owner;

		SDK::APawn* Instigator;

		SDK::ULevel* OverrideLevel;

		SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
	};

	/** Objects flags for internal use (GC, low level UObject code) */
	enum class EInternalObjectFlags : __int32
	{
		None = 0,
		//~ All the other bits are reserved, DO NOT ADD NEW FLAGS HERE!
		ReachableInCluster = 1 << 23, ///< External reference to object in cluster exists
		ClusterRoot = 1 << 24, ///< Root of a cluster
		Native = 1 << 25, ///< Native (UClass only). 
		Async = 1 << 26, ///< Object exists only on a different thread than the game thread.
		AsyncLoading = 1 << 27, ///< Object is being asynchronously loaded.
		Unreachable = 1 << 28, ///< Object is not reachable on the object graph.
		PendingKill = 1 << 29, ///< Objects that are pending destruction (invalid for gameplay but valid objects)
		RootSet = 1 << 30, ///< Object will not be garbage collected, even if unreferenced.
		HadReferenceKilled = 1 << 31, ///< Object had a reference null'd out by markpendingkill

		GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
		//~ Make sure this is up to date!
		AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet | HadReferenceKilled
	};

	/** Describes what parts of level streaming should be forcibly handled immediately */
	enum class EFlushLevelStreamingType : unsigned char
	{
		/** Do not flush state on change */
		None,
		/** Allow multiple load requests */
		Full,
		/** Flush visibility only, do not allow load requests, flushes async loading as well */
		Visibility,
	};

	enum EReqLevelBlock
	{
		/** Block load AlwaysLoaded levels. Otherwise Async load. */
		BlockAlwaysLoadedLevelsOnly,
		/** Block all loads */
		AlwaysBlock,
		/** Never block loads */
		NeverBlock,
	};

	enum class ECurrentState : unsigned char
	{
		Removed,
		Unloaded,
		FailedToLoad,
		Loading,
		LoadedNotVisible,
		MakingVisible,
		LoadedVisible,
		MakingInvisible
	};

	class Decl
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* This, SDK::FString& Command);

		typedef BrowseReturnVal(__thiscall* Browse)(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);

		typedef bool(__thiscall* InitListen)(SDK::UIpNetDriver*, SDK::UObject*, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);

		typedef SDK::APlayerController* (__thiscall* Login)(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage);

		typedef void(__thiscall* PreLogin)(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

		typedef bool(__thiscall* CreateNamedNetDriver)(SDK::UEngine*, SDK::UWorld* InWorld, SDK::FName NetDriverName, SDK::FName NetDriverDefinition);

		typedef void(__thiscall* AppPreExit)();

		typedef __int64*(__fastcall* SpawnActor)(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters);

		typedef void(__thiscall* ProcessEvent)(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);

		typedef void(__thiscall* Invoke)(SDK::UFunction* This, SDK::UObject* Obj, void* FFrame_Stack, void* Result);

		typedef bool(__thiscall* IsNonPakFilenameAllowed)(__int64* This, SDK::FString& InFilename);

		typedef bool(__thiscall* FindFileInPakFiles)(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry);

		typedef bool(__thiscall* DestroyActor)(SDK::UWorld* This, SDK::AActor* ThisActor, bool bNetForce, bool bShouldModifyLevel); // UWorld::DestroyActor

		typedef bool(__thiscall* ActorDestroy)(SDK::AActor* This, bool bNetForce, bool bShouldModifyLevel); // AActor::Destroy

		typedef SDK::FString*(__thiscall* CopyString)(SDK::FString* This, SDK::FString* NewString); // FString::FString

		typedef SDK::FString*(__thiscall* ConsoleCommand)(SDK::APlayerController* This, SDK::FString* result, const SDK::FString* Cmd, bool bWriteToLog);

		typedef void(__thiscall* ProcessMulticastDelegate)(__int64* This, void* Parameters);

		typedef SDK::UClass*(__fastcall* StaticLoadClass)(SDK::UClass* BaseClass, SDK::UObject* InOuter, const wchar_t* Name, const wchar_t* Filename, unsigned int LoadFlags, SDK::UPackageMap* Sandbox);

		typedef SDK::UObject*(__fastcall* StaticLoadObject)(SDK::UClass* ObjectClass, SDK::UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, SDK::UPackageMap* Sandbox, bool bAllowObjectReconciliation/*, void* InSerializeContext*/);

		typedef SDK::UObject*(__fastcall* StaticConstructObject_Internal)(SDK::UClass *InClass, SDK::UObject *InOuter, SDK::FName InName, unsigned int InFlags, EInternalObjectFlags InternalSetFlags, SDK::UObject *InTemplate, bool bCopyTransientsFromClassDefaults, void* *InInstanceGraph, bool bAssumeTemplateIsArchetype);
	
		typedef void(__fastcall* BroadcastDelegate)(SDK::UMulticastDelegateProperty* This);

		typedef bool(__thiscall* PrepareMapChange)(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::TArray<SDK::FName>& LevelNames);

		typedef bool (__thiscall* RequestLevel)(SDK::ULevelStreaming* This, SDK::UWorld* PersistentWorld, bool bAllowLevelLoadRequests, EReqLevelBlock BlockPolicy);
	};

	

	static void UConsole(SDK::UConsole* This, SDK::FString& Command);

	static SDK::FString* ConsoleCommand(SDK::APlayerController* This, SDK::FString* Result, SDK::FString* Command, bool bWriteToLog);

	static BrowseReturnVal Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);

	static bool RequestLevel(SDK::ULevelStreaming* This, SDK::UWorld* PersistentWorld, bool bAllowLevelLoadRequests, EReqLevelBlock BlockPolicy);

	static bool PrepareMapChange(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::TArray<SDK::FName>& LevelNames);

	static bool InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);

	static SDK::APlayerController* Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage);

	static void PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

	static void AppPreExit();

	static __int64* SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters);

	static void ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);

	static void Invoke(SDK::UFunction* This, SDK::UObject* Obj, void* FFrame_Stack, void* Result);

	static bool IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename);

	static bool FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry);

	static void __fastcall ProcessMulticastDelegate(__int64* This, void* Parameters);

	static void __fastcall BroadcastDelegate(SDK::UMulticastDelegateProperty* This);

	static SDK::UClass* __fastcall StaticLoadClass(SDK::UClass* BaseClass, SDK::UObject* InOuter, const wchar_t* Name, const wchar_t* Filename, unsigned int LoadFlags, SDK::UPackageMap* Sandbox = nullptr);

	static SDK::UObject*__fastcall StaticLoadObject(SDK::UClass* ObjectClass, SDK::UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int Flags, SDK::UPackageMap* Sandbox, bool bAllowObjectReconciliation);
















};














}