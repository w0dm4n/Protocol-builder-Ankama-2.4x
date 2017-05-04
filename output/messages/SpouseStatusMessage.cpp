#include "SpouseStatusMessage.hpp"

SpouseStatusMessage::SpouseStatusMessage(bool hasSpouse)
{
	this->hasSpouse = hasSpouse;

}

SpouseStatusMessage::SpouseStatusMessage()
{

}

ushort SpouseStatusMessage::getId()
{
	return id;
}

std::string SpouseStatusMessage::getName()
{
	return "SpouseStatusMessage";
}

void SpouseStatusMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->hasSpouse);      
}

void SpouseStatusMessage::deserialize(BinaryReader& reader)
{
	      {         this->hasSpouse = reader.readBool();      }
}