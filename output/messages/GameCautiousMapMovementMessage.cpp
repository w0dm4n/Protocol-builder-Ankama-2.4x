#include "GameCautiousMapMovementMessage.hpp"

GameCautiousMapMovementMessage::GameCautiousMapMovementMessage()
{
	
}

GameCautiousMapMovementMessage::GameCautiousMapMovementMessage()
{

}

ushort GameCautiousMapMovementMessage::getId()
{
	return id;
}

std::string GameCautiousMapMovementMessage::getName()
{
	return "GameCautiousMapMovementMessage";
}

void GameCautiousMapMovementMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
      
}

void GameCautiousMapMovementMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);      }
}