#pragma once
#ifndef CLIENTKEYMESSAGE_THANADOLOS_HPP
#define CLIENTKEYMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class ClientKeyMessage : public IMessage
{
public:
	ClientKeyMessage(std::string key);
	ClientKeyMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5607;

	/*VARS*/
	std::string key;
};


#endif