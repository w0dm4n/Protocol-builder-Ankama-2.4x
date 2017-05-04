#pragma once
#ifndef GAMECAUTIOUSMAPMOVEMENTMESSAGE_THANADOLOS_HPP
#define GAMECAUTIOUSMAPMOVEMENTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameCautiousMapMovementMessage : public IMessage
{
public:
	GameCautiousMapMovementMessage();
	GameCautiousMapMovementMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6497;

	/*VARS*/

};


#endif