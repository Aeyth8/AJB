#pragma once
#include <Windows.h>
#include <vector>


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{

// A easy way to create simple debug/dev menus. (very WIP) 
class WinUI
{
public:

	static std::vector<WinUI> WinUI_Table;
	WinUI* GetInstance();

	struct ButtonStructure { LPCWSTR lpButtonName; LPVOID FunctionButton; HWND hWnd; };

	std::vector<ButtonStructure> ButtonTable;

	uint8_t AddButton(struct ButtonStructure& Button);
	void AddButtons(std::vector<ButtonStructure>& Buttons);

public:

	
	//WinUI()

	/*struct ButtonStructure { _In_opt_ LPCWSTR lpWindowName; HWND hWnd{0}; };

	inline static std::vector<ButtonStructure> Buttons =
	{
		{L"Hook Server Code"},
		
	};*/

	/*inline static void InitGUI(HWND hWnd)
	{
		int yDown{60};
		for (int i{0}; i < Buttons.size(); ++i)
		{ LogA("WinUI", "Creating button for " + WStringToN(Buttons[i].lpWindowName));
			Buttons[i].hWnd = CreateWindowExW(0L, L"BUTTON", Buttons[i].lpWindowName, 0x00010000L | 0x10000000L | 0x40000000L | 0x00000001L, 10, yDown, 250, 50, hWnd, (HMENU)(i + 1), GetModuleHandle(0), 0);
			yDown += 60;
		}
	}

	inline static LRESULT __stdcall WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
		switch (message) {
		case WM_COMMAND:
			if (HIWORD(wParam) == BN_CLICKED) {
				int id = LOWORD(wParam);
				int i{id -1};
				switch (id)
				{
				case 1:
					
					break;
				}
			}
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		return 0;
	}

	inline static void CreateMainWindow() {
		const wchar_t CLASS_NAME[] = L"SampleWindowClass";

		WNDCLASS wc = {};
		wc.lpfnWndProc = WndProc;
		wc.hInstance = GetModuleHandle(NULL);
		wc.lpszClassName = CLASS_NAME;

		RegisterClass(&wc);

		HWND hWnd = CreateWindowExW(0, CLASS_NAME, L"RV8 Dev Menu", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1000, 600, 0, 0, wc.hInstance, 0);

		ShowWindow(hWnd, SW_SHOW);
		UpdateWindow(hWnd);

		InitGUI(hWnd);

		MSG msg;
		while (GetMessage(&msg, 0, 0, 0)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}*/




};

}