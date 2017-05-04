#pragma once
#ifndef MAPRUNNINGFIGHTLISTMESSAGE_THANADOLOS_HPP
#define MAPRUNNINGFIGHTLISTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapRunningFightListMessage : public IMessage
{
public:
	MapRunningFightListMessage(std::vector<FightExternalInformations> fights);
	MapRunningFightListMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5743;

	/*VARS*/
	std::vector<FightExternalInformations> fights;
};


#endif