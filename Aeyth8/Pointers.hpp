#pragma once

/*

A special macro/function table written by Aeyth8 for easy pointer calls that universally works with any SDK generated with Dumper-7

Manifest V1.1

*/

#include "../pch.h"

// UEngine Pointer (Local)
extern inline SDK::UEngine* Engine{nullptr};

// UWorld Pointer (Local)
extern inline SDK::UWorld* World{nullptr};

// UKismetSystemLibrary Pointer (Local)
extern inline SDK::UKismetSystemLibrary* KismetSys{nullptr};

// Global Base Address (GBA)
extern inline uintptr_t GBA{0};


/*template <typename T, typename Ret, typename... Args>
    inline auto Perhaps(T* ptr, Ret&& (T::*func)(Args&&...), Args&&... args) {
        if (ptr) {
            return (ptr->*func)(std::forward<Args>(args)...);
        }
        return Ret{};  // Return default if pointer is nullptr
    }*/

inline void LogA(const std::string& Header, const std::string& Text) { std::cout << Header << " :: " << Text << "\n"; Logger::DebugLog(Header, Text); Logger::Log.flush(); }
inline void Log(const std::string& Text) { std::cout << Text << "\n"; Logger::DebugLog("Debug", Text); Logger::Log.flush(); }

inline std::string HexToString(const uintptr_t& Hex) {
    std::ostringstream O;
    O << std::hex << std::uppercase << Hex;
    return O.str();
}

inline void ErrorBox(const std::wstring& Title, const std::wstring& Message, const UINT& Options, bool ForceGameClose = false) {
    const int B = MessageBox(0, Message.c_str(), Title.c_str(), Options);
    if (ForceGameClose) switch (B) { case IDOK: abort(); break; }
    switch (B)
    {
    case IDOK:
        break;
    case IDCANCEL:
        break;
    }
}

// An easy template to construct new threads.
inline static DWORD WINAPI ConstructThread(LPVOID Function, LPVOID Parameter = 0) {
    HANDLE Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Function, Parameter, 0, 0);
    if (Thread != nullptr) CloseHandle(Thread);
    return 0;
}


// Checks if a pointer is valid, if null, the pointer class is logged.
inline static void IsNull(const auto & Pointer, const std::string & LogMsg) {
    if (Pointer == nullptr) LogA("IsNull", LogMsg);
}

// Simple yes or no response for safely checking/preventing calling null pointers. 
inline static bool CheckNull(const auto & Pointer) { return Pointer == nullptr; }
inline static bool CheckNull(const auto & Pointer, std::string ClassName, std::string CustomMessage = " is a valid pointer.") { Pointer == nullptr ? LogA("CheckNull", ClassName + " is a null pointer!") : LogA("CheckNull", ClassName + CustomMessage); return Pointer == nullptr; }

// UObject::FindObject<Class::Subclass::Object>() 
// Derived from CheatGear's style of SDK functionality.
template <typename Class>
static inline Class* FindObject() {
    auto IsStatic = Class::StaticClass();
    for (int i{ 0 }; i < SDK::UObject::GObjects->Num(); ++i) {
        auto Object = SDK::UObject::GObjects->GetByIndex(i);
        if (!Object) continue;
        if (Object->IsA(IsStatic)) return static_cast<Class*>(Object);
    }
    return nullptr;
}

// UObject::FindObjects<Class::Subclass::Object>() 
// Derived from CheatGear's style of SDK functionality.
template <typename Class>
static inline std::vector<Class*> FindObjects() {
    auto IsStatic = Class::StaticClass();
    std::vector<Class*> Objects;
    for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i) {
        auto Object = SDK::UObject::GObjects->GetByIndex(i);
        if (!Object) continue;
        if (Object->IsA(IsStatic)) Objects.push_back(static_cast<Class*>(Object));
    }
    return Objects;
}

// Retrieves the last instance of an object. 
template <typename Class>
Class* GetLastOf() { return FindObjects<Class>().back(); }


// UWorld::GetWorld()
inline SDK::UWorld* UWorld() {
    auto A = SDK::UWorld::GetWorld();
    IsNull(A, "UWorld is a null pointer!");
    return A;
}

// UEngine::GetEngine()
inline SDK::UEngine* UEngine() {
    auto E = SDK::UEngine::GetEngine();
    IsNull(E, "UEngine is a null pointer!");
    return E;
}

