#include "FriendSetWarnOnConnectionMessage.hpp"

FriendSetWarnOnConnectionMessage::FriendSetWarnOnConnectionMessage(bool enable)
{
	this->enable = enable;

}

FriendSetWarnOnConnectionMessage::FriendSetWarnOnConnectionMessage()
{

}

ushort FriendSetWarnOnConnectionMessage::getId()
{
	return id;
}

std::string FriendSetWarnOnConnectionMessage::getName()
{
	return "FriendSetWarnOnConnectionMessage";
}

void FriendSetWarnOnConnectionMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void FriendSetWarnOnConnectionMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}