#if _DEBUG
// C Run-time (CRT) Debug Heap stuff
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif

#include "Qualia.h"
#include "Arche.h"
#include "SDLSoundSystem.h"
#include "ServiceLocator.h"

using namespace arche;

int main(int, char* [])
{
#if _DEBUG
	// C Run-time (CRT) Debug Heap stuff
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	// Register the soundSystem
	ServiceLocator::InitDefault();

	Arche engine{ std::string("../Data/") };
	Qualia::Create();
	engine.Run();

	return 0;
}