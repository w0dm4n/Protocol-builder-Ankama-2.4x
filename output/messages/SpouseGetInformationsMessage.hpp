#pragma once
#ifndef SPOUSEGETINFORMATIONSMESSAGE_THANADOLOS_HPP
#define SPOUSEGETINFORMATIONSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class SpouseGetInformationsMessage : public IMessage
{
public:
	SpouseGetInformationsMessage();
	SpouseGetInformationsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6355;

	/*VARS*/

};


#endif