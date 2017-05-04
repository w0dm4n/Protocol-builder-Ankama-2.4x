#pragma once
#ifndef FRIENDADDREQUESTMESSAGE_THANADOLOS_HPP
#define FRIENDADDREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendAddRequestMessage : public IMessage
{
public:
	FriendAddRequestMessage(std::string name);
	FriendAddRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 4004;

	/*VARS*/
	std::string name;
};


#endif