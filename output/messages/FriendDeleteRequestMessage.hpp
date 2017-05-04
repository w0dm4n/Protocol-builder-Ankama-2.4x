#pragma once
#ifndef FRIENDDELETEREQUESTMESSAGE_THANADOLOS_HPP
#define FRIENDDELETEREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendDeleteRequestMessage : public IMessage
{
public:
	FriendDeleteRequestMessage(int accountId);
	FriendDeleteRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5603;

	/*VARS*/
	int accountId;
};


#endif