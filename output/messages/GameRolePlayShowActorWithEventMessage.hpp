#pragma once
#ifndef GAMEROLEPLAYSHOWACTORWITHEVENTMESSAGE_THANADOLOS_HPP
#define GAMEROLEPLAYSHOWACTORWITHEVENTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameRolePlayShowActorWithEventMessage : public IMessage
{
public:
	GameRolePlayShowActorWithEventMessage(int actorEventId);
	GameRolePlayShowActorWithEventMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6407;

	/*VARS*/
	int actorEventId;
};


#endif