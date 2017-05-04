#pragma once
#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAINHOUSEMESSAGE_THANADOLOS_HPP
#define MAPCOMPLEMENTARYINFORMATIONSDATAINHOUSEMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "HouseInformationsInside.hpp" 


class MapComplementaryInformationsDataInHouseMessage : public IMessage
{
public:
	MapComplementaryInformationsDataInHouseMessage(HouseInformationsInside& currentHouse);
	MapComplementaryInformationsDataInHouseMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6130;

	/*VARS*/
	HouseInformationsInside currentHouse;
};


#endif