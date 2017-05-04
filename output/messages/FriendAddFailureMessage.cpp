#include "FriendAddFailureMessage.hpp"

FriendAddFailureMessage::FriendAddFailureMessage(int reason)
{
	this->reason = reason;

}

FriendAddFailureMessage::FriendAddFailureMessage()
{

}

ushort FriendAddFailureMessage::getId()
{
	return id;
}

std::string FriendAddFailureMessage::getName()
{
	return "FriendAddFailureMessage";
}

void FriendAddFailureMessage::serialize(BinaryWriter& writer)
{
	         writer.writeByte(this->reason);      
}

void FriendAddFailureMessage::deserialize(BinaryReader& reader)
{
	      {         this->reason = reader.readByte();      }
}