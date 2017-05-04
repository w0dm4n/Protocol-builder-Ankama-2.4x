#pragma once
#ifndef GAMEMAPCHANGEORIENTATIONMESSAGE_THANADOLOS_HPP
#define GAMEMAPCHANGEORIENTATIONMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "ActorOrientation.hpp" 


class GameMapChangeOrientationMessage : public IMessage
{
public:
	GameMapChangeOrientationMessage(ActorOrientation& orientation);
	GameMapChangeOrientationMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 946;

	/*VARS*/
	ActorOrientation orientation;
};


#endif