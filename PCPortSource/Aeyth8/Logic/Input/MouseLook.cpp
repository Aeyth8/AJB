#include "MouseLook.h"
#include "../../Global.hpp"
#include "../../Offsets.h"
#include "../../UConsole/Core/UConsole.h"
#include "../../Tools/UnrealTypes.h"

#include "../../../Dumper-7/SDK/Engine_classes.hpp"

#include <format>

/*

	Native functions used here (offsets are for the same executable as the rest of the PC port):

	AAJBInGamePlayerController::TurnRate		0x4A8E10 (VFT 0xF28) - bound to the "TurnRate" axis in AAJBInGamePlayerController::SetupInputComponent
	AAJBInGamePlayerController::LookUpRate		0x4A7220 (VFT 0xF20) - bound to the "LookUpRate" axis

	Both run the value through the stick curve (0x4A6E50), check VFT 0xF30 (whether camera input is currently allowed)
	and then forward it to the pawn through OnInputTurnRate/OnInputLookupRate.

	The MouseX -> TurnRate / MouseY -> LookUpRate mappings are added natively in the bDebugInputMode key setup (0x4923F4).

*/

using namespace A8CL;

namespace A8CL
{
	namespace OFF
	{
		OFFSET AddAxisMapping("UPlayerInput::AddAxisMapping", 0x1793D30);
		OFFSET InGameTurnRate("AAJBInGamePlayerController::TurnRate", 0x4A8E10);
		OFFSET InGameLookUpRate("AAJBInGamePlayerController::LookUpRate", 0x4A7220);
	}
}

namespace Decl
{
	typedef void(__fastcall* AddAxisMapping)(SDK::UPlayerInput* This, SDK::FInputAxisKeyMapping& KeyMapping);
	typedef void(__fastcall* AxisRate)(SDK::APlayerController* This, float Value);
	typedef bool(__fastcall* CanInputCamera)(SDK::APlayerController* This);
}

MouseLook::FSettings MouseLook::Settings{};

static const std::wstring& SettingsPath()
{
	static std::wstring Path{};

	if (Path.empty())
	{
		wchar_t Buffer[MAX_PATH]{0};
		GetModuleFileNameW(nullptr, Buffer, MAX_PATH);

		Path = Buffer;
		Path = Path.substr(0, Path.find_last_of(L"\\/") + 1) + L"AJBInput.ini";
	}

	return Path;
}

static float ReadFloat(const wchar_t* Section, const wchar_t* Key, float Default)
{
	wchar_t Buffer[64]{0};
	GetPrivateProfileStringW(Section, Key, L"", Buffer, 64, SettingsPath().c_str());

	wchar_t* End{nullptr};
	const float Value = wcstof(Buffer, &End);

	return End != Buffer ? Value : Default;
}

static void WriteValue(const wchar_t* Section, const wchar_t* Key, const std::wstring& Value)
{
	WritePrivateProfileStringW(Section, Key, Value.c_str(), SettingsPath().c_str());
}

void MouseLook::LoadSettings()
{
	Settings.bEnabled			= ReadFloat(L"Mouse", L"Enabled", 1.0f) != 0.0f;
	Settings.MouseSensitivity	= ReadFloat(L"Mouse", L"Sensitivity", Settings.MouseSensitivity);
	Settings.bInvertMouseY		= ReadFloat(L"Mouse", L"InvertY", 0.0f) != 0.0f;
	Settings.LookSpeed			= ReadFloat(L"Controller", L"LookSpeed", Settings.LookSpeed);

	// Writes the defaults on the first launch so the file can be found and edited.
	SaveSettings();

	Global::LogA("MouseLook", std::format("[Enabled]: {} | [Sensitivity]: {} | [InvertY]: {} | [LookSpeed]: {}", Settings.bEnabled, Settings.MouseSensitivity, Settings.bInvertMouseY, Settings.LookSpeed));
}

void MouseLook::SaveSettings()
{
	WriteValue(L"Mouse", L"Enabled", Settings.bEnabled ? L"1" : L"0");
	WriteValue(L"Mouse", L"Sensitivity", std::format(L"{}", Settings.MouseSensitivity));
	WriteValue(L"Mouse", L"InvertY", Settings.bInvertMouseY ? L"1" : L"0");
	WriteValue(L"Controller", L"LookSpeed", std::format(L"{}", Settings.LookSpeed));
}

