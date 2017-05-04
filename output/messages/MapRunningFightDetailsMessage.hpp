#pragma once
#ifndef MAPRUNNINGFIGHTDETAILSMESSAGE_THANADOLOS_HPP
#define MAPRUNNINGFIGHTDETAILSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapRunningFightDetailsMessage : public IMessage
{
public:
	MapRunningFightDetailsMessage(int fightId, std::vector<GameFightFighterLightInformations> attackers, std::vector<GameFightFighterLightInformations> defenders);
	MapRunningFightDetailsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5751;

	/*VARS*/
	int fightId;
	std::vector<GameFightFighterLightInformations> attackers;
	std::vector<GameFightFighterLightInformations> defenders;
};


#endif