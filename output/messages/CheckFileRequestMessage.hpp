#pragma once
#ifndef CHECKFILEREQUESTMESSAGE_THANADOLOS_HPP
#define CHECKFILEREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class CheckFileRequestMessage : public IMessage
{
public:
	CheckFileRequestMessage(std::string filename, int type);
	CheckFileRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6154;

	/*VARS*/
	std::string filename;
	int type;
};


#endif