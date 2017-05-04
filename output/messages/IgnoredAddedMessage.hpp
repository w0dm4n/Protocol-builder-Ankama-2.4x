#pragma once
#ifndef IGNOREDADDEDMESSAGE_THANADOLOS_HPP
#define IGNOREDADDEDMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "IgnoredInformations.hpp" 


class IgnoredAddedMessage : public IMessage
{
public:
	IgnoredAddedMessage(IgnoredInformations& ignoreAdded, bool session);
	IgnoredAddedMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5678;

	/*VARS*/
	IgnoredInformations ignoreAdded;
	bool session;
};


#endif