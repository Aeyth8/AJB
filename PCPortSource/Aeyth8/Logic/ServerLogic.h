#pragma once
#include <vector>

typedef signed char			int8;
typedef short				int16;
typedef int					int32;
typedef long long			int64;

typedef unsigned char		uint8;
typedef unsigned short		uint16;
typedef unsigned int		uint32;
typedef unsigned long long	uint64;


namespace UC
{
	class FString;
}
namespace SDK
{
	class AGameModeBase;
	class APlayerController;

	class UObject;
	class UFunction;
	class UPlayer;
	class UNetDriver;
	class UNetConnection;
	class UIpConnection;

	enum class ENetRole : unsigned char;


	struct FUniqueNetIdRepl;
}
namespace A8CL
{
namespace AJB
{
	enum EAJBNetConnectionFlags : uint8
	{
		bIsAdmin = 1 << 0
		// TBD
	};

	struct FAJBNetConnection
	{
		SDK::UIpConnection*		Connection;

		uint8					CharacterID;
		uint8					CharacterSkin;
		uint8					Flags;

		inline bool GetFlag(EAJBNetConnectionFlags Flag) const				{ return (this->Flags & Flag);	}
		inline uint8 SetFlag(EAJBNetConnectionFlags Flag, bool bSetFlagTo)	{ return bSetFlagTo ? (this->Flags |= Flag) : (this->Flags &= ~Flag); }

		FAJBNetConnection(SDK::UIpConnection* Connection = nullptr, uint8 CharacterID = 1, uint8 CharacterSkin = 1, uint8 Flags = 0) : Connection(Connection), CharacterID(CharacterID), CharacterSkin(CharacterSkin), Flags(Flags) {}
	};

	extern bool bIsDedicatedServer;
	extern bool bServerAllowsAdmins;
	extern bool bServerHasPassword;

	extern SDK::FName NAME_ServerPassword;
	extern SDK::FName NAME_AdminPassword;

	extern std::vector<UC::FString> CLIENT_JoinOptions;
	extern std::vector<FAJBNetConnection> ClientConnections;

	namespace Server
	{
		// Helpers

		int32 FindConnectionIndex(SDK::UNetConnection* Connection);
		bool CheckAdmin(FAJBNetConnection& NetConnection);
		bool IsAdmin(SDK::APlayerController* Controller);
		bool IsAdmin(SDK::UNetConnection* Connection);


		// Hook Wrappers

		void PreLogin(SDK::AGameModeBase* This, UC::FString* Options, UC::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, UC::FString* ErrorMessage); // This is AJBPreLogin, which is customary to the AJB gamemodes ONLY
		void Login(SDK::AGameModeBase* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, UC::FString& Portal, UC::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, UC::FString& ErrorMessage);
		void PostLogin(SDK::AGameModeBase* This, SDK::APlayerController* Player);

		bool Invoke(SDK::UFunction* This, SDK::UObject* Obj, void* FFrame_Stack, void* Result);
		void AddClientConnection(SDK::UNetDriver* This, SDK::UNetConnection* Connection);
		void CloseConnection(SDK::UNetConnection* This);
	}
	
}
}