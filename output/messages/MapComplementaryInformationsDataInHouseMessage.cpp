#include "MapComplementaryInformationsDataInHouseMessage.hpp"

MapComplementaryInformationsDataInHouseMessage::MapComplementaryInformationsDataInHouseMessage(HouseInformationsInside& currentHouse)
{
	this->currentHouse = currentHouse;

}

MapComplementaryInformationsDataInHouseMessage::MapComplementaryInformationsDataInHouseMessage()
{

}

ushort MapComplementaryInformationsDataInHouseMessage::getId()
{
	return id;
}

std::string MapComplementaryInformationsDataInHouseMessage::getName()
{
	return "MapComplementaryInformationsDataInHouseMessage";
}

void MapComplementaryInformationsDataInHouseMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         this->currentHouse.serialize(writer);
      
}

void MapComplementaryInformationsDataInHouseMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);         this->currentHouse.deserialize(reader);      }
}