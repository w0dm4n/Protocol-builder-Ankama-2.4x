#include "HouseInformationsInside.hpp"

HouseInformationsInside::HouseInformationsInside(int houseId, int modelId, int ownerId, std::string ownerName, int worldX, int worldY, int price, bool isLocked)
{
	this->houseId = houseId;
this->modelId = modelId;
this->ownerId = ownerId;
this->ownerName = ownerName;
this->worldX = worldX;
this->worldY = worldY;
this->price = price;
this->isLocked = isLocked;

}

HouseInformationsInside::HouseInformationsInside()
{

}

ushort HouseInformationsInside::getId()
{
	return __id;
}

std::string HouseInformationsInside::getName()
{
	return "HouseInformationsInside";
}

void HouseInformationsInside::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->houseId);
}

void HouseInformationsInside::deserialize(BinaryReader& reader)
{
	      {
}