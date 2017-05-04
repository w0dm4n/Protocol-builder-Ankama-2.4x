#pragma once
#ifndef IGNOREDDELETERESULTMESSAGE_THANADOLOS_HPP
#define IGNOREDDELETERESULTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class IgnoredDeleteResultMessage : public IMessage
{
public:
	IgnoredDeleteResultMessage(bool success, std::string name, bool session);
	IgnoredDeleteResultMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5677;

	/*VARS*/
	bool success;
	std::string name;
	bool session;
};


#endif