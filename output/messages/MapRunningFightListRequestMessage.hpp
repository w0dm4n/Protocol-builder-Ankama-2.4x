#pragma once
#ifndef MAPRUNNINGFIGHTLISTREQUESTMESSAGE_THANADOLOS_HPP
#define MAPRUNNINGFIGHTLISTREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapRunningFightListRequestMessage : public IMessage
{
public:
	MapRunningFightListRequestMessage();
	MapRunningFightListRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5742;

	/*VARS*/

};


#endif