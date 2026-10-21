#include <algorithm>
#include <cmath>
#include <unordered_set>
#include "OneMenu.h"
#include "ArcadeLink.h"
#include <format>
#include "../../Global.hpp"
#include "../../../Dumper-7/SDK/CoreUObject_classes.hpp"
#include "../../../Dumper-7/SDK/UMG_classes.hpp"
#include "../../../Dumper-7/SDK/Engine_classes.hpp"
#include "../../../Dumper-7/SDK/LoadingScreenSystem_classes.hpp"
#include "../../../Dumper-7/SDK/WB_ModeSelect_classes.hpp"
#include "../../Offsets.h"
#include "../../Tools/UFunctions.hpp"
#include "../../Tools/UnrealTypes.h"
#include "../../CmdArgs/CommandLineArgs.h"
#include "../AJB.h"
#include <fstream>
#include <ctime>
#include <filesystem>

using namespace A8CL; using namespace A8CL::Global;

static bool ClassNameIs(SDK::UClass* C, const char* Name)
{
	for (SDK::UStruct* S = C; S; S = S->Super) if (S->GetName() == Name) return true;
	return false;
}

SDK::UObject* OneMenu::FindLive(const char* ClassName)
{
	SDK::UObject* Found{nullptr};
	for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
	{
		SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
		if (!O || !O->Class || O->IsDefaultObject() || (O->Flags & (SDK::EObjectFlags::ArchetypeObject))) continue;
		if (O->Class->GetName() != ClassName) continue;
		const std::string N = O->GetFullName();
		if (N.find("Archetype") != std::string::npos) continue;
		if (N.find(" Transient.") != std::string::npos) return O;
		if (!Found) Found = O;
	}
	return Found;
}

static SDK::UField* FindField(SDK::UObject* Obj, const char* Name)
{
	if (!Obj) return nullptr;
	for (SDK::UStruct* S = Obj->Class; S; S = S->Super)
		for (SDK::UField* F = S->Children; F; F = F->Next)
			if (F->GetName() == Name) return F;
	return nullptr;
}

SDK::UFunction* OneMenu::FindFn(SDK::UObject* Obj, const char* FuncName)
{
	SDK::UField* F = FindField(Obj, FuncName);
	return (F && F->IsA(SDK::UFunction::StaticClass())) ? (SDK::UFunction*)F : nullptr;
}

void* OneMenu::PropPtr(SDK::UObject* Obj, const char* PropName)
{
	SDK::UField* F = FindField(Obj, PropName);
	if (!F || !F->IsA(SDK::UProperty::StaticClass())) return nullptr;
	return (unsigned char*)Obj + ((SDK::UProperty*)F)->Offset;
}

bool OneMenu::Call(SDK::UObject* Obj, const char* FuncName, void* Parms)
{
	SDK::UFunction* Fn = FindFn(Obj, FuncName);
	if (!Fn) { LogA("OneMenu", std::format("Call failed: {} not found", FuncName)); return false; }
	unsigned char Buf[0x400]{};
	Obj->ProcessEvent(Fn, Parms ? Parms : Buf);
	return true;
}

void OneMenu::Dump(SDK::UObject* Obj)
{
	if (!Obj) { LogA("OneMenu", "Dump: null"); return; }
	LogA("OneMenu", "DUMP " + Obj->GetFullName());
	for (SDK::UStruct* S = Obj->Class; S; S = S->Super)
	{
		if (S->GetName() == "UserWidget" || S->GetName() == "Object" || S->GetName() == "Actor" || S->GetName() == "Widget") break;
		for (SDK::UField* F = S->Children; F; F = F->Next)
		{
			std::string Line = S->GetName() + "::" + F->GetName() + " <" + F->Class->GetName() + ">";
			if (F->IsA(SDK::UProperty::StaticClass()))
			{
				SDK::UProperty* P = (SDK::UProperty*)F;
				Line += std::format(" @0x{:X}", P->Offset);
				if (F->Class->GetName() == "ObjectProperty")
				{
					SDK::UObject* V = *(SDK::UObject**)((unsigned char*)Obj + P->Offset);
					Line += " = " + (V ? V->GetFullName() : std::string("null"));
				}
				else if (F->Class->GetName() == "FloatProperty") Line += std::format(" = {}", *(float*)((unsigned char*)Obj + P->Offset));
				else if (F->Class->GetName() == "IntProperty") Line += std::format(" = {}", *(int*)((unsigned char*)Obj + P->Offset));
				else if (F->Class->GetName() == "ByteProperty" || F->Class->GetName() == "BoolProperty") Line += std::format(" = {}", *((unsigned char*)Obj + P->Offset));
			}
			LogA("OneMenu", Line);
		}
	}
}

static std::string TraceFilter;
static int MenuConsole(const std::string& Cmd);

static std::wstring NetFailMsg; static float NetFailT{0.f}, SteamFailT{0.f};
static SDK::UObject* OfflinePopup{}; static float OfflinePopupT{0.f};
bool OneMenu::OnPE(SDK::UObject* This, SDK::UFunction* Function, void* Parms)
{
	static SDK::FName SetupAI{A8CL::FName::NAME_FindOrAdd("SetupAILevel")};
	if (Parms && Function->Name == SetupAI && This->Class && This->Class->GetName() == "BP_AJBInGameAIRecognition_C") { static int NLog{0}; if (NLog++ < 3) LogA("OneMenu", std::format("SetupAILevel {} -> {}", *(int*)Parms, BotLevel)); *(int*)Parms = BotLevel; }
	if (!TraceFilter.empty())
	{
		std::string F = Function->GetName();
		if (F != "Tick" && F != "ReceiveTick" && F.find("Get") != 0)
		{
			std::string O = This->Class->GetName();
			if (TraceFilter == "*" || O.find(TraceFilter) != std::string::npos || F.find(TraceFilter) != std::string::npos)
				LogA("OMTrace", O + "::" + F);
		}
	}
	return true;
}

// Bots far from every human only target each other after a roll (0.4-2% on Hard/Very Hard), so offline they wander. Force the roll to pass.
static void PatchAIRecognition(SDK::UObject* O)
{
	*(float*)((char*)O + 0x2A0) = 1.f;	// ProbabilityToFindEnemyIfNoPlayersAround
	*(float*)((char*)O + 0x29C) = 1e9f;	// no-players distance threshold
}

void OneMenu::OnPEPost(SDK::UObject* This, SDK::UFunction* Function)
{
	static SDK::FName Setup{A8CL::FName::NAME_FindOrAdd("SetupAILevel")};
	if (Function->Name == Setup && This->Class && This->Class->GetName() == "BP_AJBInGameAIRecognition_C") PatchAIRecognition(This);
	// "Network is offline." only reports the missing original ALL.Net/arcade network: hide it, log it. Other windows are untouched.
	static SDK::FName ShowTitle{A8CL::FName::NAME_FindOrAdd("ShowTitle")}, ShowText{A8CL::FName::NAME_FindOrAdd("ShowTextOnly")};
	if ((Function->Name == ShowTitle || Function->Name == ShowText) && This->Class && This->Class->GetName() == "WB_CommonWIndow_S_C")
	{
		std::string T;
		for (int Off : {0x300, 0x310}) if (SDK::UTextBlock* B = *(SDK::UTextBlock**)((char*)This + Off)) T += SDK::UKismetTextLibrary::Conv_TextToString(B->GetText()).ToString() + " | ";
		std::string L = T; for (char& c : L) c = (char)tolower((unsigned char)c);
		if (L.find("network is offline") != std::string::npos || L.find("while offline") != std::string::npos)
		{
			LogA("OneMenu", "Suppressed ALL.Net offline notice: " + T);
			OfflinePopup = This; OfflinePopupT = 15.f;
			((SDK::UWidget*)This)->SetVisibility(SDK::ESlateVisibility::Collapsed);
		}
		else LogA("OneMenu", "Popup shown: " + T);
	}
}

void OneMenu::NetFailure(int Type, const std::string& Err)
{
	NetFailMsg = Err.find("TIMED OUT") != std::string::npos || Err.find("timed out") != std::string::npos
		? L"Connection to the host timed out. Check the IP address and that the host has started a match."
		: L"Connection to the host failed. Check the IP address, the host, and your network.";
	NetFailT = 12.f;
	LogA("OneMenu", std::format("Network failure {} {}", Type, Err));
}

int OneMenu::Console(const std::string& Cmd)
{
	LogA("OMConsole", Cmd);
	if (int r = MenuConsole(Cmd)) return r;
	if (Cmd.rfind("omtrace", 0) == 0) { TraceFilter = Cmd.size() > 8 ? Cmd.substr(8) : ""; if (TraceFilter == "off") TraceFilter.clear(); return 1; }
	if (Cmd.rfind("omdump ", 0) == 0)
	{
		SDK::UObject* O = FindLive(Cmd.substr(7).c_str());
		Dump(O);
		// also dump every object-typed child widget's class
		return true;
		return true;
	}
	if (Cmd.rfind("omcall ", 0) == 0)
	{
		size_t Sp = Cmd.find(' ', 7);
		if (Sp != std::string::npos) Call(FindLive(Cmd.substr(7, Sp - 7).c_str()), Cmd.substr(Sp + 1).c_str());
		return true;
	}
	return false;
}

