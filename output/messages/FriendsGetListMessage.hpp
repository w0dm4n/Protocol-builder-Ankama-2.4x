#pragma once
#ifndef FRIENDSGETLISTMESSAGE_THANADOLOS_HPP
#define FRIENDSGETLISTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendsGetListMessage : public IMessage
{
public:
	FriendsGetListMessage();
	FriendsGetListMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 4001;

	/*VARS*/

};


#endif