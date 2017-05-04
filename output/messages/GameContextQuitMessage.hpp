#pragma once
#ifndef GAMECONTEXTQUITMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTQUITMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextQuitMessage : public IMessage
{
public:
	GameContextQuitMessage();
	GameContextQuitMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 255;

	/*VARS*/

};


#endif