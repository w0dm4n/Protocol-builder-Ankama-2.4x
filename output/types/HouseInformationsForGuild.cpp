#include "HouseInformationsForGuild.hpp"

HouseInformationsForGuild::HouseInformationsForGuild(int houseId, int modelId, std::string ownerName, int worldX, int worldY, int mapId, int subAreaId, ByteArray skillListIds, int guildshareParams)
{
	this->houseId = houseId;
this->modelId = modelId;
this->ownerName = ownerName;
this->worldX = worldX;
this->worldY = worldY;
this->mapId = mapId;
this->subAreaId = subAreaId;
this->skillListIds = skillListIds;
this->guildshareParams = guildshareParams;

}

HouseInformationsForGuild::HouseInformationsForGuild()
{

}

ushort HouseInformationsForGuild::getId()
{
	return __id;
}

std::string HouseInformationsForGuild::getName()
{
	return "HouseInformationsForGuild";
}

void HouseInformationsForGuild::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->houseId);         writer.writeVarInt(this->modelId);         writer.writeUTF(this->ownerName);         writer.writeShort(this->worldX);         writer.writeShort(this->worldY);         writer.writeInt(this->mapId);         writer.writeVarShort(this->subAreaId);         writer.writeShort(this->skillListIds.size());	int _loc2_ = 0;
         while(_loc2_ < this->skillListIds.size())         {            writer.writeInt(this->skillListIds[_loc2_]);            _loc2_++;         }         writer.writeVarInt(this->guildshareParams);      
}

void HouseInformationsForGuild::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
         this->houseId = reader.readVarUhInt();         this->modelId = reader.readVarUhInt();         this->ownerName = reader.readUTF();         this->worldX = reader.readShort();         this->worldY = reader.readShort();         this->mapId = reader.readInt();         this->subAreaId = reader.readVarUhShort();	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readInt();            this->skillListIds.push_back(_loc4_);            _loc3_++;         }         this->guildshareParams = reader.readVarUhInt();      }
}