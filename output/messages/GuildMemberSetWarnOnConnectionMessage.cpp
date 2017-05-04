#include "GuildMemberSetWarnOnConnectionMessage.hpp"

GuildMemberSetWarnOnConnectionMessage::GuildMemberSetWarnOnConnectionMessage(bool enable)
{
	this->enable = enable;

}

GuildMemberSetWarnOnConnectionMessage::GuildMemberSetWarnOnConnectionMessage()
{

}

ushort GuildMemberSetWarnOnConnectionMessage::getId()
{
	return id;
}

std::string GuildMemberSetWarnOnConnectionMessage::getName()
{
	return "GuildMemberSetWarnOnConnectionMessage";
}

void GuildMemberSetWarnOnConnectionMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void GuildMemberSetWarnOnConnectionMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}