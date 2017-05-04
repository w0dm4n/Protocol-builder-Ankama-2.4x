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
	         writer.writeShort(this->obstacles.size());
         while(_loc2_ < this->obstacles.size())
            _loc2_++;
}

void MapObstacleUpdateMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}