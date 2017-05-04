#include "GameContextMoveElementMessage.hpp"

GameContextMoveElementMessage::GameContextMoveElementMessage(EntityMovementInformations& movement)
{
	this->movement = movement;

}

GameContextMoveElementMessage::GameContextMoveElementMessage()
{

}

ushort GameContextMoveElementMessage::getId()
{
	return id;
}

std::string GameContextMoveElementMessage::getName()
{
	return "GameContextMoveElementMessage";
}

void GameContextMoveElementMessage::serialize(BinaryWriter& writer)
{
	         this->movement.serialize(writer);
      
}

void GameContextMoveElementMessage::deserialize(BinaryReader& reader)
{
	      {         this->movement.deserialize(reader);      }
}