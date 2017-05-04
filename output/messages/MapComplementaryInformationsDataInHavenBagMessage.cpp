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
         writer.writeByte(this->theme);         writer.writeByte(this->roomId);         writer.writeByte(this->maxRoomId);      
}

void MapComplementaryInformationsDataInHavenBagMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);         this->ownerInformations.deserialize(reader);         this->theme = reader.readByte();         this->roomId = reader.readByte();         this->maxRoomId = reader.readByte();      }
}