#include "GameMapChangeOrientationsMessage.hpp"

GameMapChangeOrientationsMessage::GameMapChangeOrientationsMessage(std::vector<ActorOrientation> orientations)
{
	this->orientations = orientations;

}

GameMapChangeOrientationsMessage::GameMapChangeOrientationsMessage()
{

}

ushort GameMapChangeOrientationsMessage::getId()
{
	return id;
}

std::string GameMapChangeOrientationsMessage::getName()
{
	return "GameMapChangeOrientationsMessage";
}

void GameMapChangeOrientationsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->orientations.size());	int _loc2_ = 0;
         while(_loc2_ < this->orientations.size())         {            (this->orientations[_loc2_] as ActorOrientation).serialize(writer);
            _loc2_++;         }      
}

void GameMapChangeOrientationsMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_.deserialize(reader);            this->orientations.push_back(_loc4_);            _loc3_++;         }      }
}