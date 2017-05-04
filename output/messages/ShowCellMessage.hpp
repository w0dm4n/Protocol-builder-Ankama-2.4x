#pragma once
#ifndef SHOWCELLMESSAGE_THANADOLOS_HPP
#define SHOWCELLMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class ShowCellMessage : public IMessage
{
public:
	ShowCellMessage(int sourceId, int cellId);
	ShowCellMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5612;

	/*VARS*/
	int sourceId;
	int cellId;
};


#endif