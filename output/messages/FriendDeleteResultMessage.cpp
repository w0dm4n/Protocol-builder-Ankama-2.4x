#include "FriendDeleteResultMessage.hpp"

FriendDeleteResultMessage::FriendDeleteResultMessage(bool success, std::string name)
{
	this->success = success;
this->name = name;

}

FriendDeleteResultMessage::FriendDeleteResultMessage()
{

}

ushort FriendDeleteResultMessage::getId()
{
	return id;
}

std::string FriendDeleteResultMessage::getName()
{
	return "FriendDeleteResultMessage";
}

void FriendDeleteResultMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->success);         writer.writeUTF(this->name);      
}

void FriendDeleteResultMessage::deserialize(BinaryReader& reader)
{
	      {         this->success = reader.readBool();         this->name = reader.readUTF();      }
}