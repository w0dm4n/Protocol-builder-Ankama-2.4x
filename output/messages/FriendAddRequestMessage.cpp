#include "FriendAddRequestMessage.hpp"

FriendAddRequestMessage::FriendAddRequestMessage(std::string name)
{
	this->name = name;

}

FriendAddRequestMessage::FriendAddRequestMessage()
{

}

ushort FriendAddRequestMessage::getId()
{
	return id;
}

std::string FriendAddRequestMessage::getName()
{
	return "FriendAddRequestMessage";
}

void FriendAddRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->name);      
}

void FriendAddRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->name = reader.readUTF();      }
}