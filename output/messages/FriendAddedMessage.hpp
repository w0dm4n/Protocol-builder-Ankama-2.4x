#pragma once
#ifndef FRIENDADDEDMESSAGE_THANADOLOS_HPP
#define FRIENDADDEDMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "FriendInformations.hpp" 


class FriendAddedMessage : public IMessage
{
public:
	FriendAddedMessage(FriendInformations& friendAdded);
	FriendAddedMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5599;

	/*VARS*/
	FriendInformations friendAdded;
};


#endif