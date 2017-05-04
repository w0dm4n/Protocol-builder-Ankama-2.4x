#pragma once
#ifndef FRIENDWARNONLEVELGAINSTATEMESSAGE_THANADOLOS_HPP
#define FRIENDWARNONLEVELGAINSTATEMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendWarnOnLevelGainStateMessage : public IMessage
{
public:
	FriendWarnOnLevelGainStateMessage(bool enable);
	FriendWarnOnLevelGainStateMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6078;

	/*VARS*/
	bool enable;
};


#endif