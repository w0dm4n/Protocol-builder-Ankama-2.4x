#include "HouseInformationsExtended.hpp"

HouseInformationsExtended::HouseInformationsExtended(GuildInformations& guildInfo)
{
	this->guildInfo = guildInfo;

}

HouseInformationsExtended::HouseInformationsExtended()
{

}

ushort HouseInformationsExtended::getId()
{
	return __id;
}

std::string HouseInformationsExtended::getName()
{
	return "HouseInformationsExtended";
}

void HouseInformationsExtended::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         this->guildInfo.serialize(writer);
      
}

void HouseInformationsExtended::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);         this->guildInfo.deserialize(reader);      }
}