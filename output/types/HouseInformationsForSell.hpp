#pragma once
#ifndef HOUSEINFORMATIONSFORSELL_THANADOLOS_HPP
#define HOUSEINFORMATIONSFORSELL_THANADOLOS_HPP

#include "IType.hpp"


class HouseInformationsForSell : public IType
{
public:
	HouseInformationsForSell(int modelId, std::string ownerName, bool ownerConnected, int worldX, int worldY, int subAreaId, int nbRoom, int nbChest, ByteArray skillListIds, bool isLocked, int price);
	HouseInformationsForSell();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int __id = 221;

	/*VARS*/
	int modelId;
	std::string ownerName;
	bool ownerConnected;
	int worldX;
	int worldY;
	int subAreaId;
	int nbRoom;
	int nbChest;
	ByteArray skillListIds;
	bool isLocked;
	int price;
};


#endif