// Parses "<Name> <Value>", returns false if there is no valid number.
static bool ParseValue(const std::string& Command, size_t NameLength, float& OutValue)
{
	if (Command.size() <= NameLength + 1) return false;

	try
	{
		OutValue = std::stof(Command.substr(NameLength + 1));
	}
	catch (...)
	{
		return false;
	}

	return OutValue > 0.0f;
}

bool MouseLook::ConsoleCommand(const std::string& Command)
{
	using UConsole::ConsoleOutput;

	if (Command == "sens" || Command.find("sens ") == 0)
	{
		float NewValue{0};
		if (ParseValue(Command, 4, NewValue))
		{
			Settings.MouseSensitivity = NewValue;
			SaveSettings();
		}

		ConsoleOutput::Text(std::format("Mouse sensitivity: {} (usage: sens <value>, default 1)", Settings.MouseSensitivity).c_str());
		return true;
	}
	else if (Command == "invertmouse")
	{
		Settings.bInvertMouseY = !Settings.bInvertMouseY;
		SaveSettings();

		ConsoleOutput::Text(Settings.bInvertMouseY ? "Mouse Y is inverted." : "Mouse Y is not inverted.");
		return true;
	}
	else if (Command == "lookspeed" || Command.find("lookspeed ") == 0)
	{
		float NewValue{0};
		if (ParseValue(Command, 9, NewValue))
		{
			Settings.LookSpeed = NewValue;
			SaveSettings();
		}

		ConsoleOutput::Text(std::format("Controller/keyboard look speed: {} (usage: lookspeed <value>, default 1)", Settings.LookSpeed).c_str());
		return true;
	}

	return false;
}

void __fastcall MouseLook::AddAxisMapping(SDK::UPlayerInput* This, SDK::FInputAxisKeyMapping& KeyMapping)
{
	if (Settings.bEnabled)
	{
		static const SDK::FName MouseX{FName::NAME_FindOrAdd(L"MouseX")};
		static const SDK::FName MouseY{FName::NAME_FindOrAdd(L"MouseY")};
		static const SDK::FName TurnRate{FName::NAME_FindOrAdd(L"TurnRate")};
		static const SDK::FName LookUpRate{FName::NAME_FindOrAdd(L"LookUpRate")};

		const SDK::FName& Key = KeyMapping.Key.KeyName;
		const SDK::FName& Axis = KeyMapping.AxisName;

		if ((Key == MouseX && Axis == TurnRate) || (Key == MouseY && Axis == LookUpRate))
		{
			Global::LogA(OFF::AddAxisMapping.GetName(), std::format("Dropped [{}] -> [{}], the mouse is handled by MouseLook.", Key.ToString(), Axis.ToString()));
			return;
		}
	}

	OFF::AddAxisMapping.VerifyFC<Decl::AddAxisMapping>()(This, KeyMapping);
}

static bool CanMouseLook(SDK::APlayerController* PC)
{
	if (!MouseLook::Settings.bEnabled || !PC->Pawn || PC->bShowMouseCursor) return false;

	// Same check the game does before it forwards TurnRate/LookUpRate to the pawn.
	return A8CL::OFFSET::VFTable<Decl::CanInputCamera>(PC)[OFF::VFT_CanInputCamera](PC);
}

void __fastcall MouseLook::TurnRate(SDK::APlayerController* This, float Value)
{
	OFF::InGameTurnRate.VerifyFC<Decl::AxisRate>()(This, Value * Settings.LookSpeed);

	if (CanMouseLook(This))
	{
		float DeltaX{0}, DeltaY{0};
		This->GetInputMouseDelta(&DeltaX, &DeltaY);

		if (DeltaX != 0.0f) This->AddYawInput(DeltaX * Settings.MouseSensitivity);
	}
}

void __fastcall MouseLook::LookUpRate(SDK::APlayerController* This, float Value)
{
	OFF::InGameLookUpRate.VerifyFC<Decl::AxisRate>()(This, Value * Settings.LookSpeed);

	if (CanMouseLook(This))
	{
		float DeltaX{0}, DeltaY{0};
		This->GetInputMouseDelta(&DeltaX, &DeltaY);

		// Mouse up is positive, pitch input is inverted by InputPitchScale.
		if (DeltaY != 0.0f) This->AddPitchInput((Settings.bInvertMouseY ? DeltaY : -DeltaY) * Settings.MouseSensitivity);
	}
}
