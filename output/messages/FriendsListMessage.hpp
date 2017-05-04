#pragma once
#ifndef FRIENDSLISTMESSAGE_THANADOLOS_HPP
#define FRIENDSLISTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendsListMessage : public IMessage
{
public:
	FriendsListMessage(std::vector<FriendInformations> friendsList);
	FriendsListMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 4002;

	/*VARS*/
	std::vector<FriendInformations> friendsList;
};


#endif