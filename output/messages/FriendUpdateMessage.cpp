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
	         writer.writeShort(this->friendUpdated.getTypeId());
}

void FriendUpdateMessage::deserialize(BinaryReader& reader)
{
	      {
}