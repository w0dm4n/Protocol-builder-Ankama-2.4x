#pragma once
#ifndef GAMECONTEXTREADYMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTREADYMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextReadyMessage : public IMessage
{
public:
	GameContextReadyMessage(int mapId);
	GameContextReadyMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6071;

	/*VARS*/
	int mapId;
};


#endif