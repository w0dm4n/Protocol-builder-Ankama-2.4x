#pragma once
#ifndef GAMEMAPCHANGEORIENTATIONSMESSAGE_THANADOLOS_HPP
#define GAMEMAPCHANGEORIENTATIONSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameMapChangeOrientationsMessage : public IMessage
{
public:
	GameMapChangeOrientationsMessage(std::vector<ActorOrientation> orientations);
	GameMapChangeOrientationsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6155;

	/*VARS*/
	std::vector<ActorOrientation> orientations;
};


#endif