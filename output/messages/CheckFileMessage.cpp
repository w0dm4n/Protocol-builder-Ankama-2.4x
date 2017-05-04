#include "CheckFileMessage.hpp"

CheckFileMessage::CheckFileMessage(std::string filenameHash, int type, std::string value)
{
	this->filenameHash = filenameHash;
this->type = type;
this->value = value;

}

CheckFileMessage::CheckFileMessage()
{

}

ushort CheckFileMessage::getId()
{
	return id;
}

std::string CheckFileMessage::getName()
{
	return "CheckFileMessage";
}

void CheckFileMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->filenameHash);
}

void CheckFileMessage::deserialize(BinaryReader& reader)
{
	      {
}