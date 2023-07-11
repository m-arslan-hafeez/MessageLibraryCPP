#include <Windows.h>
#include "pch.h"

extern "C" __declspec(dllexport) void ShowMessage(const char* message)
{
	MessageBoxA(NULL, message, "Message", MB_OK);
}
