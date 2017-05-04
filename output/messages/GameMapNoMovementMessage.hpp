#pragma once
#ifndef GAMEMAPNOMOVEMENTMESSAGE_THANADOLOS_HPP
#define GAMEMAPNOMOVEMENTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameMapNoMovementMessage : public IMessage
{
public:
	GameMapNoMovementMessage(int cellX, int cellY);
	GameMapNoMovementMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 954;

	/*VARS*/
	int cellX;
	int cellY;
};


#endif