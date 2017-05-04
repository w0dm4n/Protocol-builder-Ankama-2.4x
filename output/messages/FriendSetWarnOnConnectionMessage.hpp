#pragma once
#ifndef FRIENDSETWARNONCONNECTIONMESSAGE_THANADOLOS_HPP
#define FRIENDSETWARNONCONNECTIONMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendSetWarnOnConnectionMessage : public IMessage
{
public:
	FriendSetWarnOnConnectionMessage(bool enable);
	FriendSetWarnOnConnectionMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5602;

	/*VARS*/
	bool enable;
};


#endif