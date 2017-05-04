#include "FriendSetWarnOnLevelGainMessage.hpp"

FriendSetWarnOnLevelGainMessage::FriendSetWarnOnLevelGainMessage(bool enable)
{
	this->enable = enable;

}

FriendSetWarnOnLevelGainMessage::FriendSetWarnOnLevelGainMessage()
{

}

ushort FriendSetWarnOnLevelGainMessage::getId()
{
	return id;
}

std::string FriendSetWarnOnLevelGainMessage::getName()
{
	return "FriendSetWarnOnLevelGainMessage";
}

void FriendSetWarnOnLevelGainMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void FriendSetWarnOnLevelGainMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}