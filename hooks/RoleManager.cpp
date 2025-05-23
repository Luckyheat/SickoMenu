#include "pch-il2cpp.h"
#include "RoleManager.hpp"
#include "_hooks.h"
#include "state.hpp"
#include "logger.h"
#include "utility.h"
#include "game.h"

static int preChosenImpCount = 0;

void dRoleManager_SelectRoles(RoleManager* __this, MethodInfo* method) {
	if (State.ShowHookLogs) LOG_DEBUG("Hook dRoleManager_SelectRoles executed");
	if (State.DisableRoleManager) return RoleManager_SelectRoles(__this, method);
	std::vector<uint8_t> assignedPlayers;
	GameOptions options;
	auto allPlayers = GetAllPlayerControl();
	auto roleRates = RoleRates(options, (int)allPlayers.size());

	AssignPreChosenRoles(roleRates, assignedPlayers);
	EvenOutImpostorRoleCounts(roleRates);
	AssignRoles(roleRates, roleRates.ShapeshifterChance, RoleTypes__Enum::Shapeshifter, allPlayers, assignedPlayers);
	AssignRoles(roleRates, roleRates.PhantomChance, RoleTypes__Enum::Phantom, allPlayers, assignedPlayers); //don't be sleep-deprived and mix-up phantom with tracker
	AssignRoles(roleRates, 100, RoleTypes__Enum::Impostor, allPlayers, assignedPlayers);
	AssignRoles(roleRates, roleRates.ScientistChance, RoleTypes__Enum::Scientist, allPlayers, assignedPlayers);
	AssignRoles(roleRates, roleRates.TrackerChance, RoleTypes__Enum::Tracker, allPlayers, assignedPlayers);
	AssignRoles(roleRates, roleRates.NoisemakerChance, RoleTypes__Enum::Noisemaker, allPlayers, assignedPlayers);
	if (options.GetGameMode() == GameModes__Enum::HideNSeek) {
		AssignRoles(roleRates, 100, RoleTypes__Enum::Engineer, allPlayers, assignedPlayers);
	}
	else {
		AssignRoles(roleRates, roleRates.EngineerChance, RoleTypes__Enum::Engineer, allPlayers, assignedPlayers);
		AssignRoles(roleRates, 100, RoleTypes__Enum::Crewmate, allPlayers, assignedPlayers);
	}
	/*auto allData = GetAllPlayerData();
	il2cpp::List<List_1_NetworkedPlayerInfo_> allImpostors = allData;
	for (size_t i = 0; i < allData.size(); i++) {
		if (PlayerIsImpostor(allData[i])) allData.erase(i);
	}*/
}

void AssignPreChosenRoles(RoleRates& roleRates, std::vector<uint8_t>& assignedPlayers)
{
	preChosenImpCount = 0;
	if (State.BattleRoyale || State.TaskSpeedrun) return;
	for (size_t i = 0; i < State.assignedRolesPlayer.size(); i++)
	{
		auto role = State.assignedRoles[i];
		auto player = State.assignedRolesPlayer[i];
		if (!CanPlayerBeAssignedToRole(player, assignedPlayers) || role == RoleType::Random)
			continue;

		auto trueRole = GetRoleTypesEnum(role);
		roleRates.SubtractRole(trueRole);

		PlayerControl_RpcSetRole(player, trueRole, false, NULL);
		if (trueRole == RoleTypes__Enum::Impostor || trueRole == RoleTypes__Enum::Shapeshifter || trueRole == RoleTypes__Enum::Phantom)
			preChosenImpCount++;
		if (State.TournamentMode) {
			auto friendCode = convert_from_string(GetPlayerData(player)->fields.FriendCode);
			if (std::find(State.tournamentFriendCodes.begin(), State.tournamentFriendCodes.end(), friendCode) == State.tournamentFriendCodes.end()) {
				State.tournamentFriendCodes.push_back(friendCode);
				State.tournamentPoints[friendCode] = 0.f;
				State.tournamentWinPoints[friendCode] = 0.f;
				State.tournamentCalloutPoints[friendCode] = 0.f;
				State.tournamentEarlyDeathPoints[friendCode] = 0.f;
				State.tournamentKillCaps[friendCode] = 0.f;
			}
			if (trueRole == RoleTypes__Enum::Impostor || trueRole == RoleTypes__Enum::Shapeshifter || trueRole == RoleTypes__Enum::Phantom) {
				State.tournamentAssignedImpostors.push_back(friendCode);
				State.tournamentAliveImpostors.push_back(friendCode);
			}
		}
		assignedPlayers.push_back(player->fields.PlayerId);
	}
}

