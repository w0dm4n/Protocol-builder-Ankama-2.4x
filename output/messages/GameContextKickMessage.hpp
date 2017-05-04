#pragma once
#ifndef GAMECONTEXTKICKMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTKICKMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextKickMessage : public IMessage
{
public:
	GameContextKickMessage(int targetId);
	GameContextKickMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6081;

	/*VARS*/
	int targetId;
};


#endif