// ================= One menu =================

enum class EMode { None, Training, Tutorial, Dealer, Host, Join, Quick };
static EMode Pending{EMode::None};		// visual pick in progress for this mode
static EMode PostAction{EMode::None};	// network step to run once back on the FrontEnd
static std::string HostCmd;
static bool bGotoFE{false};
static std::unordered_set<SDK::UObject*> Leveled;
static bool bHosting{false};
static bool bSearching{false};
static float GotoDelay{-1.f};
static float StartPressT{-1.f};
static float FEWait{0.f};
static float HoldElapsed{0.f};
static bool bHoldActive{false};
static bool bStartNow{false};
static std::wstring CurMap;

struct FBtn { SDK::UButton* B{}; SDK::UTextBlock* T{}; bool bWas{}; std::string L; };
static std::string VClick; static bool VClickHit{false};
static std::string LastFlow, LastPhase;
static float MatchDX[2]{-45.f, -38.f};
static SDK::UUserWidget* MenuW{}; static SDK::UUserWidget* SearchW{}; static SDK::UUserWidget* HoldW{};
static FBtn BQuick, BTrain, BTut, BDealer, BHost, BJoin, BEman, BBack, BStart;
static SDK::UEditableTextBox* IPBox{};
static FBtn BDiff; static float SearchT{0.f};
static SDK::UUserWidget* CoverW{}; static bool bCoverNet{false}; static float CoverNetT{0.f};
static SDK::UTextBlock* HoldTxt{};
static SDK::UUserWidget* NoticeW{}; static SDK::UTextBlock* NoticeTxt{}; static std::wstring NoticeShown;
static SDK::UTextBlock* StatusTxt{}; static SDK::UTextBlock* DrawTxt{}; static FBtn BDraw;
static bool bResultSent{false}, bLoggedIn{false};
static SDK::UObject* FE{}; static SDK::UObject* HostMenu{}; static SDK::UObject* Proxy{};
static bool bHostMenuOpen{false};
static EMode DeferredPick{EMode::None};

static SDK::UWorld* World() { return (GEngine && GEngine->GameViewport) ? GEngine->GameViewport->World : nullptr; }

static std::filesystem::path AppDir()
{
#pragma warning(suppress: 4996)
	const char* L = getenv("LOCALAPPDATA");
	std::filesystem::path P = std::filesystem::path(L ? L : ".") / "AJB";
	std::error_code Err; std::filesystem::create_directories(P, Err);
	return P;
}

// Bot difficulty (1 Easy .. 4 Very Hard), saved in %LOCALAPPDATA%\AJB\onemenu.cfg.
static const wchar_t* DiffName(int L) { static const wchar_t* N[] = {L"Easy", L"Normal", L"Hard", L"Very Hard"}; return N[std::clamp(L, 1, 4) - 1]; }
static void LoadBotSetting()
{
	static bool bDone{false}; if (bDone) return; bDone = true;
	std::ifstream F(AppDir() / "onemenu.cfg"); std::string Line;
	while (std::getline(F, Line)) if (Line.rfind("BotDifficulty=", 0) == 0) try { OneMenu::BotSetting = std::clamp(std::stoi(Line.substr(14)), 1, 4); } catch (...) {}
	OneMenu::BotLevel = OneMenu::BotSetting;
}
static void SaveBotSetting() { std::ofstream(AppDir() / "onemenu.cfg", std::ios::trunc) << "BotDifficulty=" << OneMenu::BotSetting << '\n'; }

static void WritePhase(const char* Ph)
{
	static std::string Last;
	if (Last == Ph) return;
	Last = Ph; LastPhase = Ph;
	std::ofstream(AppDir() / "phase.txt", std::ios::trunc) << Ph;
	LogA("OneMenu", std::string("phase.txt = ") + Ph);
}

static void Exec(const std::string& Cmd)
{
	if (!GEngine || !GEngine->GameViewport || !GEngine->GameViewport->ViewportConsole) return;
	std::wstring W(Cmd.begin(), Cmd.end());
	SDK::FString S{W.c_str()};
	UFunctions::UConsole(GEngine->GameViewport->ViewportConsole, S);
}

static SDK::UObject* NewObj(SDK::UClass* C, SDK::UObject* Outer)
{
	return Call<UFunctions::Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(C, Outer, A8CL::FName::NAME_FindOrAdd("None"), 0, UFunctions::EInternalObjectFlags::None, 0, 0, 0, 0);
}
template<class T> static T* NewW(SDK::UUserWidget* U) { return (T*)NewObj(T::StaticClass(), U->WidgetTree); }

static SDK::FText Txt(const std::wstring& W) { SDK::FString S{W.c_str()}; return SDK::UKismetTextLibrary::Conv_StringToText(S); }

static SDK::UTextBlock* Label(SDK::UUserWidget* U, const std::wstring& Str, int Size)
{
	SDK::UTextBlock* T = NewW<SDK::UTextBlock>(U);
	T->SetText(Txt(Str));
	SDK::FSlateFontInfo F = T->Font; F.Size = Size; T->SetFont(F);
	return T;
}

static SDK::UUserWidget* Shell()
{
	// Not cached: the class is not rooted and can be garbage collected between maps.
	SDK::UClass* C = UFunctions::StaticLoadClass(SDK::UUserWidget::StaticClass(), GEngine, L"/Game/Aeyth8/Blueprints/WBP_Cursor.WBP_Cursor_C", nullptr, 0, nullptr);
	SDK::UWorld* W = World();
	if (!C || !W) return nullptr;
	SDK::UUserWidget* U = SDK::UWidgetBlueprintLibrary::Create(W, C, SDK::UGameplayStatics::GetPlayerController(W, 0));
	if (U && !U->WidgetTree) U->WidgetTree = (SDK::UWidgetTree*)NewObj(SDK::UWidgetTree::StaticClass(), U);
	return (U && U->WidgetTree) ? U : nullptr;
}

// Full-screen border with a centred vertical box; Alpha 0 = overlay that lets clicks through.
static SDK::UVerticalBox* Frame(SDK::UUserWidget* U, float Alpha, SDK::EVerticalAlignment VA)
{
	SDK::UBorder* B = NewW<SDK::UBorder>(U);
	B->BrushColor = {0.02f, 0.02f, 0.05f, Alpha};
	B->HorizontalAlignment = SDK::EHorizontalAlignment::HAlign_Center;
	B->VerticalAlignment = VA;
	if (Alpha == 0.f) B->Visibility = SDK::ESlateVisibility::SelfHitTestInvisible;
	SDK::UVerticalBox* V = NewW<SDK::UVerticalBox>(U);
	B->SetContent(V);
	U->WidgetTree->RootWidget = B;
	return V;
}

static FBtn AddBtn(SDK::UUserWidget* U, SDK::UVerticalBox* V, const std::wstring& Str, int Size, float Pad, SDK::FLinearColor Col)
{
	FBtn R;
	R.B = NewW<SDK::UButton>(U);
	R.B->IsFocusable = false;
	R.B->BackgroundColor = Col;
	R.T = Label(U, Str, Size);
	for (wchar_t c : Str) R.L += (char)c;
	if (SDK::UButtonSlot* S = (SDK::UButtonSlot*)R.B->SetContent(R.T)) { S->SetPadding({40.f, Pad, 40.f, Pad}); S->SetHorizontalAlignment(SDK::EHorizontalAlignment::HAlign_Center); }
	if (SDK::UVerticalBoxSlot* S = V->AddChildToVerticalBox(R.B)) { S->SetPadding({0.f, 6.f, 0.f, 6.f}); S->SetHorizontalAlignment(SDK::EHorizontalAlignment::HAlign_Fill); }
	return R;
}

static void AddText(SDK::UVerticalBox* V, SDK::UTextBlock* T)
{
	if (SDK::UVerticalBoxSlot* S = V->AddChildToVerticalBox(T)) { S->SetPadding({0.f, 6.f, 0.f, 6.f}); S->SetHorizontalAlignment(SDK::EHorizontalAlignment::HAlign_Center); }
}

static bool Clicked(FBtn& B)
{
	if (!B.B) return false;
	if (!VClick.empty() && _stricmp(VClick.c_str(), B.L.c_str()) == 0) { VClick.clear(); VClickHit = true; return true; }
	const bool P = B.B->IsPressed();
	const bool R = B.bWas && !P && B.B->IsHovered();
	B.bWas = P;
	return R;
}

static void Show(SDK::UUserWidget* W, bool b) { if (W) W->SetVisibility(b ? SDK::ESlateVisibility::Visible : SDK::ESlateVisibility::Collapsed); }

