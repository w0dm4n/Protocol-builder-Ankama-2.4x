#pragma once
#ifndef GAMECONTEXTMOVEELEMENTMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTMOVEELEMENTMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "EntityMovementInformations.hpp" 


class GameContextMoveElementMessage : public IMessage
{
public:
	GameContextMoveElementMessage(EntityMovementInformations& movement);
	GameContextMoveElementMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 253;

	/*VARS*/
	EntityMovementInformations movement;
};


#endif