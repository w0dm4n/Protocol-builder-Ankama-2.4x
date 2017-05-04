#pragma once
#ifndef RAWDATAMESSAGE_THANADOLOS_HPP
#define RAWDATAMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "ByteArray.hpp" 


class RawDataMessage : public IMessage
{
public:
	RawDataMessage(ByteArray& content);
	RawDataMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6253;

	/*VARS*/
	ByteArray content;
};


#endif