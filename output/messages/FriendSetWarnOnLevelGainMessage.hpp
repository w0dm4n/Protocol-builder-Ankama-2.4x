#pragma once
#ifndef FRIENDSETWARNONLEVELGAINMESSAGE_THANADOLOS_HPP
#define FRIENDSETWARNONLEVELGAINMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendSetWarnOnLevelGainMessage : public IMessage
{
public:
	FriendSetWarnOnLevelGainMessage(bool enable);
	FriendSetWarnOnLevelGainMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6077;

	/*VARS*/
	bool enable;
};


#endif