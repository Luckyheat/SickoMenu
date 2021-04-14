#include "pch-il2cpp.h"
#include "_hooks.h"
#include "state.hpp"

void dLobbyBehaviour_Start(LobbyBehaviour* __this, MethodInfo* method)
{
	State.LobbyTimer = 15;
	LobbyBehaviour_Start(__this, method);

	State.userName = convert_from_string(SaveManager__TypeInfo->static_fields->lastPlayerName);
}