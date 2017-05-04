#include "MapFightCountMessage.hpp"

MapFightCountMessage::MapFightCountMessage(int fightCount)
{
	this->fightCount = fightCount;

}

MapFightCountMessage::MapFightCountMessage()
{

}

ushort MapFightCountMessage::getId()
{
	return id;
}

std::string MapFightCountMessage::getName()
{
	return "MapFightCountMessage";
}

void MapFightCountMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarShort(this->fightCount);      
}

void MapFightCountMessage::deserialize(BinaryReader& reader)
{
	      {         this->fightCount = reader.readVarUhShort();      }
}