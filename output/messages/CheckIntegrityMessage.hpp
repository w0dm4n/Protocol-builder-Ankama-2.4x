#pragma once
#ifndef CHECKINTEGRITYMESSAGE_THANADOLOS_HPP
#define CHECKINTEGRITYMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class CheckIntegrityMessage : public IMessage
{
public:
	CheckIntegrityMessage(ByteArray data);
	CheckIntegrityMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6372;

	/*VARS*/
	ByteArray data;
};


#endif