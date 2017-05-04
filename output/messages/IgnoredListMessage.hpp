#pragma once
#ifndef IGNOREDLISTMESSAGE_THANADOLOS_HPP
#define IGNOREDLISTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class IgnoredListMessage : public IMessage
{
public:
	IgnoredListMessage(std::vector<IgnoredInformations> ignoredList);
	IgnoredListMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5674;

	/*VARS*/
	std::vector<IgnoredInformations> ignoredList;
};


#endif