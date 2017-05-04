#include "GameContextKickMessage.hpp"

GameContextKickMessage::GameContextKickMessage(int targetId)
{
	this->targetId = targetId;

}

GameContextKickMessage::GameContextKickMessage()
{

}

ushort GameContextKickMessage::getId()
{
	return id;
}

std::string GameContextKickMessage::getName()
{
	return "GameContextKickMessage";
}

void GameContextKickMessage::serialize(BinaryWriter& writer)
{
	         writer.writeDouble(this->targetId);      
}

void GameContextKickMessage::deserialize(BinaryReader& reader)
{
	      {         this->targetId = reader.readDouble();      }
}