#pragma once

#ifdef PAYLOAD_EXPORTS
#define PAYLOAD_API __declspec(dllexport)
#else
#define PAYLOAD_API __declspec(dllimport)
#endif

extern "C" PAYLOAD_API void message();
#include <Windows.h>