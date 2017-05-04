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
	         writer.writeVarInt(this->houseId);
         while(_loc2_ < this->skillListIds.size())
}

void HouseInformationsForGuild::deserialize(BinaryReader& reader)
{
	      {
         this->houseId = reader.readVarUhInt();
         while(_loc3_ < _loc2_)
}