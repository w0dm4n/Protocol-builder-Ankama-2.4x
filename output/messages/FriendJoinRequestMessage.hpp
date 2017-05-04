#pragma once
#ifndef FRIENDJOINREQUESTMESSAGE_THANADOLOS_HPP
#define FRIENDJOINREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendJoinRequestMessage : public IMessage
{
public:
	FriendJoinRequestMessage(std::string name);
	FriendJoinRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5605;

	/*VARS*/
	std::string name;
};


#endif