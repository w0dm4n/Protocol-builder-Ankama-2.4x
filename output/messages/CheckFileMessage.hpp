#pragma once
#ifndef CHECKFILEMESSAGE_THANADOLOS_HPP
#define CHECKFILEMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class CheckFileMessage : public IMessage
{
public:
	CheckFileMessage(std::string filenameHash, int type, std::string value);
	CheckFileMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6156;

	/*VARS*/
	std::string filenameHash;
	int type;
	std::string value;
};


#endif