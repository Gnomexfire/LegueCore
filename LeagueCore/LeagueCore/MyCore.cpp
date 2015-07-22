#include "SytemImports.h"

#pragma region Class
struct Vector3
{
	float x;
	float y;
	float z;
};

class cObject{
public:

	int IsDead; //0x00AC							//642==ALIVE ; 658=RIP
};
cObject* Player;

extern bool __cdecl IsDead(){
	// DebugConsole
	printf("Player :" + Player->IsDead);
	// - - - - - -
	if (Player == NULL)
		return true;
	if (Player->IsDead == 642)
		return false;
	return true;
}

#pragma endregion


#pragma region Declare
		// GameVersion  5.14.15_07_17_17_29 //
int PointerOfPlayer = 0x011161F8;

#pragma endregion


void Start(){
	DWORD EntryPoint = (DWORD)GetModuleHandle(NULL);
	//ObjManager = (ObjectManager*)(Entry + 0x2E59440);
	Player = *(cObject**)(EntryPoint + (DWORD)PointerOfPlayer);

	// DebugConsole
	AllocConsole();
	printf("[!] Inicializando Core ... \n");
	printf("EntryPoint :" + EntryPoint);
}

BOOL APIENTRY DllMain(HMODULE hModule,
				   DWORD ul_reason_for_call,
				   LPVOID lpReserved)
{

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		Start();
	case DLL_THREAD_ATTACH:

	case DLL_THREAD_DETACH:

	case DLL_PROCESS_DETACH:

		break;
	}
	return TRUE;
}


