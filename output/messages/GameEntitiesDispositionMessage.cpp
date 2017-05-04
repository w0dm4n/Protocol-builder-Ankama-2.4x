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
	         writer.writeShort(this->dispositions.size());
         while(_loc2_ < this->dispositions.size())
            _loc2_++;
}

void GameEntitiesDispositionMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}