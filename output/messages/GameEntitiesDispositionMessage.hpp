#pragma once
#ifndef GAMEENTITIESDISPOSITIONMESSAGE_THANADOLOS_HPP
#define GAMEENTITIESDISPOSITIONMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameEntitiesDispositionMessage : public IMessage
{
public:
	GameEntitiesDispositionMessage(std::vector<IdentifiedEntityDispositionInformations> dispositions);
	GameEntitiesDispositionMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5696;

	/*VARS*/
	std::vector<IdentifiedEntityDispositionInformations> dispositions;
};


#endif