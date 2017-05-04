#pragma once
#ifndef MAPRUNNINGFIGHTDETAILSREQUESTMESSAGE_THANADOLOS_HPP
#define MAPRUNNINGFIGHTDETAILSREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapRunningFightDetailsRequestMessage : public IMessage
{
public:
	MapRunningFightDetailsRequestMessage(int fightId);
	MapRunningFightDetailsRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5750;

	/*VARS*/
	int fightId;
};


#endif