#include "GameCautiousMapMovementRequestMessage.hpp"

GameCautiousMapMovementRequestMessage::GameCautiousMapMovementRequestMessage()
{
	
}

GameCautiousMapMovementRequestMessage::GameCautiousMapMovementRequestMessage()
{

}

ushort GameCautiousMapMovementRequestMessage::getId()
{
	return id;
}

std::string GameCautiousMapMovementRequestMessage::getName()
{
	return "GameCautiousMapMovementRequestMessage";
}

void GameCautiousMapMovementRequestMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
      
}

void GameCautiousMapMovementRequestMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);      }
}