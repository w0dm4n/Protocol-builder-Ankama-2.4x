#pragma once
#ifndef MAPFIGHTCOUNTMESSAGE_THANADOLOS_HPP
#define MAPFIGHTCOUNTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapFightCountMessage : public IMessage
{
public:
	MapFightCountMessage(int fightCount);
	MapFightCountMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 210;

	/*VARS*/
	int fightCount;
};


#endif