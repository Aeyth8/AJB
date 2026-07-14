#include "AJBCallbacks.h"

#include "../../Global.hpp"
#include "../AJB.h"
#include "../../Tools/UnrealTypes.h"

#include "../../Tools/TickHook/TickHook.h"
#include "../../Tools/Pointers.h"
#include "../../Tools/UFunctions.hpp"
#include "../../CmdArgs/CommandLineArgs.h"

using namespace A8CL; using namespace Global;

#include "../../../Dumper-7/SDK/MediaAssets_classes.hpp"
#include "../../../Dumper-7/SDK/UMG_classes.hpp"
#include "../../../Dumper-7/SDK/Landscape_classes.hpp"

// Needed for AJBSimpleMatch_P translation
#include "../../../Dumper-7/SDK/WB_ModeSelect_classes.hpp"
#include "../../../Dumper-7/SDK/WB_ModeSelectTextBase_classes.hpp"

#include "../../../Dumper-7/CustomSDK/BP_GlobalPatcher_classes.hpp"			// Custom SDK header (NOT GAME NATIVE)

// DOES NOT CHECK FOR NULL
inline static SDK::UMaterial* GetBaseMaterial(SDK::UObject* This)
{
	SDK::UMaterialInterface* Material = (SDK::UMaterialInterface*)This;
	return A8CL::OFFSET::VFTable<SDK::UMaterial*(__thiscall*)(SDK::UMaterialInterface*)>(Material)[OFF::VFT_GetMaterial](Material);
}

inline static SDK::UMaterial* GetLemonMaterial(SDK::UObject* This)
{
	static SDK::UClass* MaterialClass = SDK::UMaterial::StaticClass();
	static SDK::UClass* Texture2DClass = SDK::UTexture2D::StaticClass();
	static SDK::UClass* MaterialInstanceConstantClass = SDK::UMaterialInstanceConstant::StaticClass();	
	static SDK::UClass* MaterialInstanceDynamicClass = SDK::UMaterialInstanceDynamic::StaticClass();

	constexpr bool bUsePlayableLemonPossession{false};

	if (This)
	{
		if (This->IsA(MaterialClass))
		{
			return static_cast<SDK::UMaterial*>(This)->MaterialDomain == SDK::EMaterialDomain::MD_UI ? AJB::M_LemonPossession : AJB::AM_LemonPossession;
		}
		else if (!bUsePlayableLemonPossession)
		{
			if (This->IsA(Texture2DClass))
			{
				return AJB::M_LemonPossession;
			}
			else if (This->IsA(MaterialInstanceConstantClass))
			{
				return GetBaseMaterial(This)->MaterialDomain == SDK::EMaterialDomain::MD_UI ? AJB::M_LemonPossession : AJB::AM_LemonPossession;
				//return static_cast<SDK::UMaterialInstanceConstant*>(This)->GetBaseMaterial()->MaterialDomain == SDK::EMaterialDomain::MD_UI ? AJB::M_LemonPossession : AJB::AM_LemonPossession;
			}
			else if (This->IsA(MaterialInstanceDynamicClass))
			{
				return GetBaseMaterial(This)->MaterialDomain == SDK::EMaterialDomain::MD_UI ? AJB::M_LemonPossession : AJB::AM_LemonPossession;
				//return static_cast<SDK::UMaterialInstanceDynamic*>(This)->GetBaseMaterial()->MaterialDomain == SDK::EMaterialDomain::MD_UI ? AJB::M_LemonPossession : AJB::AM_LemonPossession;
			}
		}		
		else
		{
			LogA("WHAT THE HELL ARE YOU?!?!", This->GetFullName());
		}
	}
	

	return bUsePlayableLemonPossession ? nullptr : AJB::M_LemonPossession;
}

