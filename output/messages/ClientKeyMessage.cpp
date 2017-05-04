#include "ClientKeyMessage.hpp"

ClientKeyMessage::ClientKeyMessage(std::string key)
{
	this->key = key;

}

ClientKeyMessage::ClientKeyMessage()
{

}

ushort ClientKeyMessage::getId()
{
	return id;
}

std::string ClientKeyMessage::getName()
{
	return "ClientKeyMessage";
}

void ClientKeyMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->key);      
}

void ClientKeyMessage::deserialize(BinaryReader& reader)
{
	      {         this->key = reader.readUTF();      }
}