#include "GameContextMoveMultipleElementsMessage.hpp"

GameContextMoveMultipleElementsMessage::GameContextMoveMultipleElementsMessage(std::vector<EntityMovementInformations> movements)
{
	this->movements = movements;

}

GameContextMoveMultipleElementsMessage::GameContextMoveMultipleElementsMessage()
{

}

ushort GameContextMoveMultipleElementsMessage::getId()
{
	return id;
}

std::string GameContextMoveMultipleElementsMessage::getName()
{
	return "GameContextMoveMultipleElementsMessage";
}

void GameContextMoveMultipleElementsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->movements.size());	int _loc2_ = 0;
         while(_loc2_ < this->movements.size())         {            (this->movements[_loc2_] as EntityMovementInformations).serialize(writer);
            _loc2_++;         }      
}

void GameContextMoveMultipleElementsMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_.deserialize(reader);            this->movements.push_back(_loc4_);            _loc3_++;         }      }
}