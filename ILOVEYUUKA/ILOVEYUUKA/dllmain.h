#pragma once

#ifdef POP_EXPORTS
#define POP_API __declspec(dllexport)
#else
#define POP_API __declspec(dllimport)
#endif

extern "C" POP_API void pop();
extern "C" POP_API void loop();
#include <Windows.h>