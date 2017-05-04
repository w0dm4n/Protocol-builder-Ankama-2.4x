#include "GameMapChangeOrientationRequestMessage.hpp"

GameMapChangeOrientationRequestMessage::GameMapChangeOrientationRequestMessage(int direction)
{
	this->direction = direction;

}

GameMapChangeOrientationRequestMessage::GameMapChangeOrientationRequestMessage()
{

}

ushort GameMapChangeOrientationRequestMessage::getId()
{
	return id;
}

std::string GameMapChangeOrientationRequestMessage::getName()
{
	return "GameMapChangeOrientationRequestMessage";
}

void GameMapChangeOrientationRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeByte(this->direction);      
}

void GameMapChangeOrientationRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->direction = reader.readByte();      }
}