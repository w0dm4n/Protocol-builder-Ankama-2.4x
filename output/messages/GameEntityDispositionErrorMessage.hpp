#pragma once
#ifndef GAMEENTITYDISPOSITIONERRORMESSAGE_THANADOLOS_HPP
#define GAMEENTITYDISPOSITIONERRORMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameEntityDispositionErrorMessage : public IMessage
{
public:
	GameEntityDispositionErrorMessage();
	GameEntityDispositionErrorMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5695;

	/*VARS*/

};


#endif