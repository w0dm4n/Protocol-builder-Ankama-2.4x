#pragma once
#ifndef GAMECONTEXTREMOVEELEMENTWITHEVENTMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTREMOVEELEMENTWITHEVENTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextRemoveElementWithEventMessage : public IMessage
{
public:
	GameContextRemoveElementWithEventMessage(int elementEventId);
	GameContextRemoveElementWithEventMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6412;

	/*VARS*/
	int elementEventId;
};


#endif