static void BuildMenu()
{
	MenuW = Shell(); if (!MenuW) return;
	SDK::UVerticalBox* V = Frame(MenuW, 0.93f, SDK::EVerticalAlignment::VAlign_Center);
	const SDK::FLinearColor Main{0.85f, 0.45f, 0.05f, 1.f}, Norm{0.12f, 0.16f, 0.35f, 1.f}, Net{0.08f, 0.28f, 0.22f, 1.f};
	StatusTxt = Label(MenuW, L"", 22); AddText(V, StatusTxt);
	BQuick  = AddBtn(MenuW, V, L"QUICK MATCH", 46, 22.f, Main);
	BTrain  = AddBtn(MenuW, V, L"Training", 26, 8.f, Norm);
	BTut    = AddBtn(MenuW, V, L"Tutorial", 26, 8.f, Norm);
	BDealer = AddBtn(MenuW, V, L"Dealer's Challenge", 26, 8.f, Norm);
	BHost   = AddBtn(MenuW, V, L"Host Online", 26, 8.f, Net);
	BJoin   = AddBtn(MenuW, V, L"Join Online", 26, 8.f, Net);
	IPBox = NewW<SDK::UEditableTextBox>(MenuW);
	IPBox->SetText(Txt(L"127.0.0.1"));
	IPBox->SetHintText(Txt(L"Host IP address"));
	if (SDK::UVerticalBoxSlot* S = V->AddChildToVerticalBox(IPBox)) { S->SetPadding({0.f, 0.f, 0.f, 6.f}); S->SetHorizontalAlignment(SDK::EHorizontalAlignment::HAlign_Fill); }
	BEman   = AddBtn(MenuW, V, L"Emanate", 26, 8.f, Norm);
	BDiff   = AddBtn(MenuW, V, std::wstring(L"Bot difficulty: ") + DiffName(OneMenu::BotSetting), 26, 8.f, Norm);
	BDraw   = AddBtn(MenuW, V, L"Lucky Draw (1 ticket)", 26, 8.f, {0.45f, 0.12f, 0.45f, 1.f});
	DrawTxt = Label(MenuW, L"", 22); AddText(V, DrawTxt);
	MenuW->AddToViewport(200);
}

// Opaque English "Loading..." screen over every old PC-port menu frame (mode select skip, FrontEnd return, network step).
static void UpdateCover(float DT)
{
	if (bCoverNet && (CoverNetT += DT) > 90.f) bCoverNet = false;
	const bool bFE = CurMap.find(L"AJBFrontEnd") != std::wstring::npos;
	const bool bSM = CurMap.find(L"AJBSimpleMatch_P") != std::wstring::npos;
	const bool Want = (bFE && (!MenuW || PostAction != EMode::None)) || (bFE && bCoverNet && !(MenuW && MenuW->IsVisible()))
		|| (bSM && LastFlow != "SimpleMatch.SelectCharacter") || (Pending != EMode::None && LastFlow == "SimpleMatch.SelectMode");
	if (Want && !CoverW)
	{
		CoverW = Shell(); if (!CoverW) return;
		SDK::UVerticalBox* V = Frame(CoverW, 1.f, SDK::EVerticalAlignment::VAlign_Center);
		AddText(V, Label(CoverW, L"Loading...", 40));
		CoverW->AddToViewport(190);
	}
	if (CoverW && CoverW->IsVisible() != Want) CoverW->SetVisibility(Want ? SDK::ESlateVisibility::Visible : SDK::ESlateVisibility::Collapsed);
}

// Matching countdown row: the English label is longer than the JP one and runs under the heart, and the "s" (秒) sits far right.
// Shorten the label and slide it left of the heart, and pull the unit in next to the number.
static SDK::UWidget* Sub(SDK::UObject* O, const char* Name);
static void FixMatchRow(float DT)
{
	static float T{0.f};
	if (LastFlow != "OutGame.Matching" || (T += DT) < 0.5f) return;
	T = 0.f;
	for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
	{
		SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
		if (!O || !O->Class || O->IsDefaultObject()) continue;
		// Quick Match hold: our own line carries the real countdown, so the game's heart timer row is hidden (two clocks would disagree).
		if (O->Class->GetName() == "WB_TimeLimitCountDown_C" || O->Class->GetName() == "WB_TimeLimit_TextSet_C")
		{
			const SDK::ESlateVisibility V = bHoldActive ? SDK::ESlateVisibility::Collapsed : SDK::ESlateVisibility::SelfHitTestInvisible;
			if (((SDK::UWidget*)O)->Visibility != V) ((SDK::UWidget*)O)->SetVisibility(V);
			continue;
		}
		if (!O->IsA(SDK::UTextBlock::StaticClass()) || !O->Outer || !O->Outer->Outer || O->Outer->Outer->Class->GetName() != "WB_TimeLimit_TextSet_C") continue;
		const std::string N = O->GetName();
		SDK::UTextBlock* B = (SDK::UTextBlock*)O;
		if (N == "AJBTextBlock_130") { B->SetText(Txt(L"Match starts in")); B->SetRenderTranslation({MatchDX[0], 0.f}); }
		else if (N == "AJBTextBlock_0") { B->SetText(Txt(L"sec")); B->SetRenderTranslation({MatchDX[1], 0.f}); }
	}
}

// Small banner at the bottom: only real problems (arcade server down, Steam connection failed, Steam not running).
static void UpdateNotice(float DT)
{
	if (NetFailT > 0.f) NetFailT -= DT;
	if (SteamFailT > 0.f) SteamFailT -= DT;
	std::wstring Want;
	if (ArcadeLink::Polled() && !ArcadeLink::Alive()) Want = L"Arcade server not responding: profile, PP, tickets and draws are not being saved. Start ajbserver\\ajbserver.py.";
	else if (NetFailT > 0.f) Want = NetFailMsg;
	else if (SteamFailT > 0.f) Want = L"Steam is not running. Online play needs Steam: start Steam, then try again.";
	if (Want == NoticeShown && (Want.empty() || NoticeW)) return;
	if (!NoticeW && !Want.empty())
	{
		NoticeW = Shell(); if (!NoticeW) return;
		SDK::UVerticalBox* V = Frame(NoticeW, 0.f, SDK::EVerticalAlignment::VAlign_Bottom);
		SDK::UBorder* B = NewW<SDK::UBorder>(NoticeW); B->BrushColor = {0.45f, 0.04f, 0.04f, 0.92f}; B->Visibility = SDK::ESlateVisibility::SelfHitTestInvisible;
		NoticeTxt = Label(NoticeW, L"", 24);
		if (SDK::UBorderSlot* S = (SDK::UBorderSlot*)B->SetContent(NoticeTxt)) S->SetPadding({24.f, 10.f, 24.f, 10.f});
		if (SDK::UVerticalBoxSlot* S = V->AddChildToVerticalBox(B)) { S->SetPadding({0.f, 0.f, 0.f, 40.f}); S->SetHorizontalAlignment(SDK::EHorizontalAlignment::HAlign_Center); }
		NoticeW->AddToViewport(400);
	}
	if (!NoticeW) return;
	NoticeShown = Want;
	if (NoticeTxt && !Want.empty()) NoticeTxt->SetText(Txt(Want));
	NoticeW->SetVisibility(Want.empty() ? SDK::ESlateVisibility::Collapsed : SDK::ESlateVisibility::SelfHitTestInvisible);
	std::string A; for (wchar_t c : Want) A += (char)c;
	LogA("OneMenu", Want.empty() ? "Notice cleared" : "Notice: " + A);
}

static void BuildSearch()
{
	SearchW = Shell(); if (!SearchW) return;
	SDK::UVerticalBox* V = Frame(SearchW, 0.93f, SDK::EVerticalAlignment::VAlign_Center);
	AddText(V, Label(SearchW, L"Searching for players...", 40));
	BBack = AddBtn(SearchW, V, L"Back", 26, 8.f, {0.35f, 0.08f, 0.08f, 1.f});
	SearchW->AddToViewport(210);
}

static void BuildHold()
{
	HoldW = Shell(); if (!HoldW) return;
	SDK::UVerticalBox* V = Frame(HoldW, 0.f, SDK::EVerticalAlignment::VAlign_Top);
	AddText(V, Label(HoldW, L" ", 70));	// spacer: sit below the MATCHING title, above the countdown row
	HoldTxt = Label(HoldW, L"Waiting for players: 0 joined, starting in 1:30", 26);
	AddText(V, HoldTxt);
	BStart = AddBtn(HoldW, V, L"Start now", 24, 6.f, {0.85f, 0.45f, 0.05f, 1.f});
	HoldW->AddToViewport(250);
}

// Hide every widget variable on the prototype FrontEnd except the host settings popup.
static void HideFrontEnd()
{
	if (!FE) return;
	for (SDK::UStruct* S = FE->Class; S && S->GetName() != "UserWidget"; S = S->Super)
		for (SDK::UField* F = S->Children; F; F = F->Next)
		{
			if (F->Class->GetName() != "ObjectProperty" || F->GetName() == "WBP_TempHostMenu") continue;
			SDK::UObject* O = *(SDK::UObject**)((unsigned char*)FE + ((SDK::UProperty*)F)->Offset);
			if (O && O->IsA(SDK::UWidget::StaticClass())) ((SDK::UWidget*)O)->SetVisibility(SDK::ESlateVisibility::Collapsed);
		}
}

