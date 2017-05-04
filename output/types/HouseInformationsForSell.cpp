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
	         writer.writeVarInt(this->modelId);         writer.writeUTF(this->ownerName);         writer.writeBool(this->ownerConnected);         writer.writeShort(this->worldX);         writer.writeShort(this->worldY);         writer.writeVarShort(this->subAreaId);         writer.writeByte(this->nbRoom);         writer.writeByte(this->nbChest);         writer.writeShort(this->skillListIds.size());	int _loc2_ = 0;
         while(_loc2_ < this->skillListIds.size())         {            writer.writeInt(this->skillListIds[_loc2_]);            _loc2_++;         }         writer.writeBool(this->isLocked);         writer.writeVarInt(this->price);      
}

void HouseInformationsForSell::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
         this->modelId = reader.readVarUhInt();         this->ownerName = reader.readUTF();         this->ownerConnected = reader.readBool();         this->worldX = reader.readShort();         this->worldY = reader.readShort();         this->subAreaId = reader.readVarUhShort();         this->nbRoom = reader.readByte();         this->nbChest = reader.readByte();	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readInt();            this->skillListIds.push_back(_loc4_);            _loc3_++;         }         this->isLocked = reader.readBool();         this->price = reader.readVarUhInt();      }
}