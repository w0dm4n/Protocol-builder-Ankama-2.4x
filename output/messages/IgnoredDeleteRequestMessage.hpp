#pragma once
#ifndef IGNOREDDELETEREQUESTMESSAGE_THANADOLOS_HPP
#define IGNOREDDELETEREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class IgnoredDeleteRequestMessage : public IMessage
{
public:
	IgnoredDeleteRequestMessage(int accountId, bool session);
	IgnoredDeleteRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5680;

	/*VARS*/
	int accountId;
	bool session;
};


#endif