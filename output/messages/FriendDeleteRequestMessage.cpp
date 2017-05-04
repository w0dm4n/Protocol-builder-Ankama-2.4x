#include "FriendDeleteRequestMessage.hpp"

FriendDeleteRequestMessage::FriendDeleteRequestMessage(int accountId)
{
	this->accountId = accountId;

}

FriendDeleteRequestMessage::FriendDeleteRequestMessage()
{

}

ushort FriendDeleteRequestMessage::getId()
{
	return id;
}

std::string FriendDeleteRequestMessage::getName()
{
	return "FriendDeleteRequestMessage";
}

void FriendDeleteRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->accountId);      
}

void FriendDeleteRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->accountId = reader.readInt();      }
}