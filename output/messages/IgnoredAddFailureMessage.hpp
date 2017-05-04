#pragma once
#ifndef IGNOREDADDFAILUREMESSAGE_THANADOLOS_HPP
#define IGNOREDADDFAILUREMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class IgnoredAddFailureMessage : public IMessage
{
public:
	IgnoredAddFailureMessage(int reason);
	IgnoredAddFailureMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 5679;

	/*VARS*/
	int reason;
};


#endif