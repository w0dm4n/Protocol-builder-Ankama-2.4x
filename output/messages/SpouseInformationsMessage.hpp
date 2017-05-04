#pragma once
#ifndef SPOUSEINFORMATIONSMESSAGE_THANADOLOS_HPP
#define SPOUSEINFORMATIONSMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "FriendSpouseInformations.hpp" 


class SpouseInformationsMessage : public IMessage
{
public:
	SpouseInformationsMessage(FriendSpouseInformations& spouse);
	SpouseInformationsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6356;

	/*VARS*/
	FriendSpouseInformations spouse;
};


#endif