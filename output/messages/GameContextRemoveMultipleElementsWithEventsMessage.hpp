#pragma once
#ifndef GAMECONTEXTREMOVEMULTIPLEELEMENTSWITHEVENTSMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTREMOVEMULTIPLEELEMENTSWITHEVENTSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextRemoveMultipleElementsWithEventsMessage : public IMessage
{
public:
	GameContextRemoveMultipleElementsWithEventsMessage(std::vector<uint> elementEventIds);
	GameContextRemoveMultipleElementsWithEventsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6416;

	/*VARS*/
	std::vector<uint> elementEventIds;
};


#endif