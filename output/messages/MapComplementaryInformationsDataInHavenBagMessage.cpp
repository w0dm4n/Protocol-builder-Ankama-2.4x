#include "MapComplementaryInformationsDataInHavenBagMessage.hpp"

MapComplementaryInformationsDataInHavenBagMessage::MapComplementaryInformationsDataInHavenBagMessage(CharacterMinimalInformations& ownerInformations, int theme, int roomId, int maxRoomId)
{
	this->ownerInformations = ownerInformations;
this->theme = theme;
this->roomId = roomId;
this->maxRoomId = maxRoomId;

}

MapComplementaryInformationsDataInHavenBagMessage::MapComplementaryInformationsDataInHavenBagMessage()
{

}

ushort MapComplementaryInformationsDataInHavenBagMessage::getId()
{
	return id;
}

std::string MapComplementaryInformationsDataInHavenBagMessage::getName()
{
	return "MapComplementaryInformationsDataInHavenBagMessage";
}

void MapComplementaryInformationsDataInHavenBagMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         this->ownerInformations.serialize(writer);
         writer.writeByte(this->theme);
}

void MapComplementaryInformationsDataInHavenBagMessage::deserialize(BinaryReader& reader)
{
	      {
}