void AJB::Callbacks::LemonPossession()
{
	typedef void(__fastcall* ImageSetBrushFromMaterial)(SDK::UImage*, SDK::UMaterialInterface*);
	typedef void(__fastcall* BorderSetBrushFromMaterial)(SDK::UBorder*, SDK::UMaterialInterface*);


	if (!AJB::LemonPlayer)
	{
		AJB::CreateCallbackTimer(AJB::Callbacks::LemonPossession, 5.0f);
		return;
	}

	SDK::UClass* MediaSourceClass = SDK::UMediaSource::StaticClass();

	SDK::UClass* ImageClass = SDK::UImage::StaticClass();
	SDK::UClass* BorderClass = SDK::UBorder::StaticClass();
	SDK::UClass* PrimitiveClass = SDK::UPrimitiveComponent::StaticClass();
	SDK::UClass* LandscapeClass = SDK::ALandscapeProxy::StaticClass();


	SDK::UObject* CurrentObject{nullptr};
	for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
	{
		CurrentObject = SDK::UObject::GObjects->GetByIndex(i);

		if (!CurrentObject) continue;

		if (CurrentObject->IsA(MediaSourceClass) && AJB::LemonPlayer)
		{
			//AJB::LemonPlayer->OpenUrl(L"https://chumlee.org/CHUMLEEYOUSTUPIDFU.mp4");
			// This is the stupidest thing I've ever discovered, for some reason it crashes if you type "getall MediaSource"

			static SDK::FName MovieName = FName::NAME_FindOrAdd("LemonPossessionGrayscale");
			static SDK::UMediaSource* LemonPossessionGrayscale{nullptr};

			SDK::UMediaSource* Source = static_cast<SDK::UMediaSource*>(CurrentObject);

			// SHUTUP. STUPID IDIOT IDIOT
			__assume (Source != nullptr);

			if (!LemonPossessionGrayscale && Source->Name == MovieName)
			{
				LemonPossessionGrayscale = Source;
				Source->AddToRootSet();
				OFF::OpenSource.VerifyFC<bool(__thiscall*)(SDK::UMediaPlayer*, SDK::UMediaSource*)>()(AJB::LemonPlayer, Source);
			}
		}
		else if (CurrentObject->IsA(ImageClass))
		{
			SDK::UImage* Image = static_cast<SDK::UImage*>(CurrentObject);
			if (SDK::UMaterial* LemonEssence = GetLemonMaterial(Image->Brush.ResourceObject))
			{
				OFF::ImageSetBrushFromMaterial.Call<ImageSetBrushFromMaterial>()(Image, LemonEssence);
			}
		}
		else if (CurrentObject->IsA(BorderClass))
		{
			SDK::UBorder* Border = static_cast<SDK::UBorder*>(CurrentObject);
			if (SDK::UMaterial* LemonEssence = GetLemonMaterial(Border->Background.ResourceObject))
			{
				OFF::BorderSetBrushFromMaterial.Call<BorderSetBrushFromMaterial>()(Border, LemonEssence);
			}
		}
		else if (CurrentObject->IsA(PrimitiveClass))
		{
			//static uint64 execPrimitiveSetMaterial(PB(0x18D70A0));

			/*SDK::UMeshComponent* MeshComponent = static_cast<SDK::UMeshComponent*>(CurrentObject);
			for (SDK::UMaterialInterface* Material : MeshComponent->OverrideMaterials)
			{
				if (SDK::UMaterial* NewMaterial = GetLemonMaterial(Material))
				{
					Material = NewMaterial;
				}
			}*/

			SDK::UPrimitiveComponent* Primitive = static_cast<SDK::UPrimitiveComponent*>(CurrentObject);
			for (int i{0}; i < Primitive->GetNumMaterials(); ++i)
			{
				if (SDK::UMaterialInterface* Mat = Primitive->GetMaterial(i))
				{
					if (SDK::UMaterial* LemonEssence = GetLemonMaterial(Mat))
					{
						Primitive->SetMaterial(i, LemonEssence);
					}
				}
			}	
		}		
	}	
}

