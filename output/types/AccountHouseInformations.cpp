#include "AccountHouseInformations.hpp"

AccountHouseInformations::AccountHouseInformations(int houseId, int modelId, int worldX, int worldY, int mapId, int subAreaId)
{
	this->houseId = houseId;
this->modelId = modelId;
this->worldX = worldX;
this->worldY = worldY;
this->mapId = mapId;
this->subAreaId = subAreaId;

}

AccountHouseInformations::AccountHouseInformations()
{

}

ushort AccountHouseInformations::getId()
{
	return __id;
}

std::string AccountHouseInformations::getName()
{
	return "AccountHouseInformations";
}

void AccountHouseInformations::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->houseId);
}

void AccountHouseInformations::deserialize(BinaryReader& reader)
{
	      {
}