#pragma once
#ifndef GAMEMAPCHANGEORIENTATIONREQUESTMESSAGE_THANADOLOS_HPP
#define GAMEMAPCHANGEORIENTATIONREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameMapChangeOrientationRequestMessage : public IMessage
{
public:
	GameMapChangeOrientationRequestMessage(int direction);
	GameMapChangeOrientationRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 945;

	/*VARS*/
	int direction;
};


#endif