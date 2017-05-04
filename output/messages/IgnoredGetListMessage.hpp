#pragma once
#ifndef IGNOREDGETLISTMESSAGE_THANADOLOS_HPP
#define IGNOREDGETLISTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class IgnoredGetListMessage : public IMessage
{
public:
	IgnoredGetListMessage();
	IgnoredGetListMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5676;

	/*VARS*/

};


#endif