#pragma once
#include <vector>
#include <cstdint>
#include <string>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{

// Static Offsets
namespace OFF
{







// [StringIndex]	Location of the string name reference
// [Offset]			The original non-modified static offset
// [FunctionCall]	Function call pointer = GBA + Offset
// [bShouldLog]		Outputs to the log everytime the function has been called (If proxied)
// [GetName]		Retrieves the string reference with the index
/*struct OFFSET
{ 
	int32_t StringIndex; 

	const uintptr_t Offset; 

	void* FunctionCall{0}; 

	bool bShouldLog;

	std::tuple<> RecallArgs;

	OFFSET(const std::string& Name, const uintptr_t& Offset, bool ShouldLog = true) : 
		StringIndex(StringIndexArray.size()), Offset(Offset), bShouldLog(ShouldLog)
	{
		StringIndexArray.push_back(Name);
	};

	// Functions

	std::string& GetName() const { return StringIndexArray[StringIndex]; }

	template <typename T>
	T VerifyFC()
	{
		if (!FunctionCall && Offset != 0)
		{
			FunctionCall = reinterpret_cast<void*>(GBA + Offset);
			//if (Instance.FunctionCall == nullptr) const int MessageBoxA(0, "Fatal Error!", (Instance.GetName() + " is a nullptr!").c_str(), MB_OK);
		}
		return reinterpret_cast<T>(FunctionCall);
	}
};


// Basic UE Functions

inline static OFFSET UConsole("UConsole::ConsoleCommand", 0x178A450);										// UConsole::ConsoleCommand
inline static OFFSET PreLogin("AGameModeBase::PreLogin", 0x13CB710);										// AGameModeBase::PreLogin
inline static OFFSET AJBPreLogin("AJB::PreLogin", 0x049E570);												// AGameModeBase::PreLogin { Used in the AJB GameMode(s) }
inline static OFFSET Login("AGameModeBase::Login", 0x13C6A20);												// AGameModeBase::Login
inline static OFFSET Browse("UEngine::Browse", 0x1750750);													// UEngine::Browse
inline static OFFSET SpawnActor("UWorld::SpawnActor", 0x1488440);											// UWorld::SpawnActor
inline static OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x17B8A40);								// UWorld::InternalGetNetMode
inline static OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x11AE3A0);								// AActor::InternalGetNetMode
inline static OFFSET GetMaxFPS("UEngine::GetMaxFPS", 0x175E440);											// UEngine::GetMaxFPS
inline static OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x01E24F0);										// FEngineLoop::AppPreExit
inline static OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x1913760);		// FPakPlatformFile::IsNonPakFilenameAllowed
inline static OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x1910650);					// FPakPlatformFile::FindFileInPakFiles
inline static OFFSET FileExists("FPakPlatformFile::FileExists", 0x190FAB0);									// FPakPlatformFile::FileExists

// Native Game Functions

inline static OFFSET StartConsumePP("UAJBGameInstance::StartConsumePP", 0x0518BC0);							// UAJBGameInstance::StartConsumePP
inline static OFFSET ResetPP("UAJBGameInstance::ResetPP", 0x0481370);										// UAJBGameInstance::ResetPP
inline static OFFSET Response_UserLogout("UAJBNetAPI_Logout::Response_UserLogout", 0x04DD160);				// UAJBNetAPI_Logout::Response_UserLogout (May be incorrect) 
inline static OFFSET LoadSettingsIni("UAJBAMSystemSettings::LoadSettingsIni", 0x0519FB0);					// UAJBAMSystemSettings::LoadSettingsIni
inline static OFFSET SetAJBCoinLock("UAJBAMSystemObject::SetAJBCoinLock", 0x0518AB0);						// UAJBAMSystemObject::SetAJBCoinLock

*/


class OFFSET 
{ 
private:

	inline static std::vector<std::string> StringIndexArray{};

	int32_t StringIndex; 

	std::tuple<> RecallArgs;

	template <typename T, std::size_t... I>
	auto RecallInternal(std::index_sequence<I...>) { return reinterpret_cast<T>(this->FunctionCall)(std::get<I>(RecallArgs)...); }

public:


	const uintptr_t Offset; 

	void* FunctionCall{0}; 

	bool bShouldLog;

	

	OFFSET(const std::string& Name, const uintptr_t& Offset, bool ShouldLog = true) : 
		StringIndex(StringIndexArray.size()), Offset(Offset), bShouldLog(ShouldLog)
	{
		StringIndexArray.push_back(Name);
	};

	// Functions

	std::string& GetName() const { return StringIndexArray[StringIndex]; }

	template <typename T>
	T VerifyFC()
	{
		if (!FunctionCall && Offset != 0)
		{
			FunctionCall = reinterpret_cast<void*>(GBA + Offset);
			//if (Instance.FunctionCall == nullptr) const int MessageBoxA(0, "Fatal Error!", (Instance.GetName() + " is a nullptr!").c_str(), MB_OK);
		}
		return reinterpret_cast<T>(FunctionCall);
	}

	template <typename T, typename... Args>
	auto Call(Args&&... Params)
	{
		this->RecallArgs = std::make_tuple(Params...);
		return this->VerifyFC<T>()(std::forward<Args>(Params)...);
	}

	template <typename T>
	auto Recall()
	{
		return RecallInternal<T>(std::make_index_sequence<std::tuple_size<decltype(RecallArgs)>::value>{});
	}

};

}
}