static SDK::UWidget* Sub(SDK::UObject* O, const char* Name) { void* P = OneMenu::PropPtr(O, Name); return P ? *(SDK::UWidget**)P : nullptr; }

static int ReadArrowIndex(SDK::UObject* Arrow, int Fallback)
{
	if (!Arrow) return Fallback;
	for (SDK::UStruct* S = Arrow->Class; S && S->GetName() != "UserWidget"; S = S->Super)
		for (SDK::UField* F = S->Children; F; F = F->Next)
			if (F->Class->GetName() == "IntProperty" && F->GetName().find("Index") != std::string::npos)
				return *(int*)((unsigned char*)Arrow + ((SDK::UProperty*)F)->Offset);
	return Fallback;
}

static void StartPick(EMode M)
{
	Pending = M;
	if ((M == EMode::Host || M == EMode::Join || M == EMode::Quick) && !ArcadeLink::SteamRunning()) { SteamFailT = 10.f; LogA("OneMenu", "Online chosen without Steam running"); }
	Show(MenuW, false);
	LogA("OneMenu", std::format("StartPick {}", (int)M));
	Exec("open /Game/AJB/Maps/AJBSimpleMatch_P");
}

static std::string QJsonPath() { return (AppDir() / "quickmatch.json").string(); }

static void StopSearch()
{
	bSearching = false;
	std::error_code Err; std::filesystem::remove(QJsonPath(), Err);
	Show(SearchW, false);
	Show(MenuW, true);
}

// Ends the matching hold early: zero the remaining matching time so the existing timer fires on its next check.
static void StartNow()
{
	if (!Proxy) Proxy = OneMenu::FindLive("BP_AJBOutGameProxy_C");
	if (float* T = (float*)OneMenu::PropPtr(Proxy, "MatchingTimeOutSecond")) *T = 0.f;
	if (int* R = (int*)OneMenu::PropPtr(Proxy, "MatchingRemainTime")) *R = 0;
	HoldElapsed = 90.f;
}

static int MenuConsole(const std::string& Cmd)
{
	if (Cmd.rfind("AJBExecInternal BotLevel", 0) == 0) { try { OneMenu::BotLevel = std::clamp(std::stoi(Cmd.substr(25)), 1, 4); } catch (...) {} LogA("OneMenu", std::format("BotLevel {}", OneMenu::BotLevel)); return 2; }
	// The prototype FrontEnd blueprints send malformed commands (no space, Mode= instead of PlayMode=): translate them.
	if (Cmd.rfind("AJBExecInternalChar", 0) == 0) return 2;
	if (Cmd.rfind("AJBExecInternalHost", 0) == 0)
	{
		auto Get = [&](const char* K) -> std::string
		{
			size_t I = Cmd.find(K); if (I == std::string::npos) return "";
			I += strlen(K); size_t En = Cmd.find('?', I);
			return Cmd.substr(I, En == std::string::npos ? std::string::npos : En - I);
		};
		std::string Area = Get("?Area="), NPC = Get("?NPCNum="), Mode = Get("?Mode=");
		if (Area.empty()) Area = "4";
		if (NPC.empty()) NPC = "0";
		const char* PM = (Mode == "2") ? "Pair" : "Solo";
		const int Diff = OneMenu::BotSetting - 1;
		HostCmd = std::format("AJBExecInternal Host?Area={}?PlayMode={}?NPCNum={}?NPCDifficulty={}", Area, PM, NPC, Diff);
		LogA("OneMenu", "Translated host command: " + HostCmd);
		bHostMenuOpen = false;
		if (HostMenu) ((SDK::UWidget*)HostMenu)->SetVisibility(SDK::ESlateVisibility::Collapsed);
		DeferredPick = EMode::Host;
		return 2;
	}
	if (Cmd.rfind("AJBExecInternal Host", 0) == 0) { bHosting = true; if (bSearching) { bSearching = false; Show(SearchW, false); } }
	if (Cmd.rfind("open ", 0) == 0 && bSearching) { bSearching = false; Show(SearchW, false); }
	if (Cmd == "omstartnow") { bStartNow = true; return 1; }
	return 0;
}

static bool bFlowHeld{false}, bFlowForced{false};
static float ForcedT{-1.f};
bool OneMenu::HoldsFlow(const std::string& Tag)
{
	if (Tag != "OutGame.SelectStartLocation") return false;
	if (bFlowForced) { LogA("OneMenu", "Dropping the proxy's late start-location change"); return true; }
	if (!bHoldActive || HoldElapsed >= 90.f) return false;
	bFlowHeld = true; return true;
}

bool OneMenu::OnFlow(const std::string& Tag)
{
	// The character select's exit starts a manual loading screen that deadlocks a later listen ServerTravel; skip it and go to FrontEnd plainly.
	if (Tag == "SimpleMatch.Exit" && (Pending == EMode::Host || Pending == EMode::Join || Pending == EMode::Quick))
	{
		PostAction = Pending; Pending = EMode::None; bGotoFE = true; LastFlow = Tag;
		LogA("OneMenu", "Character picked, skipping SimpleMatch.Exit for the network step");
		return true;
	}
	LastFlow = Tag;
	if (Tag.rfind("OutGame.", 0) == 0 || Tag.rfind("InGame.", 0) == 0) bCoverNet = false;
	if (!bResultSent && (Tag == "InGame.Victory" || Tag == "InGame.Retire" || Tag == "InGame.Spector") && CurMap.find(L"Tutorial") == std::wstring::npos)
	{
		bResultSent = true;
		int Kills{0}, Alive{0};
		SDK::UWorld* Wd = World(); SDK::APlayerController* PC = Wd ? SDK::UGameplayStatics::GetPlayerController(Wd, 0) : nullptr;
		if (PC && PC->Class->GetName() == "BP_AJBInGamePlayerController_C") Kills = *(int*)((char*)PC + 0x768);
		for (int i{0}; Tag != "InGame.Victory" && i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (O && O->Class && !O->IsDefaultObject() && O != (PC ? (SDK::UObject*)PC->Pawn : nullptr) && O->IsA(SDK::AAJBInGameCharacter::StaticClass()) && *(int*)((char*)O + 0x8A4) > 0) ++Alive;
		}
		const int Rank = Tag == "InGame.Victory" ? 1 : Alive + 1;
		LogA("OneMenu", std::format("Match over ({}): place {}, {} kills", Tag, Rank, Kills));
		ArcadeLink::Result(Kills, Rank);
	}
	if (Tag == "SimpleMatch.SelectMode" && Pending != EMode::None) GotoDelay = 0.f;
	if (bHosting)
	{
		if (Tag == "OutGame.Matching" || Tag == "OutGame.SelectStartLocation") WritePhase("open");
		else if (Tag.rfind("OutGame.ToInGame", 0) == 0 || Tag.rfind("InGame.", 0) == 0) WritePhase("started");
	}
	if (Tag == "OutGame.Matching" && bHosting && bQuickHost)
	{
		bHoldActive = true; HoldElapsed = 0.f; bStartNow = false;
		if (!Proxy) Proxy = FindLive("BP_AJBOutGameProxy_C");
		if (float* T = (float*)PropPtr(Proxy, "MatchingTimeOutSecond")) { LogA("OneMenu", std::format("MatchingTimeOutSecond {} -> 90", *T)); *T = 90.f; }
	}
	else if (Tag != "OutGame.Matching") { bHoldActive = false; Show(HoldW, false); }
	return false;
}

const wchar_t* OneMenu::OnBrowse(const wchar_t* Map, bool bListen)
{
	MenuW = SearchW = HoldW = NoticeW = CoverW = nullptr; FE = HostMenu = Proxy = nullptr; IPBox = nullptr; HoldTxt = NoticeTxt = StatusTxt = DrawTxt = nullptr; NoticeShown.clear();
	BQuick = BTrain = BTut = BDealer = BHost = BJoin = BEman = BBack = BStart = BDraw = BDiff = FBtn{};
	OfflinePopup = nullptr; bResultSent = false;
	bHostMenuOpen = false; FEWait = 0.f; GotoDelay = -1.f; StartPressT = -1.f;
	CurMap = Map; Leveled.clear();
	if (CurMap == L"/Game/AJB/Maps/SimpleStartLocationSelect_P" && !bListen)
	{
		EMode M = Pending; Pending = EMode::None;
		if (M == EMode::Host || M == EMode::Join || M == EMode::Quick)
		{
			PostAction = M;
			CurMap = L"/Game/Aeyth8/Maps/FrontEnd/AJBFrontEnd";
			LogA("OneMenu", "Character picked, returning to FrontEnd for the network step");
			return L"/Game/Aeyth8/Maps/FrontEnd/AJBFrontEnd";
		}
	}
	if (CurMap.find(L"AJBFrontEnd") != std::wstring::npos || CurMap.find(L"TitleScreen") != std::wstring::npos)
	{
		bHosting = false; bQuickHost = false; bHoldActive = false; bFlowHeld = false; bFlowForced = false; ForcedT = -1.f; BotLevel = BotSetting;
		WritePhase("menu");
	}
	return nullptr;
}

