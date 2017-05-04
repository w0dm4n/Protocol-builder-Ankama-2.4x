#pragma once
#ifndef GAMECAUTIOUSMAPMOVEMENTREQUESTMESSAGE_THANADOLOS_HPP
#define GAMECAUTIOUSMAPMOVEMENTREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameCautiousMapMovementRequestMessage : public IMessage
{
public:
	GameCautiousMapMovementRequestMessage();
	GameCautiousMapMovementRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6496;

	/*VARS*/

};


#endif