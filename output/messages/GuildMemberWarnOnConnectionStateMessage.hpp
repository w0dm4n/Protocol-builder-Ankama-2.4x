#pragma once
#ifndef GUILDMEMBERWARNONCONNECTIONSTATEMESSAGE_THANADOLOS_HPP
#define GUILDMEMBERWARNONCONNECTIONSTATEMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GuildMemberWarnOnConnectionStateMessage : public IMessage
{
public:
	GuildMemberWarnOnConnectionStateMessage(bool enable);
	GuildMemberWarnOnConnectionStateMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6160;

	/*VARS*/
	bool enable;
};


#endif