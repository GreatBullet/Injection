// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		MessageBoxA(0, "Hello from injected Dll!", 0, 0);
	}
	return TRUE;
}

