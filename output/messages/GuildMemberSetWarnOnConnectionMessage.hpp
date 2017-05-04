#pragma once
#ifndef GUILDMEMBERSETWARNONCONNECTIONMESSAGE_THANADOLOS_HPP
#define GUILDMEMBERSETWARNONCONNECTIONMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GuildMemberSetWarnOnConnectionMessage : public IMessage
{
public:
	GuildMemberSetWarnOnConnectionMessage(bool enable);
	GuildMemberSetWarnOnConnectionMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6159;

	/*VARS*/
	bool enable;
};


#endif