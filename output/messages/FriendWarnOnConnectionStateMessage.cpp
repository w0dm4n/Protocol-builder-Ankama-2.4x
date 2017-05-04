#include "FriendWarnOnConnectionStateMessage.hpp"

FriendWarnOnConnectionStateMessage::FriendWarnOnConnectionStateMessage(bool enable)
{
	this->enable = enable;

}

FriendWarnOnConnectionStateMessage::FriendWarnOnConnectionStateMessage()
{

}

ushort FriendWarnOnConnectionStateMessage::getId()
{
	return id;
}

std::string FriendWarnOnConnectionStateMessage::getName()
{
	return "FriendWarnOnConnectionStateMessage";
}

void FriendWarnOnConnectionStateMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void FriendWarnOnConnectionStateMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}