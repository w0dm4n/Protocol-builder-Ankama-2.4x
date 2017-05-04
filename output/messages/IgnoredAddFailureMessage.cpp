#include "IgnoredAddFailureMessage.hpp"

IgnoredAddFailureMessage::IgnoredAddFailureMessage(int reason)
{
	this->reason = reason;

}

IgnoredAddFailureMessage::IgnoredAddFailureMessage()
{

}

ushort IgnoredAddFailureMessage::getId()
{
	return id;
}

std::string IgnoredAddFailureMessage::getName()
{
	return "IgnoredAddFailureMessage";
}

void IgnoredAddFailureMessage::serialize(BinaryWriter& writer)
{
	         writer.writeByte(this->reason);      
}

void IgnoredAddFailureMessage::deserialize(BinaryReader& reader)
{
	      {         this->reason = reader.readByte();      }
}