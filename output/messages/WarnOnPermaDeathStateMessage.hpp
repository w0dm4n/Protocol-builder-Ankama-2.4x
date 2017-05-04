#pragma once
#ifndef WARNONPERMADEATHSTATEMESSAGE_THANADOLOS_HPP
#define WARNONPERMADEATHSTATEMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class WarnOnPermaDeathStateMessage : public IMessage
{
public:
	WarnOnPermaDeathStateMessage(bool enable);
	WarnOnPermaDeathStateMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6513;

	/*VARS*/
	bool enable;
};


#endif