static void RunPostAction()
{
	LogA("OneMenu", "RunPostAction");
	const int Ch = (int)AJB::GetSelectedCharacter();
	const EMode M = PostAction; PostAction = EMode::None;
	LogA("OneMenu", std::format("PostAction {} char {}", (int)M, Ch));
	bCoverNet = (M == EMode::Host || M == EMode::Join); CoverNetT = 0.f;
	if (M == EMode::Host)
	{
		Exec(std::format("AJBExecInternal Char {}", Ch));
		LogA("OneMenu", "Char sent, hosting: " + HostCmd);
		Exec(HostCmd);
		LogA("OneMenu", "Host command returned");
	}
	else if (M == EMode::Join)
	{
		Exec(std::format("AJBExecInternal Char {}", Ch));
		Exec("open " + HostCmd);
	}
	else if (M == EMode::Quick)
	{
		std::ofstream(QJsonPath(), std::ios::trunc) << std::format("{{\"char\":{},\"t\":{}}}", Ch, (long long)std::time(nullptr));
		bSearching = true; SearchT = 0.f;
		BuildSearch();
	}
}

static void HarnessPump();
void OneMenu::Tick(float DT)
{
	HarnessPump();
	// SetupAILevel can also run from Blueprint bytecode without ProcessEvent: re-apply in matches.
	static float AIScan{0.f}; AIScan += DT;
	if (AIScan > 2.f && LastFlow.rfind("InGame.", 0) == 0)
	{
		AIScan = 0.f; int N{0};
		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (!O || !O->Class || O->IsDefaultObject() || O->Class->GetName() != "BP_AJBInGameAIRecognition_C") continue;
			// SetupAILevel runs from bytecode, not ProcessEvent, so re-run it once per bot with BotLevel.
			if (Leveled.insert(O).second) { int L = BotLevel; OneMenu::Call(O, "SetupAILevel", &L); PatchAIRecognition(O); ++N; }
			else if (*(float*)((char*)O + 0x2A0) != 1.f) PatchAIRecognition(O);
		}
		if (N) LogA("OneMenu", std::format("AI level {} + find-enemy patch applied to {} bots", BotLevel, N));
	}
	ArcadeLink::Start();
	LoadBotSetting();
	// Quick Match without AJB Online.exe: nobody found in 20 s (the app would have hosted by now) -> host a bot match ourselves.
	if (bSearching && (SearchT += DT) > 22.f)
	{
		LogA("OneMenu", "Quick Match: no players found in 20 s, hosting a bot match");
		Exec(std::format("AJBExecInternal Host?Area={}?PlayMode=Solo?NPCNum=29?NPCDifficulty={}?QuickMatch=1", 2 + (int)(GetTickCount64() % 10), OneMenu::BotSetting - 1));	// random battle royale map, Areas 2-11 like ajbnet.py
	}
	if (!World()) return;
	UpdateCover(DT);
	FixMatchRow(DT);
	UpdateNotice(DT);
	// ShowTitle is a BP-to-BP call (no ProcessEvent), so also scan: hide any visible common window carrying the ALL.Net offline text.
	static float ScanT{0.f}; static std::vector<std::pair<int, SDK::UObject*>> Wins; static float FindT{0.f};
	if ((FindT -= DT) <= 0.f)
	{
		FindT = 3.f; Wins.clear();
		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (O && O->Class && !O->IsDefaultObject() && O->Class->GetName() == "WB_CommonWIndow_S_C") Wins.push_back({i, O});
		}
	}
	if ((ScanT -= DT) <= 0.f)
	{
		ScanT = 0.05f;
		for (auto [Idx, O] : Wins)
		{
			if (SDK::UObject::GObjects->GetByIndex(Idx) != O) continue;	// collected since the last find
			SDK::UWidget* W = (SDK::UWidget*)O;
			if (!W->IsVisible()) continue;
			std::string T;
			for (int Off : {0x300, 0x310}) if (SDK::UTextBlock* B = *(SDK::UTextBlock**)((char*)O + Off)) T += SDK::UKismetTextLibrary::Conv_TextToString(B->GetText()).ToString() + " | ";
			std::string L = T; for (char& c : L) c = (char)tolower((unsigned char)c);
			if (L.find("network is offline") == std::string::npos && L.find("while offline") == std::string::npos) continue;
			W->SetVisibility(SDK::ESlateVisibility::Collapsed);
			if (OfflinePopup != O) { OfflinePopup = O; LogA("OneMenu", "Suppressed ALL.Net offline notice: " + T); }
		}
	}
	if (bGotoFE) { bGotoFE = false; Exec("open /Game/Aeyth8/Maps/FrontEnd/AJBFrontEnd"); return; }

	// ---- FrontEnd ----
	if (CurMap.find(L"AJBFrontEnd") != std::wstring::npos)
	{
		FEWait += DT;
		if (!FE) { if (FEWait < ((PostAction != EMode::None || bSearching) ? 3.f : 0.5f)) return; FE = FindLive("WBPC_TEMP_FrontEnd_FINAL_C"); if (FE && FE->GetFullName().find(" Transient.") == std::string::npos) { LogA("OneMenu", "FE not transient: " + FE->GetFullName()); FE = nullptr; } if (!FE) return; }
		if (!HostMenu) HostMenu = Sub(FE, "WBP_TempHostMenu");
		static float HideT{0.f}; HideT += DT;
		if (HideT > 0.25f) { HideT = 0.f; HideFrontEnd(); if (HostMenu && !bHostMenuOpen) ((SDK::UWidget*)HostMenu)->SetVisibility(SDK::ESlateVisibility::Collapsed); }
		if (!MenuW)
		{
			// A redirected travel inherits the manual loading screen meant for SimpleStartLocationSelect; FrontEnd never ends it.
			LogA("OneMenu", "FE found, building menu");
			BuildMenu();
			LogA("OneMenu", "Menu built");
			if (PostAction != EMode::None) { Show(MenuW, false); RunPostAction(); }
			else if (bSearching) { Show(MenuW, false); BuildSearch(); }
		}
		if (!MenuW) return;

		if (bHostMenuOpen && HostMenu && !((SDK::UWidget*)HostMenu)->IsVisible()) { bHostMenuOpen = false; Show(MenuW, true); }

		if (DeferredPick != EMode::None) { EMode M = DeferredPick; DeferredPick = EMode::None; StartPick(M); return; }
		if (Clicked(BQuick)) StartPick(EMode::Quick);
		if (Clicked(BTrain)) StartPick(EMode::Training);
		if (Clicked(BTut)) StartPick(EMode::Tutorial);
		if (Clicked(BDealer)) StartPick(EMode::Dealer);
		if (Clicked(BHost))
		{
			// No old port host sub-menu: host straight away with a random battle royale map, 20 bots, the saved bot difficulty.
			HostCmd = std::format("AJBExecInternal Host?Area={}?PlayMode=Solo?NPCNum=20?NPCDifficulty={}", 2 + (int)(GetTickCount64() % 10), OneMenu::BotSetting - 1);
			LogA("OneMenu", "Host: " + HostCmd);
			StartPick(EMode::Host);
		}
		if (false)
		{
			LogA("OneMenu", std::format("Host clicked, menu {}", HostMenu ? HostMenu->GetFullName() : "null"));
			if (!HostMenu) return;
			Show(MenuW, false); bHostMenuOpen = true;
			((SDK::UWidget*)HostMenu)->SetVisibility(SDK::ESlateVisibility::Visible);
			if (SDK::UWidget* A = Sub(HostMenu, "Arrow_Character")) A->SetVisibility(SDK::ESlateVisibility::Collapsed);
			// The mod menu starts on Area 7 / 0 bots; start it on Area 4, 20 bots, Very Hard. The player's changes still apply.
			static SDK::UObject* DefaultsFor{nullptr};
			if (DefaultsFor != HostMenu)
			{
				DefaultsFor = HostMenu;
				auto SetSel = [](SDK::UObject* W, int I)
				{
					int* P = (int*)PropPtr(W, "CurrentIndex"); if (!P) return; *P = I;
					auto* Vals = (SDK::TArray<SDK::FString>*)PropPtr(W, "ValueArray");
					auto** T = (SDK::UTextBlock**)PropPtr(W, "TXT_ItemValue");
					if (Vals && T && *T && I < Vals->Num()) (*T)->SetText(SDK::UKismetTextLibrary::Conv_StringToText((*Vals)[I]));
				};
				SetSel(Sub(HostMenu, "Arrow_Location"), 3);
				SetSel(Sub(HostMenu, "Arrow_NPC_Difficulty"), 3);
				if (SDK::UObject* E = Sub(HostMenu, "EArrow_NPC"))
				{
					if (int* P = (int*)PropPtr(E, "CurrentValue")) *P = 20;
					if (auto** T = (SDK::UEditableText**)PropPtr(E, "ETXT_ItemValue"); T && *T) (*T)->SetText(Txt(L"20"));
				}
			}
		}
		if (Clicked(BJoin))
		{
			std::string IP = IPBox ? IPBox->GetText().ToString() : "";
			if (IP.empty()) IP = "127.0.0.1";
			if (IP.find(':') == std::string::npos)
			{
				std::wstring P = CMLA::ServerPort.GetArgumentAsString();
				IP += ":" + std::string(P.begin(), P.end());
			}
			HostCmd = IP;
			StartPick(EMode::Join);
		}
		if (!bLoggedIn && ArcadeLink::Alive()) { bLoggedIn = true; std::wstring N = ArcadeLink::SteamName(); ArcadeLink::Login(N.empty() ? L"Player" : N); }
		static float StatT{0.f}; StatT += DT;
		if (StatT > 0.5f)
		{
			StatT = 0.f;
			const std::string St = ArcadeLink::Status();
			if (StatusTxt) StatusTxt->SetText(Txt(St.empty() ? L"Arcade profile offline" : std::wstring(St.begin(), St.end())));
			if (const std::string M = ArcadeLink::TakeMessage(); !M.empty() && DrawTxt) DrawTxt->SetText(Txt(std::wstring(M.begin(), M.end())));
		}
		if (Clicked(BDiff))
		{
			OneMenu::BotSetting = OneMenu::BotSetting % 4 + 1; OneMenu::BotLevel = OneMenu::BotSetting; SaveBotSetting();
			if (BDiff.T) BDiff.T->SetText(Txt(std::wstring(L"Bot difficulty: ") + DiffName(OneMenu::BotSetting)));
			LogA("OneMenu", std::format("Bot difficulty set to {}", OneMenu::BotSetting));
		}
		if (Clicked(BDraw)) { if (DrawTxt) DrawTxt->SetText(Txt(L"Drawing...")); ArcadeLink::Draw(1); }
		if (Clicked(BEman)) { Show(MenuW, false); OneMenu::Call(FE, "BndEvt__BT_Emanate_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature"); }
		if (Clicked(BBack)) StopSearch();
		return;
	}

	// ---- Original mode select: jump straight to the visual character select ----
	if (CurMap == L"/Game/AJB/Maps/AJBSimpleMatch_P" && Pending != EMode::None)
	{
		if (AJB::SimpleMatchHUD) AJB::SimpleMatchHUD->SetVisibility(SDK::ESlateVisibility::Hidden);
		if (GotoDelay >= 0.f && AJB::SimpleMatchHUD)
		{
			GotoDelay = -1.f;
			LogA("OneMenu", std::format("Goto for mode {}", (int)Pending));
			switch (Pending)
			{
			case EMode::Tutorial: AJB::SimpleMatchHUD->GotoTutorial(); break;
			case EMode::Dealer: AJB::SimpleMatchHUD->GotoPvE(); StartPressT = 0.f; break;
			default: AJB::SimpleMatchHUD->GotoTraining(); StartPressT = 0.f; break;
			}
		}
		if (StartPressT >= 0.f)
		{
			StartPressT += DT;
			static float Retry{0.f}; Retry += DT;
			if (Retry > 0.2f)
			{
				Retry = 0.f;
				SDK::UObject* Pop = FindLive(Pending == EMode::Dealer ? "WB_PvE_C" : "WB_Training_C");
				if (Pop && OneMenu::Call(Pop, "BndEvt__WB_CommonButton_START_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature")) { LogA("OneMenu", "Pressed START"); StartPressT = -1.f; }
				else if (StartPressT > 6.f) StartPressT = -1.f;
			}
		}
		return;
	}

	// ---- Quick match host hold ----
	// Start now: the start-location countdown still ends on the proxy's original schedule, so go in-game after a short pick window.
	if (ForcedT >= 0.f && (ForcedT += DT) > 12.f)
	{
		ForcedT = -1.f;
		if (LastFlow == "OutGame.SelectStartLocation") { LogA("OneMenu", "Start now: GotoInGame"); OneMenu::Call(Proxy ? Proxy : FindLive("BP_AJBOutGameProxy_C"), "GotoInGame"); }
	}
	if (bHoldActive)
	{
		HoldElapsed += DT;
		if (!HoldW) BuildHold();
		if (!Proxy) Proxy = FindLive("BP_AJBOutGameProxy_C");
		int Joined{0};
		if (SDK::UWorld* W = World(); W && W->GameState) Joined = W->GameState->PlayerArray.Num() - 1;
		const int Left = (int)(std::max)(0.f, 90.f - HoldElapsed);
		static int LastShown{-1};
		if (HoldTxt && (Left * 100 + Joined) != LastShown)
		{
			LastShown = Left * 100 + Joined;
			HoldTxt->SetText(Txt(std::format(L"Waiting for players: {} joined, starting in {}:{:02}", Joined < 0 ? 0 : Joined, Left / 60, Left % 60)));
		}
		if (Clicked(BStart)) bStartNow = true;
		if (bStartNow) { bStartNow = false; LogA("OneMenu", "Start now pressed"); StartNow(); }
		if (HoldElapsed >= 90.f)
		{
			bHoldActive = false; Show(HoldW, false);
			if (bFlowHeld) { bFlowHeld = false; LogA("OneMenu", "Hold over, releasing start-location select"); AJB::ReleaseHeldFlow(); }
			else if (SDK::UObject* GM = FindLive("BP_SimpleStartLocationSelectGameMode_C"))
			{
				// Start now before the proxy's own matching timer: change the server flow ourselves and drop its later change.
				SDK::UObject** M = (SDK::UObject**)PropPtr(GM, "BP_GameFlowStateManager");
				LogA("OneMenu", std::format("Start now: forcing start-location select ({})", M && *M ? "ok" : "no manager"));
				if (M && *M) { AJB::ForceFlow(*M, L"OutGame.SelectStartLocation"); bFlowForced = true; ForcedT = 0.f; }
			}
		}
	}
}

