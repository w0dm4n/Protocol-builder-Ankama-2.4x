#include "MapRunningFightDetailsRequestMessage.hpp"

MapRunningFightDetailsRequestMessage::MapRunningFightDetailsRequestMessage(int fightId)
{
	this->fightId = fightId;

}

MapRunningFightDetailsRequestMessage::MapRunningFightDetailsRequestMessage()
{

}

ushort MapRunningFightDetailsRequestMessage::getId()
{
	return id;
}

std::string MapRunningFightDetailsRequestMessage::getName()
{
	return "MapRunningFightDetailsRequestMessage";
}

void MapRunningFightDetailsRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->fightId);      
}

void MapRunningFightDetailsRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->fightId = reader.readInt();      }
}