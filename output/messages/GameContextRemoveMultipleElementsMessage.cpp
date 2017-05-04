#include "GameContextRemoveMultipleElementsMessage.hpp"

GameContextRemoveMultipleElementsMessage::GameContextRemoveMultipleElementsMessage(std::vector<Number> id)
{
	this->id = id;

}

GameContextRemoveMultipleElementsMessage::GameContextRemoveMultipleElementsMessage()
{

}

ushort GameContextRemoveMultipleElementsMessage::getId()
{
	return id;
}

std::string GameContextRemoveMultipleElementsMessage::getName()
{
	return "GameContextRemoveMultipleElementsMessage";
}

void GameContextRemoveMultipleElementsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->id.size());	int _loc2_ = 0;
         while(_loc2_ < this->id.size())         {            writer.writeDouble(this->id[_loc2_]);            _loc2_++;         }      
}

void GameContextRemoveMultipleElementsMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readDouble();            this->id.push_back(_loc4_);            _loc3_++;         }      }
}