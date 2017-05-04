#include "MapObstacleUpdateMessage.hpp"

MapObstacleUpdateMessage::MapObstacleUpdateMessage(std::vector<MapObstacle> obstacles)
{
	this->obstacles = obstacles;

}

MapObstacleUpdateMessage::MapObstacleUpdateMessage()
{

}

ushort MapObstacleUpdateMessage::getId()
{
	return id;
}

std::string MapObstacleUpdateMessage::getName()
{
	return "MapObstacleUpdateMessage";
}

void MapObstacleUpdateMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->obstacles.size());	int _loc2_ = 0;
         while(_loc2_ < this->obstacles.size())         {            (this->obstacles[_loc2_] as MapObstacle).serialize(writer);
            _loc2_++;         }      
}

void MapObstacleUpdateMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_.deserialize(reader);            this->obstacles.push_back(_loc4_);            _loc3_++;         }      }
}