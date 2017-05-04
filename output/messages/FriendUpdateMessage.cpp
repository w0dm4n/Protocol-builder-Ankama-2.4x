#include "FriendUpdateMessage.hpp"

FriendUpdateMessage::FriendUpdateMessage(FriendInformations& friendUpdated)
{
	this->friendUpdated = friendUpdated;

}

FriendUpdateMessage::FriendUpdateMessage()
{

}

ushort FriendUpdateMessage::getId()
{
	return id;
}

std::string FriendUpdateMessage::getName()
{
	return "FriendUpdateMessage";
}

void FriendUpdateMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->friendUpdated.getTypeId());         this->friendUpdated.serialize(writer);      
}

void FriendUpdateMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readUnsignedShort();         this->friendUpdated = ProtocolTypeManager.getInstance(FriendInformations,_loc2_);         this->friendUpdated.deserialize(reader);      }
}