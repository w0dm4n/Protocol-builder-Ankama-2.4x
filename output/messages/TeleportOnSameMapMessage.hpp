#pragma once
#ifndef TELEPORTONSAMEMAPMESSAGE_THANADOLOS_HPP
#define TELEPORTONSAMEMAPMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class TeleportOnSameMapMessage : public IMessage
{
public:
	TeleportOnSameMapMessage(int targetId, int cellId);
	TeleportOnSameMapMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6048;

	/*VARS*/
	int targetId;
	int cellId;
};


#endif