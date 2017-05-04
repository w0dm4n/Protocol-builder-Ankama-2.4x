#pragma once
#ifndef HOUSEINFORMATIONSINSIDE_THANADOLOS_HPP
#define HOUSEINFORMATIONSINSIDE_THANADOLOS_HPP

#include "IType.hpp"


class HouseInformationsInside : public IType
{
public:
	HouseInformationsInside(int houseId, int modelId, int ownerId, std::string ownerName, int worldX, int worldY, int price, bool isLocked);
	HouseInformationsInside();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int __id = 218;

	/*VARS*/
	int houseId;
	int modelId;
	int ownerId;
	std::string ownerName;
	int worldX;
	int worldY;
	int price;
	bool isLocked;
};


#endif