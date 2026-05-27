#include "AJB.h"
#include "ServerLogic.h"

#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../../Version/resource.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/UnrealTypes.h"
#include "../Tools/BytePatcher.h"

#include "../Tools/UnrealExternWrapper.h"

#include "../CmdArgs/CommandLineArgs.h"

#include "../../Dumper-7/CustomSDK/BP_Synchronizer_classes.hpp"				// Custom SDK header (NOT GAME NATIVE)



using namespace A8CL; using namespace Global;

bool								AJB::bIsDedicatedServer{false};
bool								AJB::bServerAllowsAdmins{false};
bool								AJB::bServerHasPassword{false};
SDK::FName							AJB::NAME_ServerPassword{0};
SDK::FName							AJB::NAME_AdminPassword{0};

SDK::FName							AJB::NAME_ClientJoinOptions{0};
std::vector<AJB::FAJBNetConnection>	AJB::ClientConnections{};



AJB::FAJBNetConnection& AJB::Server::GetConnection(SDK::UNetConnection* Connection)
{
	int32 i = FindConnectionIndex(Connection);
	if (i != -1)
	{
		return ClientConnections[i];
	}
}

int32 AJB::Server::FindConnectionIndex(SDK::UNetConnection* Connection)
{
	if (Connection) 
	{
		for (int32 i{0}; i < ClientConnections.size(); ++i)
		{
			if (ClientConnections[i].Connection && ClientConnections[i].Connection == Connection)
			{
				return i;
			}
		}
	}

	return -1;
}

bool A8CL::AJB::Server::CheckAdmin(FAJBNetConnection& NetConnection)
{
	return NetConnection.Connection && NetConnection.GetFlag(bIsAdmin);
}

bool AJB::Server::IsAdmin(SDK::APlayerController* Controller)
{
	if (Controller)
	{
		int32 Index = FindConnectionIndex(Controller->NetConnection);
		if (Index != -1)
		{
			return CheckAdmin(ClientConnections[Index]);
		}
	}

	return false;
}

bool AJB::Server::IsAdmin(SDK::UNetConnection* Connection)
{
	if (Connection)
	{
		return IsAdmin(Connection->PlayerController);
	}

	return false;
}

void AJB::Server::SetAdmin(FAJBNetConnection& Connection, bool bIsAdmin)
{	
	if (bIsAdmin && !bServerAllowsAdmins)  bServerAllowsAdmins = true;
	Connection.SetFlag(EAJBNetConnectionFlags::bIsAdmin, bIsAdmin);
	
}

void AJB::Server::PreLogin(SDK::AGameModeBase* This, UC::FString* Options, UC::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, UC::FString* ErrorMessage)
{
	LogA(OFF::PreLogin.GetName(), std::format("[AGameModeBase]: {} | [Options]: {} | [Address]: {} | [ErrorMessage]: {}", This->GetFullName(), Options->ToString(), Address->ToString(), ErrorMessage->ToString()));

	static SDK::FString CLIENTINCOMPATIBLE{L"OUTDATED CLIENT | INCOMPATIBLE"};
	static SDK::FString PASSWORDPROTECTED{L"PASSWORD PROTECTED | INVALID OR EMPTY PASSWORD"};

	if (Options)
	{
		bool bFailedPreLogin{false};
		SDK::FString* FailureMessage{nullptr};

		std::string OptionsStr = Options->ToString();
		
		if (AJB::bServerHasPassword)
		{
			std::string ServerPasswordStr = AJB::NAME_ServerPassword.ToString();
			if (OptionsStr.find(ServerPasswordStr) == std::string::npos)
			{
				bFailedPreLogin = true;
				FailureMessage = &PASSWORDPROTECTED;
			}
		}

		if (Options->ToWString().find(AJB::DLLCommitVersion) == std::wstring::npos)
		{
			bFailedPreLogin = true;
			FailureMessage = &CLIENTINCOMPATIBLE;			
		}

		if (bFailedPreLogin)
		{
			AJB::CopyString(ErrorMessage, FailureMessage);
			LogA("PreLogin Failure", FailureMessage->ToString());
		}
	}
}

void AJB::Server::Login(SDK::AGameModeBase* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, UC::FString& Portal, UC::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, UC::FString& ErrorMessage)
{
	const std::string Op = Options.ToString();

	if (AJB::bServerAllowsAdmins)
	{
		if (Op.find(AJB::NAME_AdminPassword.ToString()) != std::string::npos)
		{
			LogA("Admin", NewPlayer->GetFullName());

			const int32 Index = FindConnectionIndex((SDK::UNetConnection*)NewPlayer);
			ClientConnections[Index].SetFlag(bIsAdmin, true);
			LogA("Admin", ClientConnections[Index].Connection->GetFullName());
		}
	}
}

