#pragma once
#ifndef SPOUSESTATUSMESSAGE_THANADOLOS_HPP
#define SPOUSESTATUSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class SpouseStatusMessage : public IMessage
{
public:
	SpouseStatusMessage(bool hasSpouse);
	SpouseStatusMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6265;

	/*VARS*/
	bool hasSpouse;
};


#endif