inline SDK::UGameUserSettings* UserSettings() {
    auto S = SDK::UGameUserSettings::GetDefaultObj();
    IsNull(S, "UGameUserSettings is a null pointer!");
    return S;
}

inline SDK::UWidgetBlueprintLibrary* WidgetLibrary() {
    auto B = SDK::UWidgetBlueprintLibrary::GetDefaultObj();
    IsNull(B, "UWidgetBlueprintLibrary is a null pointer!");
    return B;
}

// UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->APlayerController
inline SDK::APlayerController* Player0() {
    return UWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
}

// UKismetSystemLibrary::GetDefaultObj()
inline SDK::UKismetSystemLibrary* UKismetSys() {
    return SDK::UKismetSystemLibrary::GetDefaultObj();
}

inline SDK::ULevelStreamingKismet* UKismetStream() { 
    return SDK::ULevelStreamingKismet::GetDefaultObj();
}

// This is used for replicating.
inline void StreamLevelInstance(SDK::FName LevelName, bool bMakeVisibleAfterLoad = true, bool bShouldBlockOnLoad = false) {
    SDK::UGameplayStatics::LoadStreamLevel(UWorld(), LevelName, bMakeVisibleAfterLoad, bShouldBlockOnLoad, SDK::FLatentActionInfo());
}

// This is used for local level loading only, collision will replicate but there will not be any visibility. 
inline static void LoadLevelInstance(SDK::FString LevelName) {
    UKismetStream()->LoadLevelInstance(UWorld(), LevelName, SDK::FVector(0,0,0), SDK::FRotator(0,0,0), 0);
}

inline static void LoadLevelInstance(SDK::UObject* WorldContextObject, SDK::FString LevelName, SDK::FVector Vector, SDK::FRotator Rotator, bool* bOutSuccess) {
    UKismetStream()->LoadLevelInstance(WorldContextObject, LevelName, Vector, Rotator, bOutSuccess);
}

// UKismetStringLibrary::Conv_StringToName(L"")
inline SDK::FName FString2FName(const SDK::FString & Str) {
    return SDK::UKismetStringLibrary::Conv_StringToName(Str);
}

// Executes a console command from the retrieved pointers.
inline static void CMD(const std::wstring& Command) {
    UKismetSys()->ExecuteConsoleCommand(UWorld(), Command.c_str(), Player0());
}

// A very basic template to reimplement the editor console which may or may not work in all cases.
inline static void ConstructUConsole() {
    // Sets the console toggling key to be Tilde ~ 
    SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = FString2FName(L"Tilde");

    // Spawns a UObject, specifically a console object.
    SDK::UObject* ConsoleObj = SDK::UGameplayStatics::SpawnObject(UEngine()->ConsoleClass, UEngine()->GameViewport);

    // Sets the currently (null) console, and replaces it with our newly constructed one
    UEngine()->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(ConsoleObj);
}

// Macro to allocating the console (not to be confused with the UConsole)
inline static void LogWin() { AllocConsole(); FILE* Dummy; freopen_s(&Dummy, "CONOUT$", "w", stdout); freopen_s(&Dummy, "CONIN$", "r", stdin); }

inline static bool IsSafe{false};
inline static int NullCount{0};

// Prevent nullptr crashes by safety checking before initialization.
inline static void SafeInit() {
    LogWin(); // Allocates the console for logging the iterations / how long until UWorld is no longer null.
    while (!IsSafe) { CheckNull(UWorld()) ? NullCount++, Log("SafeInit: UWorld is not initializing until a valid reference is found. Trying again in 1 second. Count : " + std::to_string(NullCount)), Sleep(1000) : (void)0, IsSafe = true; }
    if (IsSafe) { ConstructUConsole(); NullCount = 0; return; }
}

// Construct SafeInit Thread (CSIT)
inline static void CSIT() { ConstructThread(SafeInit, 0); IsSafe = false; }

/*


SAFEINIT IS CURRENTLY NOT WORKING DUE TO THE FACT THAT UWORLD AND UENGINE ARE BOTH VALID POINTERS BY LAUNCH, SOMETHING ELSE THAT IS NOT VALID IS CAUSING THE CRASH WITH THE CONSOLE


*/