void AJB::Server::PostLogin(SDK::AGameModeBase* This, SDK::APlayerController* Player)
{
	if (!AJB::MOD_Global_Synchronizer)
	{
		SDK::UWorld* World = GWorld;
		if (World && World->NetDriver && World->NetDriver->ClientConnections.Num() > 0) {
			AJB::MOD_Global_Synchronizer = (SDK::ABP_Synchronizer_C*)Pointers::SpawnActorInternal(GWorld.GetPointer(), SDK::UClass::FindClass("BlueprintGeneratedClass BP_Synchronizer.BP_Synchronizer_C"), SDK::FVector{}, SDK::FRotator{}, Pointers::FActorSpawnParameters{ SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn });
		}
	}
	if (AJB::MOD_Global_Synchronizer)
	{
		AJB::MOD_Global_Synchronizer->OnRep_ReplicateMovement();
		if (AJB::bDebugModeFromCMLA) LogA("GLOBAL SYNCHRONIZER", std::format("[Object]: {} | [Replicated PlayMode]: {}", AJB::MOD_Global_Synchronizer->GetFullName(), AJB::MOD_Global_Synchronizer->PlayMode));
	}



	/*	This actually reflects on both the server and client but it needs some adjusting and needs to run ONLY when it's the server.
	
	if (Player->IsA(SDK::AAJBPlayerControllerBase::StaticClass()))
	{
		const int PlayerCount = This->GameState->PlayerArray.Num();

		std::wstring Id = L"AJB-Player-";
		Id += std::to_wstring(PlayerCount);
		
		SDK::FString NewUniqueId{Id.c_str()};

		AJB::CopyString(&static_cast<SDK::AAJBPlayerControllerBase*>(Player)->GameServerUniqueID, &NewUniqueId);
	}*/
}

bool AJB::Server::Invoke(SDK::UFunction* This, SDK::UObject* Obj, void* FFrame_Stack, void* Result)
{
	constexpr const wchar_t* SDT_CheatNames[] = 
	{
		L"ROS_DebugCharaChange", L"ROS_DebugLastSurvivor", L"DebugAutoFullMP_On", L"ROS_DebugEnableAirJump", L"ROS_DebugChangeSuperJump", L"ROS_DebugSPMax",
		L"ROS_DebugSetNPCNum", L"ROS_DebugCPMax", L"ROS_DebugChangeCollisionEnable", L"ROS_DebugAPMax", L"ROS_DebugAddPassiveSkill", L"ROS_Debug_FinishMatching",
		L"ROS_Debug_BitesTheDustForceActive", L"ROS_Debug_ChangeDamageArea", L"DebugChangeForceFireSkillCore", L"DebugForceFireSkill_On",
	};
	constexpr int32 SIZE_CheatNames = sizeof(SDT_CheatNames) / sizeof(SDT_CheatNames[0]);
	static SDK::FName AdminOnlyCheats[SIZE_CheatNames]{};

	static bool bCheatsInitialized{false};
	if (!bCheatsInitialized)
	{
		bCheatsInitialized = true;
		for (int i{0}; i < SIZE_CheatNames; ++i)
		{
			AdminOnlyCheats[i] = FName::NAME_FindOrAdd(SDT_CheatNames[i]);
		}
	}


	for (int i{0}; i < SIZE_CheatNames; ++i)
	{
		if (This->Name == AdminOnlyCheats[i])
		{
			SDK::UNetConnection* NetConnection{nullptr};

			if (Obj->IsA(SDK::APlayerController::StaticClass()))
			{
				NetConnection = static_cast<SDK::APlayerController*>(Obj)->NetConnection;					
			}
			else if (Obj->IsA(SDK::ACharacter::StaticClass()))
			{
				if (SDK::APlayerController* Controller = static_cast<SDK::APlayerController*>(static_cast<SDK::ACharacter*>(Obj)->Owner))
				{
					if (Controller->IsA(SDK::APlayerController::StaticClass())) NetConnection = Controller->NetConnection;
				}
			}

			if (NetConnection)
			{
				bool bIsUnauthorized{true};

				if (AJB::bServerAllowsAdmins)
				{
					bIsUnauthorized = !IsAdmin(NetConnection);
				}

				if (bIsUnauthorized)
				{
					LogA("Kicked for cheating", Obj->GetFullName());
					UFunctions::CloseConnection(NetConnection);
					return false;
				}
			}			
		}	
	}

	return true;
}

void AJB::Server::AddClientConnection(SDK::UNetDriver* This, SDK::UNetConnection* Connection)
{
	FAJBNetConnection NewClient{(SDK::UIpConnection*)Connection};
	ClientConnections.push_back(NewClient);
}

void AJB::Server::CloseConnection(SDK::UNetConnection* This)
{
	int32 ConnectionIndex = FindConnectionIndex(This);
	if (ConnectionIndex != -1)
	{
		ClientConnections.erase(ClientConnections.begin() + ConnectionIndex);
	}
}