#include "IgnoredAddedMessage.hpp"

IgnoredAddedMessage::IgnoredAddedMessage(IgnoredInformations& ignoreAdded, bool session)
{
	this->ignoreAdded = ignoreAdded;
this->session = session;

}

IgnoredAddedMessage::IgnoredAddedMessage()
{

}

ushort IgnoredAddedMessage::getId()
{
	return id;
}

std::string IgnoredAddedMessage::getName()
{
	return "IgnoredAddedMessage";
}

void IgnoredAddedMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->ignoreAdded.getTypeId());         this->ignoreAdded.serialize(writer);         writer.writeBool(this->session);      
}

void IgnoredAddedMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readUnsignedShort();         this->ignoreAdded = ProtocolTypeManager.getInstance(IgnoredInformations,_loc2_);         this->ignoreAdded.deserialize(reader);         this->session = reader.readBool();      }
}