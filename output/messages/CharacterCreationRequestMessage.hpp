#pragma once
#ifndef CHARACTERCREATIONREQUESTMESSAGE_THANADOLOS_HPP
#define CHARACTERCREATIONREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class CharacterCreationRequestMessage : public IMessage
{
public:
	CharacterCreationRequestMessage(std::string name, int breed, bool sex, ByteArray colors, int cosmeticId);
	CharacterCreationRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 160;

	/*VARS*/
	std::string name;
	int breed;
	bool sex;
	ByteArray colors;
	int cosmeticId;
};


#endif