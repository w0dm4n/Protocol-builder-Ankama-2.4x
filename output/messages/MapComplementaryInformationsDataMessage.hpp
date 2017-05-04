#pragma once
#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAMESSAGE_THANADOLOS_HPP
#define MAPCOMPLEMENTARYINFORMATIONSDATAMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapComplementaryInformationsDataMessage : public IMessage
{
public:
	MapComplementaryInformationsDataMessage(int subAreaId, int mapId, std::vector<HouseInformations> houses, std::vector<GameRolePlayActorInformations> actors, std::vector<InteractiveElement> interactiveElements, std::vector<StatedElement> statedElements, std::vector<MapObstacle> obstacles, std::vector<FightCommonInformations> fights, bool hasAggressiveMonsters);
	MapComplementaryInformationsDataMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 226;

	/*VARS*/
	int subAreaId;
	int mapId;
	std::vector<HouseInformations> houses;
	std::vector<GameRolePlayActorInformations> actors;
	std::vector<InteractiveElement> interactiveElements;
	std::vector<StatedElement> statedElements;
	std::vector<MapObstacle> obstacles;
	std::vector<FightCommonInformations> fights;
	bool hasAggressiveMonsters;
};


#endif