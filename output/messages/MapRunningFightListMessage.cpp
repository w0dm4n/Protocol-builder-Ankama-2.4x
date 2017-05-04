#include "MapRunningFightListMessage.hpp"

MapRunningFightListMessage::MapRunningFightListMessage(std::vector<FightExternalInformations> fights)
{
	this->fights = fights;

}

MapRunningFightListMessage::MapRunningFightListMessage()
{

}

ushort MapRunningFightListMessage::getId()
{
	return id;
}

std::string MapRunningFightListMessage::getName()
{
	return "MapRunningFightListMessage";
}

void MapRunningFightListMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->fights.size());
         while(_loc2_ < this->fights.size())
            _loc2_++;
}

void MapRunningFightListMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}