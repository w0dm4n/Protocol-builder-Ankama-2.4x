#include "FriendJoinRequestMessage.hpp"

FriendJoinRequestMessage::FriendJoinRequestMessage(std::string name)
{
	this->name = name;

}

FriendJoinRequestMessage::FriendJoinRequestMessage()
{

}

ushort FriendJoinRequestMessage::getId()
{
	return id;
}

std::string FriendJoinRequestMessage::getName()
{
	return "FriendJoinRequestMessage";
}

void FriendJoinRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->name);      
}

void FriendJoinRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->name = reader.readUTF();      }
}