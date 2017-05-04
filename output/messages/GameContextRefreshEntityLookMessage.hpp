#pragma once
#ifndef GAMECONTEXTREFRESHENTITYLOOKMESSAGE_THANADOLOS_HPP
#define GAMECONTEXTREFRESHENTITYLOOKMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "EntityLook.hpp" 


class GameContextRefreshEntityLookMessage : public IMessage
{
public:
	GameContextRefreshEntityLookMessage(int id, EntityLook& look);
	GameContextRefreshEntityLookMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5637;

	/*VARS*/
	int id;
	EntityLook look;
};


#endif