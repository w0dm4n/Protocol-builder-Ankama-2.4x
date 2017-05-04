#pragma once
#ifndef GAMECONTEXTMOVEMULTIPLEELEMENTSMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTMOVEMULTIPLEELEMENTSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameContextMoveMultipleElementsMessage : public IMessage
{
public:
	GameContextMoveMultipleElementsMessage(std::vector<EntityMovementInformations> movements);
	GameContextMoveMultipleElementsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 254;

	/*VARS*/
	std::vector<EntityMovementInformations> movements;
};


#endif