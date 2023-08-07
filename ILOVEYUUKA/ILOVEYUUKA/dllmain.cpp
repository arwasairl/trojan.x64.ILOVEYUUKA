// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <Windows.h>
#include "dllmain.h"
#include <stdlib.h>
#include <shellapi.h>

HWND hWnd;
HINSTANCE hDll;
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

void loop() {
	while (true) {
		for (int i = 0; i < 10; i++) {
			int num = rand() % 12;
			if (num == 0) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c calc",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 1) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c explorer",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 2) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c notepad",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 3) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c msconfig",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 4) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c resmon",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 5) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c rundll32 url.dll,FileProtocolHandler https://www.pixiv.net/en/artworks/72044488",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 6) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c msinfo32",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 7) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c sdclt",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 7) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c main.cpl",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 8) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c regedit",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 9) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c sysdm.cpl",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			if (num == 10) {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c optionalfeatures",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
			else {
				ShellExecute(
					NULL,
					TEXT("open"),
					TEXT("cmd"),
					L"/c rundll32 url.dll,FileProtocolHandler https://store.steampowered.com/app/1430420/CBT_With_Yuuka_Kazami/",
					NULL,
					SW_HIDE
				);
				Sleep(1000);
			}
		}
	}
	
}

void pop() {
    MessageBox(0, L"I LOVE YUUKA", L"I LOVE YUUKA", MB_ICONERROR);
}