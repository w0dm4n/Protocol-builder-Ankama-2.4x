#pragma once
#ifndef FRIENDSPOUSEFOLLOWWITHCOMPASSREQUESTMESSAGE_THANADOLOS_HPP
#define FRIENDSPOUSEFOLLOWWITHCOMPASSREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class FriendSpouseFollowWithCompassRequestMessage : public IMessage
{
public:
	FriendSpouseFollowWithCompassRequestMessage(bool enable);
	FriendSpouseFollowWithCompassRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5606;

	/*VARS*/
	bool enable;
};


#endif