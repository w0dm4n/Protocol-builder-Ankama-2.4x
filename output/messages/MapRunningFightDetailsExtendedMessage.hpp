#pragma once
#ifndef MAPRUNNINGFIGHTDETAILSEXTENDEDMESSAGE_THANADOLOS_HPP
#define MAPRUNNINGFIGHTDETAILSEXTENDEDMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class MapRunningFightDetailsExtendedMessage : public IMessage
{
public:
	MapRunningFightDetailsExtendedMessage(std::vector<NamedPartyTeam> namedPartyTeams);
	MapRunningFightDetailsExtendedMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6500;

	/*VARS*/
	std::vector<NamedPartyTeam> namedPartyTeams;
};


#endif