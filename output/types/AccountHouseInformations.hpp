#pragma once
#ifndef ACCOUNTHOUSEINFORMATIONS_THANADOLOS_HPP
#define ACCOUNTHOUSEINFORMATIONS_THANADOLOS_HPP

#include "IType.hpp"


class AccountHouseInformations : public IType
{
public:
	AccountHouseInformations(int houseId, int modelId, int worldX, int worldY, int mapId, int subAreaId);
	AccountHouseInformations();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int __id = 390;

	/*VARS*/
	int houseId;
	int modelId;
	int worldX;
	int worldY;
	int mapId;
	int subAreaId;
};


#endif