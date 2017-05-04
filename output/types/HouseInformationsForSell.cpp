#include "HouseInformationsForSell.hpp"

HouseInformationsForSell::HouseInformationsForSell(int modelId, std::string ownerName, bool ownerConnected, int worldX, int worldY, int subAreaId, int nbRoom, int nbChest, ByteArray skillListIds, bool isLocked, int price)
{
	this->modelId = modelId;
this->ownerName = ownerName;
this->ownerConnected = ownerConnected;
this->worldX = worldX;
this->worldY = worldY;
this->subAreaId = subAreaId;
this->nbRoom = nbRoom;
this->nbChest = nbChest;
this->skillListIds = skillListIds;
this->isLocked = isLocked;
this->price = price;

}

HouseInformationsForSell::HouseInformationsForSell()
{

}

ushort HouseInformationsForSell::getId()
{
	return __id;
}

std::string HouseInformationsForSell::getName()
{
	return "HouseInformationsForSell";
}

void HouseInformationsForSell::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->modelId);
         while(_loc2_ < this->skillListIds.size())
}

void HouseInformationsForSell::deserialize(BinaryReader& reader)
{
	      {
         this->modelId = reader.readVarUhInt();
         while(_loc3_ < _loc2_)
}