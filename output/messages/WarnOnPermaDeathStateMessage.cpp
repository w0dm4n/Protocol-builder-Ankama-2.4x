#include "WarnOnPermaDeathStateMessage.hpp"

WarnOnPermaDeathStateMessage::WarnOnPermaDeathStateMessage(bool enable)
{
	this->enable = enable;

}

WarnOnPermaDeathStateMessage::WarnOnPermaDeathStateMessage()
{

}

ushort WarnOnPermaDeathStateMessage::getId()
{
	return id;
}

std::string WarnOnPermaDeathStateMessage::getName()
{
	return "WarnOnPermaDeathStateMessage";
}

void WarnOnPermaDeathStateMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void WarnOnPermaDeathStateMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}