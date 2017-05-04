#include "FriendAddedMessage.hpp"

FriendAddedMessage::FriendAddedMessage(FriendInformations& friendAdded)
{
	this->friendAdded = friendAdded;

}

FriendAddedMessage::FriendAddedMessage()
{

}

ushort FriendAddedMessage::getId()
{
	return id;
}

std::string FriendAddedMessage::getName()
{
	return "FriendAddedMessage";
}

void FriendAddedMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->friendAdded.getId());         this->friendAdded.serialize(writer);      
}

void FriendAddedMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readUnsignedShort();         this->friendAdded.deserialize(reader);      }
}