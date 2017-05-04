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
	         writer.writeShort(this->fights.size());	int _loc2_ = 0;
         while(_loc2_ < this->fights.size())         {            (this->fights[_loc2_] as FightExternalInformations).serialize(writer);
            _loc2_++;         }      
}

void MapRunningFightListMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_.deserialize(reader);            this->fights.push_back(_loc4_);            _loc3_++;         }      }
}