// ======================= Test harness: \\.\pipe\ajbtest-<PID> =======================
// Line protocol, one reply line per request ("ok ..." or "err ..."):
//   ping | exec <console cmd> | click <button label | widget name | x,y fractions> | key <FKey name> | state | shot <path.bmp>
#include "../../../MinHook/MinHook.h"
#include <thread>
#include <mutex>
#include <future>
#include <deque>
#include <atomic>
#include <vector>

struct FReq { std::string Line; std::promise<std::string> P; };
static std::mutex ReqM; static std::deque<FReq*> Reqs;
static HWND GameWnd{}; static WNDPROC OrigProc{};
static std::atomic<bool> bVCur{false}; static std::atomic<int> VCurX{0}, VCurY{0};
static BOOL(WINAPI* OrigGetCursorPos)(LPPOINT){};
static HWND(WINAPI* OrigGetForegroundWindow)(){};

static BOOL WINAPI HkGetCursorPos(LPPOINT P)
{
	if (bVCur && P && GameWnd) { POINT C{VCurX, VCurY}; ClientToScreen(GameWnd, &C); *P = C; return TRUE; }
	return OrigGetCursorPos(P);
}
static HWND WINAPI HkGetForegroundWindow() { return GameWnd ? GameWnd : OrigGetForegroundWindow(); }

// Swallow deactivation so the engine keeps treating the window as focused.
static LRESULT CALLBACK HarnessProc(HWND H, UINT M, WPARAM W, LPARAM L)
{
	if (M == WM_ACTIVATEAPP && !W) return 0;
	if (M == WM_ACTIVATE && LOWORD(W) == WA_INACTIVE) return 0;
	if (M == WM_KILLFOCUS) return 0;
	if (M == WM_NCACTIVATE && !W) return TRUE;
	return CallWindowProcW(OrigProc, H, M, W, L);
}

static BOOL CALLBACK FindGameWnd(HWND H, LPARAM)
{
	DWORD Pid{}; GetWindowThreadProcessId(H, &Pid);
	wchar_t Cls[64]{}; GetClassNameW(H, Cls, 64);
	if (Pid == GetCurrentProcessId() && wcscmp(Cls, L"UnrealWindow") == 0 && IsWindowVisible(H)) { GameWnd = H; return FALSE; }
	return TRUE;
}

// Slate only routes input after a real activation; take the foreground, then the subclass keeps it "active".
static void Activate()
{
	if (OrigGetForegroundWindow() != GameWnd)
	{
		const DWORD Fg = GetWindowThreadProcessId(OrigGetForegroundWindow(), nullptr), Me = GetWindowThreadProcessId(GameWnd, nullptr);
		AttachThreadInput(Fg, Me, TRUE);
		BringWindowToTop(GameWnd); SetForegroundWindow(GameWnd); SetActiveWindow(GameWnd); SetFocus(GameWnd);
		AttachThreadInput(Fg, Me, FALSE);
	}
	PostMessageW(GameWnd, WM_ACTIVATEAPP, TRUE, 0);
	PostMessageW(GameWnd, WM_ACTIVATE, WA_CLICKACTIVE, 0);
	PostMessageW(GameWnd, WM_SETFOCUS, 0, 0);
}

