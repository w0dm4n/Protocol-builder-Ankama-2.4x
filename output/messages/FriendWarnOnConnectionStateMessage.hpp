#pragma once
#ifndef FRIENDWARNONCONNECTIONSTATEMESSAGE_THANADOLOS_HPP
#define FRIENDWARNONCONNECTIONSTATEMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendWarnOnConnectionStateMessage : public IMessage
{
public:
	FriendWarnOnConnectionStateMessage(bool enable);
	FriendWarnOnConnectionStateMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5630;

	/*VARS*/
	bool enable;
};


#endif