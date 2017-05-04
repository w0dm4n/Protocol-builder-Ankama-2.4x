#pragma once
#ifndef MAPOBSTACLEUPDATEMESSAGE_THANADOLOS_HPP
#define MAPOBSTACLEUPDATEMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapObstacleUpdateMessage : public IMessage
{
public:
	MapObstacleUpdateMessage(std::vector<MapObstacle> obstacles);
	MapObstacleUpdateMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6051;

	/*VARS*/
	std::vector<MapObstacle> obstacles;
};


#endif