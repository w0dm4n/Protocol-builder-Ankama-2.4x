#include "GameContextRemoveMultipleElementsWithEventsMessage.hpp"

GameContextRemoveMultipleElementsWithEventsMessage::GameContextRemoveMultipleElementsWithEventsMessage(std::vector<uint> elementEventIds)
{
	this->elementEventIds = elementEventIds;

}

GameContextRemoveMultipleElementsWithEventsMessage::GameContextRemoveMultipleElementsWithEventsMessage()
{

}

ushort GameContextRemoveMultipleElementsWithEventsMessage::getId()
{
	return id;
}

std::string GameContextRemoveMultipleElementsWithEventsMessage::getName()
{
	return "GameContextRemoveMultipleElementsWithEventsMessage";
}

void GameContextRemoveMultipleElementsWithEventsMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeShort(this->elementEventIds.size());	int _loc2_ = 0;
         while(_loc2_ < this->elementEventIds.size())         {            writer.writeByte(this->elementEventIds[_loc2_]);            _loc2_++;         }      
}

void GameContextRemoveMultipleElementsWithEventsMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
         super.deserialize(reader);	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readByte();            this->elementEventIds.push_back(_loc4_);            _loc3_++;         }      }
}