void AssignRoles(RoleRates& roleRates, int roleChance, RoleTypes__Enum role, il2cpp::List<List_1_PlayerControl_>& allPlayers, std::vector<uint8_t>& assignedPlayers)
{
	if (State.BattleRoyale) {
		for (auto sender : GetAllPlayerControl()) {
			for (auto receiver : GetAllPlayerControl()) {
				auto writer = InnerNetClient_StartRpcImmediately((InnerNetClient*)(*Game::pAmongUsClient), sender->fields._.NetId,
					uint8_t(RpcCalls__Enum::SetRole), SendOption__Enum::None, receiver->fields._.OwnerId, NULL);
				MessageWriter_WriteUShort(writer, uint16_t((sender == receiver || receiver == *Game::pLocalPlayer) ?
					RoleTypes__Enum::Impostor : RoleTypes__Enum::Crewmate), NULL);
				MessageWriter_WriteBoolean(writer, false, NULL);
				InnerNetClient_FinishRpcImmediately((InnerNetClient*)(*Game::pAmongUsClient), writer, NULL);
			}
		}
	}
	else if (State.TaskSpeedrun) {
		for (auto sender : GetAllPlayerControl()) {
			for (auto receiver : GetAllPlayerControl()) {
				auto writer = InnerNetClient_StartRpcImmediately((InnerNetClient*)(*Game::pAmongUsClient), sender->fields._.NetId,
					uint8_t(RpcCalls__Enum::SetRole), SendOption__Enum::None, receiver->fields._.OwnerId, NULL);
				MessageWriter_WriteUShort(writer, uint16_t(RoleTypes__Enum::Crewmate), NULL);
				MessageWriter_WriteBoolean(writer, false, NULL);
				InnerNetClient_FinishRpcImmediately((InnerNetClient*)(*Game::pAmongUsClient), writer, NULL);
			}
		}
	}
	else {
		GameOptions options;
		auto roleCount = roleRates.GetRoleCount(role);
		auto playerAmount = allPlayers.size();
		auto maxImpostorAmount = GetMaxImpostorAmount((int)playerAmount) - preChosenImpCount;

		//if (role == RoleTypes__Enum::Shapeshifter || role == RoleTypes__Enum::Impostor) {
		//	if (State.shapeshifters_amount + State.impostors_amount >= maxImpostorAmount)
		//		return; //Skip assigns when pre assigned enough imps.
		//}

		if (options.GetGameMode() == GameModes__Enum::HideNSeek && role == RoleTypes__Enum::Engineer)
			roleCount = allPlayers.size() - 1;

		//int ssCount = roleRates.GetRoleCount(RoleTypes__Enum::Shapeshifter), phCount = roleRates.GetRoleCount(RoleTypes__Enum::Phantom), splImpCount = ssCount + phCount;

		/*if (splImpCount > 0 && splImpCount >= maxImpostorAmount && (role == RoleTypes__Enum::Shapeshifter || role == RoleTypes__Enum::Phantom)) {
			roleCount = (int)std::round((roleCount / splImpCount) * maxImpostorAmount); //go for the portion of the impostors selected
			//In previous version, Sicko would assign more imps than MaxImposterAmount based on (shapeshifter + phantom) amount.
		}*/

		if (roleCount < 1)
			return;

		for (auto i = 0; i < roleCount; i++)
		{
			if (assignedPlayers.size() >= playerAmount)
				break;

			if (!ShouldRoleBeAssigned(roleChance))
				continue;

			int sanityCheck = 1000;
			while (sanityCheck > 0)
			{
				sanityCheck--;
				auto playerIndex = GenerateRandomNumber(0, (int)playerAmount - 1);
				auto player = allPlayers[playerIndex];
				if (CanPlayerBeAssignedToRole(player, assignedPlayers))
				{
					roleRates.SubtractRole(role);
					PlayerControl_RpcSetRole(player, role, false, NULL);

					if (State.TournamentMode) {
						auto friendCode = convert_from_string(GetPlayerData(player)->fields.FriendCode);
						if (std::find(State.tournamentFriendCodes.begin(), State.tournamentFriendCodes.end(), friendCode) == State.tournamentFriendCodes.end()) {
							State.tournamentFriendCodes.push_back(friendCode);
							State.tournamentPoints[friendCode] = 0.f;
							State.tournamentWinPoints[friendCode] = 0.f;
							State.tournamentCalloutPoints[friendCode] = 0.f;
							State.tournamentEarlyDeathPoints[friendCode] = 0.f;
							State.tournamentKillCaps[friendCode] = 0.f;
						}
						if (role == RoleTypes__Enum::Impostor || role == RoleTypes__Enum::Shapeshifter || role == RoleTypes__Enum::Phantom) {
							State.tournamentAssignedImpostors.push_back(friendCode);
							State.tournamentAliveImpostors.push_back(friendCode);
						}
					}

					assignedPlayers.push_back(player->fields.PlayerId);
					break;
				}
			}
			if (sanityCheck == 0)
				STREAM_ERROR("Sanity check failed, could not assign roles to all players (roleCount " << roleCount << ", playerAmount " << playerAmount << ")");
		}
	}
}

bool ShouldRoleBeAssigned(int roleChance)
{
	if (roleChance == 100)
		return true;

	return roleChance >= GenerateRandomNumber(1, 100);
}

bool CanPlayerBeAssignedToRole(app::PlayerControl* player, std::vector<uint8_t>& assignedPlayers)
{
	if (player == nullptr || std::find(assignedPlayers.begin(), assignedPlayers.end(), player->fields.PlayerId) != assignedPlayers.end())
		return false;
	return true;
}

void EvenOutImpostorRoleCounts(RoleRates& roleRates) {
	for (int i = 0; i < 60; ++i) { // My sanity is lost after this code
		int MoreThanImpostorCountOfImpostorRoles = preChosenImpCount + roleRates.GetRoleCount(RoleTypes__Enum::Shapeshifter) + roleRates.GetRoleCount(RoleTypes__Enum::Phantom);
		if (roleRates.ImpostorCount < MoreThanImpostorCountOfImpostorRoles) {
			uint8_t numImpRoles = 2; // Add support for more roles as they are added
			switch (randi(1, numImpRoles)) {
			case 1:
				if (roleRates.ShapeshifterCount > 0)
					roleRates.ShapeshifterCount--;
				break;
			case 2:
				if (roleRates.PhantomCount > 0)
					roleRates.PhantomCount--;
				break;
			}
		}
		else break;
	}
}