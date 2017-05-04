#include "GameContextReadyMessage.hpp"

GameContextReadyMessage::GameContextReadyMessage(int mapId)
{
	this->mapId = mapId;

}

GameContextReadyMessage::GameContextReadyMessage()
{

}

ushort GameContextReadyMessage::getId()
{
	return id;
}

std::string GameContextReadyMessage::getName()
{
	return "GameContextReadyMessage";
}

void GameContextReadyMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->mapId);      
}

void GameContextReadyMessage::deserialize(BinaryReader& reader)
{
	      {         this->mapId = reader.readInt();      }
}