#pragma once
#ifndef GAMEENTITYDISPOSITIONMESSAGE_THANADOLOS_HPP
#define GAMEENTITYDISPOSITIONMESSAGE_THANADOLOS_HPP

#include "imessage.h"
#include "IdentifiedEntityDispositionInformations.hpp" 


class GameEntityDispositionMessage : public IMessage
{
public:
	GameEntityDispositionMessage(IdentifiedEntityDispositionInformations& disposition);
	GameEntityDispositionMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5693;

	/*VARS*/
	IdentifiedEntityDispositionInformations disposition;
};


#endif