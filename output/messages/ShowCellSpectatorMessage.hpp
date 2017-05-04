#pragma once
#ifndef SHOWCELLSPECTATORMESSAGE_THANADOLOS_HPP
#define SHOWCELLSPECTATORMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class ShowCellSpectatorMessage : public IMessage
{
public:
	ShowCellSpectatorMessage(std::string playerName);
	ShowCellSpectatorMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6158;

	/*VARS*/
	std::string playerName;
};


#endif