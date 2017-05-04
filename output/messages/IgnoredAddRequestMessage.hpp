#pragma once
#ifndef IGNOREDADDREQUESTMESSAGE_THANADOLOS_HPP
#define IGNOREDADDREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class IgnoredAddRequestMessage : public IMessage
{
public:
	IgnoredAddRequestMessage(std::string name, bool session);
	IgnoredAddRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5673;

	/*VARS*/
	std::string name;
	bool session;
};


#endif