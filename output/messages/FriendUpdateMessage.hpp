#pragma once
#ifndef FRIENDUPDATEMESSAGE_THANADOLOS_HPP
#define FRIENDUPDATEMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "FriendInformations.hpp" 


class FriendUpdateMessage : public IMessage
{
public:
	FriendUpdateMessage(FriendInformations& friendUpdated);
	FriendUpdateMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5924;

	/*VARS*/
	FriendInformations friendUpdated;
};


#endif