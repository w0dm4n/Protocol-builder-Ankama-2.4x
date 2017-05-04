#include "CheckFileRequestMessage.hpp"

CheckFileRequestMessage::CheckFileRequestMessage(std::string filename, int type)
{
	this->filename = filename;
this->type = type;

}

CheckFileRequestMessage::CheckFileRequestMessage()
{

}

ushort CheckFileRequestMessage::getId()
{
	return id;
}

std::string CheckFileRequestMessage::getName()
{
	return "CheckFileRequestMessage";
}

void CheckFileRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->filename);
}

void CheckFileRequestMessage::deserialize(BinaryReader& reader)
{
	      {
}