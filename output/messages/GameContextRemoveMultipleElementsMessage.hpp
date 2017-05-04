#pragma once
#ifndef GAMECONTEXTREMOVEMULTIPLEELEMENTSMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTREMOVEMULTIPLEELEMENTSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextRemoveMultipleElementsMessage : public IMessage
{
public:
	GameContextRemoveMultipleElementsMessage(std::vector<Number> id);
	GameContextRemoveMultipleElementsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 252;

	/*VARS*/
	std::vector<Number> id;
};


#endif