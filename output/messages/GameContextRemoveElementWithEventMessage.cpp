#include "GameContextRemoveElementWithEventMessage.hpp"

GameContextRemoveElementWithEventMessage::GameContextRemoveElementWithEventMessage(int elementEventId)
{
	this->elementEventId = elementEventId;

}

GameContextRemoveElementWithEventMessage::GameContextRemoveElementWithEventMessage()
{

}

ushort GameContextRemoveElementWithEventMessage::getId()
{
	return id;
}

std::string GameContextRemoveElementWithEventMessage::getName()
{
	return "GameContextRemoveElementWithEventMessage";
}

void GameContextRemoveElementWithEventMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeByte(this->elementEventId);      
}

void GameContextRemoveElementWithEventMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);         this->elementEventId = reader.readByte();      }
}