#include <Windows.h>
#include <string>

int main()
{
	WCHAR EXEPath[260] = {0};

	GetModuleFileName(0, EXEPath, 260);

	std::wstring LocalPath(EXEPath);
	size_t Endline = LocalPath.find_last_of(L"\\/");

	if (Endline != std::wstring::npos) { LocalPath = LocalPath.substr(0, Endline + 1); }

	std::wstring AJBExecutable = LocalPath + L"AJB\\Binaries\\Win64\\AJB-Win64-Shipping.exe";

    if (GetFileAttributes(AJBExecutable.c_str()) != INVALID_FILE_ATTRIBUTES) {
        STARTUPINFO si = { sizeof(si) };
        PROCESS_INFORMATION pi;
        if (CreateProcess(AJBExecutable.c_str(), nullptr, nullptr, nullptr, false, CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi)) {
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
    }
    return 0;
}