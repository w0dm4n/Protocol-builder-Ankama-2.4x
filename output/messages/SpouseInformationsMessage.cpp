#include "SpouseInformationsMessage.hpp"

SpouseInformationsMessage::SpouseInformationsMessage(FriendSpouseInformations& spouse)
{
	this->spouse = spouse;

}

SpouseInformationsMessage::SpouseInformationsMessage()
{

}

ushort SpouseInformationsMessage::getId()
{
	return id;
}

std::string SpouseInformationsMessage::getName()
{
	return "SpouseInformationsMessage";
}

void SpouseInformationsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->spouse.getTypeId());
}

void SpouseInformationsMessage::deserialize(BinaryReader& reader)
{
	      {
}