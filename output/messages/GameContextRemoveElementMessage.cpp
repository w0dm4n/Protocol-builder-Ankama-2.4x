#include "GameContextRemoveElementMessage.hpp"

GameContextRemoveElementMessage::GameContextRemoveElementMessage(int id)
{
	this->id = id;

}

GameContextRemoveElementMessage::GameContextRemoveElementMessage()
{

}

ushort GameContextRemoveElementMessage::getId()
{
	return id;
}

std::string GameContextRemoveElementMessage::getName()
{
	return "GameContextRemoveElementMessage";
}

void GameContextRemoveElementMessage::serialize(BinaryWriter& writer)
{
	         writer.writeDouble(this->id);      
}

void GameContextRemoveElementMessage::deserialize(BinaryReader& reader)
{
	      {         this->id = reader.readDouble();      }
}