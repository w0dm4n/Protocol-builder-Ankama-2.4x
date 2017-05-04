#pragma once
#ifndef FRIENDADDFAILUREMESSAGE_THANADOLOS_HPP
#define FRIENDADDFAILUREMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendAddFailureMessage : public IMessage
{
public:
	FriendAddFailureMessage(int reason);
	FriendAddFailureMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5600;

	/*VARS*/
	int reason;
};


#endif