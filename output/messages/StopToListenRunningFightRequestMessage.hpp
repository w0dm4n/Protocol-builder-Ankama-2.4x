#pragma once
#ifndef STOPTOLISTENRUNNINGFIGHTREQUESTMESSAGE_THANADOLOS_HPP
#define STOPTOLISTENRUNNINGFIGHTREQUESTMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class StopToListenRunningFightRequestMessage : public IMessage
{
public:
	StopToListenRunningFightRequestMessage();
	StopToListenRunningFightRequestMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6124;

	/*VARS*/

};


#endif