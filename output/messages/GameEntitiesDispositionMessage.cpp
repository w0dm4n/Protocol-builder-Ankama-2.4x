#include "GameEntitiesDispositionMessage.hpp"

GameEntitiesDispositionMessage::GameEntitiesDispositionMessage(std::vector<IdentifiedEntityDispositionInformations> dispositions)
{
	this->dispositions = dispositions;

}

GameEntitiesDispositionMessage::GameEntitiesDispositionMessage()
{

}

ushort GameEntitiesDispositionMessage::getId()
{
	return id;
}

std::string GameEntitiesDispositionMessage::getName()
{
	return "GameEntitiesDispositionMessage";
}

void GameEntitiesDispositionMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->dispositions.size());	int _loc2_ = 0;
         while(_loc2_ < this->dispositions.size())         {            (this->dispositions[_loc2_]).serialize(writer);
            _loc2_++;         }      
}

void GameEntitiesDispositionMessage::deserialize(BinaryReader& reader)
{
	      {	IdentifiedEntityDispositionInformations _loc4_;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_.deserialize(reader);            this->dispositions.push_back(_loc4_);            _loc3_++;         }      }
}