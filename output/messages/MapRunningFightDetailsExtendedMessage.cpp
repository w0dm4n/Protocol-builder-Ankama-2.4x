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
         writer.writeShort(this->namedPartyTeams.size());	int _loc2_ = 0;
         while(_loc2_ < this->namedPartyTeams.size())         {            (this->namedPartyTeams[_loc2_] as NamedPartyTeam).serialize(writer);
            _loc2_++;         }      
}

void MapRunningFightDetailsExtendedMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
         super.deserialize(reader);	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_.deserialize(reader);            this->namedPartyTeams.push_back(_loc4_);            _loc3_++;         }      }
}