static bool EnableUnfocused()
{
	static bool bDone{false}; if (bDone) return true;
	if (!GameWnd) EnumWindows(FindGameWnd, 0);
	if (!GameWnd) return false;
	bDone = true;
	OrigProc = (WNDPROC)SetWindowLongPtrW(GameWnd, GWLP_WNDPROC, (LONG_PTR)HarnessProc);
	MH_Initialize();
	LPVOID T1{}, T2{};
	MH_CreateHookApiEx(L"user32", "GetCursorPos", (LPVOID)HkGetCursorPos, (LPVOID*)&OrigGetCursorPos, &T1);
	MH_CreateHookApiEx(L"user32", "GetForegroundWindow", (LPVOID)HkGetForegroundWindow, (LPVOID*)&OrigGetForegroundWindow, &T2);
	if (T1) MH_EnableHook(T1);
	if (T2) MH_EnableHook(T2);
	Activate();
	LogA("Harness", "Unfocused input enabled");
	return true;
}

static SDK::UObject* FindWidgetByName(const std::string& Name)
{
	SDK::UObject* Found{};
	for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
	{
		SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
		if (!O || !O->Class || O->IsDefaultObject() || O->GetName() != Name || !ClassNameIs(O->Class, "Widget")) continue;
		const std::string N = O->GetFullName();
		if (N.find("Archetype") != std::string::npos) continue;
		if (N.find(" Transient.") != std::string::npos) return O;
		if (!Found) Found = O;
	}
	return Found;
}

// Broadcast a button's bound click: call the owning widget's BndEvt__<Name>_... handler.
static std::string ClickWidget(const std::string& Name)
{
	SDK::UObject* W = FindWidgetByName(Name);
	if (!W) return "err no widget " + Name;
	const std::string Pre = "BndEvt__" + Name + "_";
	for (SDK::UObject* Own = W->Outer; Own; Own = Own->Outer)
	{
		if (!Own->Class || !ClassNameIs(Own->Class, "UserWidget")) continue;
		SDK::UFunction* Pick{};
		for (SDK::UStruct* S = Own->Class; S && !Pick; S = S->Super)
			for (SDK::UField* F = S->Children; F; F = F->Next)
			{
				const std::string FN = F->GetName();
				if (FN.rfind(Pre, 0) != 0) continue;
				if (FN.find("Clicked") != std::string::npos) { Pick = (SDK::UFunction*)F; break; }
				if (FN.find("Pressed") != std::string::npos && !Pick) Pick = (SDK::UFunction*)F;
			}
		if (Pick) { unsigned char Buf[0x400]{}; Own->ProcessEvent(Pick, Buf); return "ok " + Pick->GetName(); }
	}
	// Dynamically bound (Bind Event node): broadcast the button's multicast delegates by hand.
	if (ClassNameIs(W->Class, "Button"))
	{
		std::string Out;
		for (int Off : {0x3D0 /*OnPressed*/, 0x3E0 /*OnReleased*/, 0x3C0 /*OnClicked*/})
		{
			struct FArr { SDK::FScriptDelegate* D; int N, M; };
			FArr A = *(FArr*)((char*)W + Off);
			std::vector<SDK::FScriptDelegate> Copy(A.D, A.D + (A.N > 0 ? A.N : 0));
			for (const SDK::FScriptDelegate& D : Copy)
			{
				SDK::UObject* T = SDK::UObject::GObjects->GetByIndex(D.Object.ObjectIndex);
				if (!T || !T->Class) continue;
				for (SDK::UStruct* S = T->Class; S; S = S->Super)
					for (SDK::UField* F = S->Children; F; F = F->Next)
						if (F->Name == D.FunctionName) { unsigned char Buf[0x400]{}; T->ProcessEvent((SDK::UFunction*)F, Buf); Out += " " + F->GetName(); S = nullptr; goto Next; }
				Next:;
			}
		}
		if (!Out.empty()) return "ok delegates" + Out;
	}
	return "err no click binding for " + Name;
}

static UINT VkFor(const std::string& K)
{
	static const std::pair<const char*, UINT> T[] = {
		{"Enter",VK_RETURN},{"Escape",VK_ESCAPE},{"SpaceBar",VK_SPACE},{"Tab",VK_TAB},{"BackSpace",VK_BACK},
		{"Tilde",VK_OEM_3},{"Up",VK_UP},{"Down",VK_DOWN},{"Left",VK_LEFT},{"Right",VK_RIGHT},
		{"LeftShift",VK_LSHIFT},{"LeftControl",VK_LCONTROL},{"LeftAlt",VK_LMENU},{"Delete",VK_DELETE},
		{"PageUp",VK_PRIOR},{"PageDown",VK_NEXT},{"Home",VK_HOME},{"End",VK_END}};
	for (auto& [N, V] : T) if (_stricmp(N, K.c_str()) == 0) return V;
	if (K.size() == 1 && isalnum((unsigned char)K[0])) return (UINT)toupper((unsigned char)K[0]);
	if (K.size() >= 2 && (K[0] == 'F' || K[0] == 'f') && isdigit((unsigned char)K[1])) { int N = atoi(K.c_str() + 1); if (N >= 1 && N <= 12) return VK_F1 + N - 1; }
	static const char* Num[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	for (int i{0}; i < 10; ++i) if (_stricmp(Num[i], K.c_str()) == 0) return '0' + i;
	return 0;
}

static std::string Key(const std::string& K)
{
	const UINT Vk = VkFor(K);
	if (!Vk) return "err unknown key " + K;
	const UINT Sc = MapVirtualKeyW(Vk, MAPVK_VK_TO_VSC);
	PostMessageW(GameWnd, WM_KEYDOWN, Vk, 1 | (Sc << 16));
	std::this_thread::sleep_for(std::chrono::milliseconds(60));
	PostMessageW(GameWnd, WM_KEYUP, Vk, 1 | (Sc << 16) | (1u << 30) | (1u << 31));
	return "ok";
}

static std::string ClickXY(float FX, float FY)
{
	RECT R{}; GetClientRect(GameWnd, &R);
	const int X = (int)(FX * R.right), Y = (int)(FY * R.bottom);
	VCurX = X; VCurY = Y; bVCur = true;
	const LPARAM L = MAKELPARAM(X, Y);
	PostMessageW(GameWnd, WM_MOUSEMOVE, 0, L);
	std::this_thread::sleep_for(std::chrono::milliseconds(150));
	PostMessageW(GameWnd, WM_LBUTTONDOWN, MK_LBUTTON, L);
	std::this_thread::sleep_for(std::chrono::milliseconds(150));
	PostMessageW(GameWnd, WM_LBUTTONUP, 0, L);
	return std::format("ok {},{}", X, Y);
}

static std::string Shot(const std::string& Path)
{
	RECT R{}; GetClientRect(GameWnd, &R);
	const int W = R.right, H = R.bottom;
	HDC WD = GetDC(GameWnd); HDC MD = CreateCompatibleDC(WD); HBITMAP B = CreateCompatibleBitmap(WD, W, H);
	HGDIOBJ Old = SelectObject(MD, B);
	const BOOL Ok = PrintWindow(GameWnd, MD, PW_CLIENTONLY | 2 /*PW_RENDERFULLCONTENT*/);
	BITMAPINFOHEADER BI{sizeof(BI), W, -H, 1, 32, BI_RGB};
	std::vector<unsigned char> Px((size_t)W * H * 4);
	GetDIBits(MD, B, 0, H, Px.data(), (BITMAPINFO*)&BI, DIB_RGB_COLORS);
	SelectObject(MD, Old); DeleteObject(B); DeleteDC(MD); ReleaseDC(GameWnd, WD);
	if (!Ok) return "err PrintWindow failed";
	BITMAPFILEHEADER FH{0x4D42, (DWORD)(sizeof(FH) + sizeof(BI) + Px.size()), 0, 0, (DWORD)(sizeof(FH) + sizeof(BI))};
	std::ofstream F(Path, std::ios::binary);
	if (!F) return "err cannot write " + Path;
	F.write((char*)&FH, sizeof(FH)); F.write((char*)&BI, sizeof(BI)); F.write((char*)Px.data(), Px.size());
	return std::format("ok {}x{}", W, H);
}

// Game-thread part of a request.
static std::string RunOnGame(const std::string& Cmd, const std::string& Arg)
{
	if (Cmd == "exec") { Exec(Arg); return "ok"; }
	if (Cmd == "state")
	{
		std::string Map; for (wchar_t c : CurMap) Map += (char)c;
		std::string PM = "none";
		if (size_t I = HostCmd.find("PlayMode="); I != std::string::npos) { size_t E = HostCmd.find('?', I); PM = HostCmd.substr(I + 9, E == std::string::npos ? std::string::npos : E - I - 9); }
		int Joined = -1;
		if (SDK::UWorld* Wd = World()) if (Wd->GameState) Joined = Wd->GameState->PlayerArray.Num();
		return std::format("ok flow={} map={} playmode={} char={} phase={} players={} hosting={} quickhost={} searching={} hold={} menu={}",
			LastFlow.empty() ? "none" : LastFlow, Map.empty() ? "none" : Map, PM, (int)AJB::GetSelectedCharacter(),
			LastPhase.empty() ? "none" : LastPhase, Joined, (int)bHosting, (int)OneMenu::bQuickHost, (int)bSearching, (int)bHoldActive, (int)(MenuW && MenuW->IsVisible()));
	}
	if (Cmd == "clickname") return ClickWidget(Arg);
	if (Cmd == "widgets")	// visible live UserWidgets in the viewport (class names), optional substring filter
	{
		std::string Out = "ok";
		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (!O || !O->Class || O->IsDefaultObject() || !O->IsA(SDK::UUserWidget::StaticClass())) continue;
			SDK::UUserWidget* W = (SDK::UUserWidget*)O;
			if (!W->IsVisible() || !(W->IsInViewport() || (W->GetParent() && W->GetParent()->IsVisible()))) continue;
			const std::string N = O->Class->GetName();
			if (!Arg.empty() && N.find(Arg) == std::string::npos) continue;
			Out += " " + N;
		}
		return Out;
	}
	if (Cmd.rfind("mdx ", 0) == 0) { sscanf_s(Cmd.c_str() + 4, "%f %f", &MatchDX[0], &MatchDX[1]); return "ok"; }
	if (Cmd == "texts")	// visible text blocks: outer widget class / name = text (one per line, | separated)
	{
		std::string Out = "ok";
		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (!O || !O->Class || O->IsDefaultObject()) continue;
			std::string T;
			if (O->IsA(SDK::UTextBlock::StaticClass())) T = SDK::UKismetTextLibrary::Conv_TextToString(((SDK::UTextBlock*)O)->GetText()).ToString();
			else if (O->IsA(SDK::URichTextBlock::StaticClass())) T = SDK::UKismetTextLibrary::Conv_TextToString(*(SDK::FText*)((uint8_t*)O + 0x120)).ToString();
			else continue;
			SDK::UWidget* W = (SDK::UWidget*)O;
			if (T.empty() || !W->IsVisible()) continue;
			bool bShown{true};
			for (SDK::UWidget* P = W->GetParent(); P; P = P->GetParent()) if (!P->IsVisible()) { bShown = false; break; }
			if (!bShown) continue;
			SDK::UObject* Outer = O->Outer ? O->Outer->Outer : nullptr;
			if (!Arg.empty() && T.find(Arg) == std::string::npos && (!Outer || Outer->Class->GetName().find(Arg) == std::string::npos)) continue;
			for (char& c : T) if (c == '\n' || c == '\r' || c == '|') c = ' ';
			Out += " |" + (Outer ? Outer->Class->GetName() : std::string("?")) + "/" + O->GetName() + "=" + T;
		}
		return Out;
	}
	if (Cmd == "hp" || Cmd == "nearbot")	// player HP, nearest bot; nearbot teleports the player beside it
	{
		SDK::UWorld* Wd = World(); SDK::APawn* P{nullptr};
		if (Wd && Wd->OwningGameInstance && Wd->OwningGameInstance->LocalPlayers.Num() && Wd->OwningGameInstance->LocalPlayers[0]->PlayerController)
			P = Wd->OwningGameInstance->LocalPlayers[0]->PlayerController->Pawn;
		if (!P) return "err no player pawn";
		const SDK::FVector PL = P->K2_GetActorLocation();
		SDK::AActor* Best{nullptr}; double BD{1e30}; int Bots{0};
		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (!O || O == P || !O->Class || O->IsDefaultObject() || !O->IsA(SDK::AAJBInGameCharacter::StaticClass())) continue;
			if (*(int*)((char*)O + 0x8A4) <= 0) continue;
			const SDK::FVector L = ((SDK::AActor*)O)->K2_GetActorLocation();
			const double D = (L.X - PL.X) * (L.X - PL.X) + (L.Y - PL.Y) * (L.Y - PL.Y) + (L.Z - PL.Z) * (L.Z - PL.Z);
			++Bots; if (D < BD) { BD = D; Best = (SDK::AActor*)O; }
		}
		if (Cmd == "nearbot" && Best)
		{
			SDK::FVector L = Best->K2_GetActorLocation(); L.X += 150.f; L.Z += 50.f;
			SDK::FHitResult H{}; P->K2_SetActorLocation(L, false, &H, true);
		}
		return std::format("ok hp={} hpmax={} bots={} nearest={:.0f}", *(int*)((char*)P + 0x8A4), *(int*)((char*)P + 0x928), Bots, Best ? std::sqrt(BD) : -1.0);
	}
	if (Cmd == "buttons")	// live buttons (optionally filtered by owner path), with visibility
	{
		std::string Out = "ok";
		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			SDK::UObject* O = SDK::UObject::GObjects->GetByIndex(i);
			if (!O || !O->Class || O->IsDefaultObject() || !ClassNameIs(O->Class, "Button")) continue;
			const std::string N = O->GetFullName();
			if (N.find(" Transient.") == std::string::npos || (!Arg.empty() && N.find(Arg) == std::string::npos)) continue;
			Out += " " + O->GetName() + (((SDK::UWidget*)O)->IsVisible() ? "" : "(hidden)");
		}
		return Out;
	}
	return "err unknown command " + Cmd;
}

