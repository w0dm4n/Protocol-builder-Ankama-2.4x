#include "GameMapChangeOrientationMessage.hpp"

GameMapChangeOrientationMessage::GameMapChangeOrientationMessage(ActorOrientation& orientation)
{
	this->orientation = orientation;

}

GameMapChangeOrientationMessage::GameMapChangeOrientationMessage()
{

}

ushort GameMapChangeOrientationMessage::getId()
{
	return id;
}

std::string GameMapChangeOrientationMessage::getName()
{
	return "GameMapChangeOrientationMessage";
}

void GameMapChangeOrientationMessage::serialize(BinaryWriter& writer)
{
	         this->orientation.serialize(writer);
      
}

void GameMapChangeOrientationMessage::deserialize(BinaryReader& reader)
{
	      {         this->orientation.deserialize(reader);      }
}