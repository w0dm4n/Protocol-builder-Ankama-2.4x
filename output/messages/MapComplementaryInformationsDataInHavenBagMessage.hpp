#pragma once
#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAINHAVENBAGMESSAGE_THANADOLOS_HPP
#define MAPCOMPLEMENTARYINFORMATIONSDATAINHAVENBAGMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "CharacterMinimalInformations.hpp" 


class MapComplementaryInformationsDataInHavenBagMessage : public IMessage
{
public:
	MapComplementaryInformationsDataInHavenBagMessage(CharacterMinimalInformations& ownerInformations, int theme, int roomId, int maxRoomId);
	MapComplementaryInformationsDataInHavenBagMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6622;

	/*VARS*/
	CharacterMinimalInformations ownerInformations;
	int theme;
	int roomId;
	int maxRoomId;
};


#endif