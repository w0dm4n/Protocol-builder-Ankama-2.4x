#include "GameEntityDispositionMessage.hpp"

GameEntityDispositionMessage::GameEntityDispositionMessage(IdentifiedEntityDispositionInformations& disposition)
{
	this->disposition = disposition;

}

GameEntityDispositionMessage::GameEntityDispositionMessage()
{

}

ushort GameEntityDispositionMessage::getId()
{
	return id;
}

std::string GameEntityDispositionMessage::getName()
{
	return "GameEntityDispositionMessage";
}

void GameEntityDispositionMessage::serialize(BinaryWriter& writer)
{
	         this->disposition.serialize(writer);
      
}

void GameEntityDispositionMessage::deserialize(BinaryReader& reader)
{
	      {         this->disposition.deserialize(reader);      }
}