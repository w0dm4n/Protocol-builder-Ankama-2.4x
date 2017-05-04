#include "IgnoredAddRequestMessage.hpp"

IgnoredAddRequestMessage::IgnoredAddRequestMessage(std::string name, bool session)
{
	this->name = name;
this->session = session;

}

IgnoredAddRequestMessage::IgnoredAddRequestMessage()
{

}

ushort IgnoredAddRequestMessage::getId()
{
	return id;
}

std::string IgnoredAddRequestMessage::getName()
{
	return "IgnoredAddRequestMessage";
}

void IgnoredAddRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->name);         writer.writeBool(this->session);      
}

void IgnoredAddRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->name = reader.readUTF();         this->session = reader.readBool();      }
}