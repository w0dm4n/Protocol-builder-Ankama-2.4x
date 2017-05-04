#pragma once
#ifndef FRIENDDELETERESULTMESSAGE_THANADOLOS_HPP
#define FRIENDDELETERESULTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendDeleteResultMessage : public IMessage
{
public:
	FriendDeleteResultMessage(bool success, std::string name);
	FriendDeleteResultMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5601;

	/*VARS*/
	bool success;
	std::string name;
};


#endif