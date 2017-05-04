#include "FriendWarnOnLevelGainStateMessage.hpp"

FriendWarnOnLevelGainStateMessage::FriendWarnOnLevelGainStateMessage(bool enable)
{
	this->enable = enable;

}

FriendWarnOnLevelGainStateMessage::FriendWarnOnLevelGainStateMessage()
{

}

ushort FriendWarnOnLevelGainStateMessage::getId()
{
	return id;
}

std::string FriendWarnOnLevelGainStateMessage::getName()
{
	return "FriendWarnOnLevelGainStateMessage";
}

void FriendWarnOnLevelGainStateMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void FriendWarnOnLevelGainStateMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}