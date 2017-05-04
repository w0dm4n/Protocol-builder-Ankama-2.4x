#pragma once
#ifndef HOUSEINFORMATIONSFORGUILD_THANADOLOS_HPP
#define HOUSEINFORMATIONSFORGUILD_THANADOLOS_HPP

#include "IType.hpp"


class HouseInformationsForGuild : public IType
{
public:
	HouseInformationsForGuild(int houseId, int modelId, std::string ownerName, int worldX, int worldY, int mapId, int subAreaId, ByteArray skillListIds, int guildshareParams);
	HouseInformationsForGuild();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int __id = 170;

	/*VARS*/
	int houseId;
	int modelId;
	std::string ownerName;
	int worldX;
	int worldY;
	int mapId;
	int subAreaId;
	ByteArray skillListIds;
	int guildshareParams;
};


#endif