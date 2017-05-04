#include "MapRunningFightDetailsExtendedMessage.hpp"

MapRunningFightDetailsExtendedMessage::MapRunningFightDetailsExtendedMessage(std::vector<NamedPartyTeam> namedPartyTeams)
{
	this->namedPartyTeams = namedPartyTeams;

}

MapRunningFightDetailsExtendedMessage::MapRunningFightDetailsExtendedMessage()
{

}

ushort MapRunningFightDetailsExtendedMessage::getId()
{
	return id;
}

std::string MapRunningFightDetailsExtendedMessage::getName()
{
	return "MapRunningFightDetailsExtendedMessage";
}

void MapRunningFightDetailsExtendedMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeShort(this->namedPartyTeams.size());
         while(_loc2_ < this->namedPartyTeams.size())
            _loc2_++;
}

void MapRunningFightDetailsExtendedMessage::deserialize(BinaryReader& reader)
{
	      {
         super.deserialize(reader);
         while(_loc3_ < _loc2_)
}