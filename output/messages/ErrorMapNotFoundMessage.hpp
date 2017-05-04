#pragma once
#ifndef ERRORMAPNOTFOUNDMESSAGE_THANADOLOS_HPP
#define ERRORMAPNOTFOUNDMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class ErrorMapNotFoundMessage : public IMessage
{
public:
	ErrorMapNotFoundMessage(int mapId);
	ErrorMapNotFoundMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6197;

	/*VARS*/
	int mapId;
};


#endif