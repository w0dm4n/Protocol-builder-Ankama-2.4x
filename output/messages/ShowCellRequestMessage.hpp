#pragma once
#ifndef SHOWCELLREQUESTMESSAGE_THANADOLOS_HPP
#define SHOWCELLREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class ShowCellRequestMessage : public IMessage
{
public:
	ShowCellRequestMessage(int cellId);
	ShowCellRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5611;

	/*VARS*/
	int cellId;
};


#endif