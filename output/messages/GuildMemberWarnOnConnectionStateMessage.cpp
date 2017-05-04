#include "GuildMemberWarnOnConnectionStateMessage.hpp"

GuildMemberWarnOnConnectionStateMessage::GuildMemberWarnOnConnectionStateMessage(bool enable)
{
	this->enable = enable;

}

GuildMemberWarnOnConnectionStateMessage::GuildMemberWarnOnConnectionStateMessage()
{

}

ushort GuildMemberWarnOnConnectionStateMessage::getId()
{
	return id;
}

std::string GuildMemberWarnOnConnectionStateMessage::getName()
{
	return "GuildMemberWarnOnConnectionStateMessage";
}

void GuildMemberWarnOnConnectionStateMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void GuildMemberWarnOnConnectionStateMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}