void AJB::Callbacks::TranslateSimpleMatch()
{
	//LogA("TranslateSimpleMatch", "START");
	
	struct RetainerBoxSubclass : SDK::UWB_ModeSelectTextBase_C { SDK::URetainerBox* RetainerBox; };

	struct WidgetSubclassIndexer
	{
		// This may seem confusing atfirst but all this really does is prevent me from having to include every single pointless header for each widget.
		// It simply adds the offsets to memory starting from UWB_ModeSelect_C and the offsets lead to each widget pointer and then retainer box within.
		static RetainerBoxSubclass* GetRetainerBox(uint64 MainModeSelectWidget, uint32 OffsetToClass, uint32 OffsetToRetainerBox)
		{
			uint64 Subclass = reinterpret_cast<uint64>(*reinterpret_cast<uint64**>(MainModeSelectWidget + OffsetToClass));
			uint64 RetainerBox = reinterpret_cast<uint64>(*reinterpret_cast<uint64**>(Subclass + OffsetToRetainerBox));

			return reinterpret_cast<RetainerBoxSubclass*>(RetainerBox);
		}
	};

	struct ModeSelectWidget
	{
		uint32			OffsetToClass;
		uint32			OffsetToRetainerBox;
		const wchar_t*  TranslationString;
		byte			BestPlacementIndex;
		bool			bSubwidget = false;
	};

	constexpr const ModeSelectWidget WidgetsToTranslate[] =
	{		
		{0x02E8, 0x0370, L"ONLINE",					0},			// WB_ModeSelect_Button_PAIR		// WB_ModeSelect_Txt_PAIR
		{0x0300, 0x0398, L"GAMBLING",				2},			// WB_ModeSelect_Button_Reward		// WB_ModeSelect_Txt_Reward
		{0x02F0, 0x0378, L"MORE GAMBLING",			1},			// WB_ModeSelect_Button_PremiumDraw // WB_ModeSelect_Txt_PremiumDraw_C_0
		{0x02F8, 0x0330, L"DEALER'S CHALLENGE",		4},			// WB_ModeSelect_Button_PvE			// WB_ModeSelect_Txt_PvE_C_1		
		{0x0310, 0x0368, L"STORE BATTLE",			1},			// WB_ModeSelect_Button_Shop		// WB_ModeSelect_Txt_Shop
		{0x0318, 0x0370, L"ONLINE",					0},			// WB_ModeSelect_Button_SOLO		// WB_ModeSelect_Txt_SOLO
		{0x0320, 0x0330, L"TRAINING",				1},			// WB_ModeSelect_Button_Training	// WB_ModeSelect_Txt_Training
		{0x0328, 0x0358, L"TUTORIAL",				1},			// WB_ModeSelect_Button_Tutorial	// WB_ModeSelect_Txt_Tutorial

		// Subwidgets // They're one less pointer away.

		{0x02E0, 0x0320, L"Exit to Titlescreen",							1, true},	// WB_ModeSelect_Button_EndGame		// RetainerBox_1
		{0x02F8, 0x0328, L"Fight waves of bots in the Everglades Farm.",	6, true},	// WB_ModeSelect_Button_PvE			// RetainerBox_0	// The only UAJBTextBlock is in index #6, everything else is a UImage or other crap.
	};

	static SDK::FString Blank{L" "};

	for (const ModeSelectWidget& WidgetTT : WidgetsToTranslate)
	{
		RetainerBoxSubclass* RetainerBoxWrapper = WidgetSubclassIndexer::GetRetainerBox((uint64)AJB::SimpleMatchHUD, WidgetTT.OffsetToClass, WidgetTT.OffsetToRetainerBox);
		if (RetainerBoxWrapper)
		{
			SDK::URetainerBox* CurrentRetainer = WidgetTT.bSubwidget ? (SDK::URetainerBox*)RetainerBoxWrapper : RetainerBoxWrapper->RetainerBox;
			if (CurrentRetainer)
			{
				SDK::UHorizontalBox* Box = static_cast<SDK::UHorizontalBox*>(CurrentRetainer->Slots[0]->Content);
				const int Count = Box->Slots.Num();

				for (int i{0}; i < Count; ++i)
				{
					if (!Box->Slots[i] || !Box->Slots[i]->Content || !Box->Slots[i]->Content->IsA(SDK::UTextBlock::StaticClass())) continue;

					///LogA("Slot", Box->Slots[i]->Content->GetFullName());
					// LogA(Widget->GetFullName(), std::to_string(i));

					SDK::UTextBlock* Widget = static_cast<SDK::UTextBlock*>(Box->Slots[i]->Content);
					AJB::MOD_GlobalPatcher->SetWidgetText(Widget, i == WidgetTT.BestPlacementIndex ? WidgetTT.TranslationString : Blank);
				}				
			}
		}
	}
}

UC::FString AJB::Callbacks::CacheErrorPopupString{};

#include "../../../Dumper-7/CustomSDK/WBP_OptionsMenu_classes.hpp"				// Custom SDK header (NOT GAME NATIVE)

void AJB::Callbacks::CallbackErrorPopup()
{
	AJB::MOD_OptionsMenu->CreateGenericErrorPopup(L"Failed To Connect", CacheErrorPopupString);
}

// Temporary
#include "../../Logger.hpp"

// Especially temporary
static const wchar_t* GetScreenshotTimestamp(bool bWithHUD = false)
{
	auto Crap = std::chrono::system_clock::now();
	std::time_t NowTime = std::chrono::system_clock::to_time_t(Crap);
	std::tm TmCrap; localtime_s(&TmCrap, &NowTime);
	std::wstringstream Time;
	Time << std::put_time(&TmCrap, bWithHUD ? L"Screenshot_%m_%d_%Y_%H_%M_%S_%p_+HUD" : L"Screenshot_%m_%d_%Y_%H_%M_%S_%p");
	return Time.str().c_str();
}

void AJB::Callbacks::ScreenshotBoth()
{
	Screenshot();
	CreateCallbackTimer(AJB::Callbacks::ScreenshotWithHUD, 0.0f);
}

void AJB::Callbacks::Screenshot()
{
	OFF::Screenshot.VerifyFC<decltype(&SDK::UAJBUtilityFunctionLibrary::Screenshot)>()(GetScreenshotTimestamp(), false);
}

void AJB::Callbacks::ScreenshotWithHUD()
{	
	OFF::Screenshot.VerifyFC<decltype(&SDK::UAJBUtilityFunctionLibrary::Screenshot)>()(GetScreenshotTimestamp(true), true);
}