static void HarnessPump()
{
	std::deque<FReq*> Q;
	{ std::lock_guard G(ReqM); Q.swap(Reqs); }
	for (FReq* R : Q)
	{
		const size_t Sp = R->Line.find(' ');
		const std::string C = R->Line.substr(0, Sp), A = Sp == std::string::npos ? "" : R->Line.substr(Sp + 1);
		std::string Out;
		try { Out = RunOnGame(C, A); } catch (...) { Out = "err exception"; }
		R->P.set_value(Out);
	}
}

static std::string ToGame(const std::string& Line, int TimeoutMs = 10000)
{
	FReq* R = new FReq{Line};
	std::future<std::string> F = R->P.get_future();
	{ std::lock_guard G(ReqM); Reqs.push_back(R); }
	if (F.wait_for(std::chrono::milliseconds(TimeoutMs)) != std::future_status::ready) return "err game thread timeout"; // R stays queued and is leaked
	std::string S = F.get(); delete R; return S;
}

static std::string Handle(const std::string& Line)
{
	const size_t Sp = Line.find(' ');
	const std::string C = Line.substr(0, Sp), A = Sp == std::string::npos ? "" : Line.substr(Sp + 1);
	if (C == "ping") return "ok pong";
	if (C == "unhook")
	{
		MH_DisableHook(MH_ALL_HOOKS); bVCur = false;
		if (GameWnd && OrigProc) SetWindowLongPtrW(GameWnd, GWLP_WNDPROC, (LONG_PTR)OrigProc);
		return "ok unhooked";
	}
	if (!GameWnd && !EnableUnfocused()) return "err no game window yet";
	if (C == "exec" || C == "state" || C == "buttons" || C == "hp" || C == "nearbot" || C == "widgets" || C == "texts") return ToGame(Line);
	if (C == "focus") { Activate(); return "ok focus"; }
	if (C == "key") return Key(A);
	if (C == "shot") return Shot(A);
	if (C == "click")
	{
		float X{}, Y{}; char Comma{};
		if (sscanf_s(A.c_str(), "%f%c%f", &X, &Comma, 1, &Y) == 3 && Comma == ',' && X <= 1.f && Y <= 1.f) return ClickXY(X, Y);
		{ std::lock_guard G(ReqM); VClick = A; VClickHit = false; }
		for (int i{0}; i < 20; ++i) { std::this_thread::sleep_for(std::chrono::milliseconds(50)); if (VClickHit) return "ok menu " + A; }
		{ std::lock_guard G(ReqM); VClick.clear(); }
		return ToGame("clickname " + A);
	}
	return "err unknown command " + C;
}

static void PipeThread()
{
	const std::wstring Name = L"\\\\.\\pipe\\ajbtest-" + std::to_wstring(GetCurrentProcessId());
	for (;;)
	{
		HANDLE P = CreateNamedPipeW(Name.c_str(), PIPE_ACCESS_DUPLEX, PIPE_TYPE_BYTE | PIPE_WAIT, 1, 65536, 65536, 0, nullptr);
		if (P == INVALID_HANDLE_VALUE) { Sleep(1000); continue; }
		if (!ConnectNamedPipe(P, nullptr) && GetLastError() != ERROR_PIPE_CONNECTED) { CloseHandle(P); continue; }
		EnableUnfocused();
		std::string Buf; char C[4096]; DWORD N{};
		while (ReadFile(P, C, sizeof(C), &N, nullptr) && N)
		{
			Buf.append(C, N);
			for (size_t E; (E = Buf.find('\n')) != std::string::npos;)
			{
				std::string L = Buf.substr(0, E); Buf.erase(0, E + 1);
				if (!L.empty() && L.back() == '\r') L.pop_back();
				if (L.empty()) continue;
				std::string Out = Handle(L) + "\n";
				DWORD Wr{}; WriteFile(P, Out.data(), (DWORD)Out.size(), &Wr, nullptr);
			}
		}
		DisconnectNamedPipe(P); CloseHandle(P);
	}
}

static const bool bPipeStarted = [] { std::thread(PipeThread).detach(); return true; }();
