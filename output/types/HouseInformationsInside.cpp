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
	         writer.writeVarInt(this->houseId);         writer.writeVarShort(this->modelId);         writer.writeInt(this->ownerId);         writer.writeUTF(this->ownerName);         writer.writeShort(this->worldX);         writer.writeShort(this->worldY);         writer.writeInt(this->price);         writer.writeBool(this->isLocked);      
}

void HouseInformationsInside::deserialize(BinaryReader& reader)
{
	      {         this->houseId = reader.readVarUhInt();         this->modelId = reader.readVarUhShort();         this->ownerId = reader.readInt();         this->ownerName = reader.readUTF();         this->worldX = reader.readShort();         this->worldY = reader.readShort();         this->price = reader.readInt();         this->isLocked = reader.readBool();      }
}