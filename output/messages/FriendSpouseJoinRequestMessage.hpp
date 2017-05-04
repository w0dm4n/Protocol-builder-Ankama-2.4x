#pragma once
#ifndef FRIENDSPOUSEJOINREQUESTMESSAGE_THANADOLOS_HPP
#define FRIENDSPOUSEJOINREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendSpouseJoinRequestMessage : public IMessage
{
public:
	FriendSpouseJoinRequestMessage();
	FriendSpouseJoinRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5604;

	/*VARS*/

};


#endif