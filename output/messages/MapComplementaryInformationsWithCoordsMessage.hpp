#pragma once
#ifndef MAPCOMPLEMENTARYINFORMATIONSWITHCOORDSMESSAGE_THANADOLOS_HPP
#define MAPCOMPLEMENTARYINFORMATIONSWITHCOORDSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapComplementaryInformationsWithCoordsMessage : public IMessage
{
public:
	MapComplementaryInformationsWithCoordsMessage(int worldX, int worldY);
	MapComplementaryInformationsWithCoordsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6268;

	/*VARS*/
	int worldX;
	int worldY;
};


#endif