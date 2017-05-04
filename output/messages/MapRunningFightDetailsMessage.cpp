#include "MapRunningFightDetailsMessage.hpp"

MapRunningFightDetailsMessage::MapRunningFightDetailsMessage(int fightId, std::vector<GameFightFighterLightInformations> attackers, std::vector<GameFightFighterLightInformations> defenders)
{
	this->fightId = fightId;
this->attackers = attackers;
this->defenders = defenders;

}

MapRunningFightDetailsMessage::MapRunningFightDetailsMessage()
{

}

ushort MapRunningFightDetailsMessage::getId()
{
	return id;
}

std::string MapRunningFightDetailsMessage::getName()
{
	return "MapRunningFightDetailsMessage";
}

void MapRunningFightDetailsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->fightId);         writer.writeShort(this->attackers.size());	int _loc2_ = 0;
         while(_loc2_ < this->attackers.size())         {            writer.writeShort((this->attackers[_loc2_] as GameFightFighterLightInformations).getTypeId());            (this->attackers[_loc2_] as GameFightFighterLightInformations).serialize(writer);            _loc2_++;         }         writer.writeShort(this->defenders.size());	int _loc3_ = 0;
         while(_loc3_ < this->defenders.size())         {            writer.writeShort((this->defenders[_loc3_] as GameFightFighterLightInformations).getTypeId());            (this->defenders[_loc3_] as GameFightFighterLightInformations).serialize(writer);            _loc3_++;         }      
}

void MapRunningFightDetailsMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc6_ = 0;
	int _loc7_ = 0;
	int _loc8_ = 0;
	int _loc9_ = 0;
         this->fightId = reader.readInt();	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc6_ = reader.readUnsignedShort();            _loc7_ = ProtocolTypeManager.getInstance(GameFightFighterLightInformations,_loc6_);            _loc7_.deserialize(reader);            this->attackers.push_back(_loc7_);            _loc3_++;         }	int _loc4_ = reader.readUnsignedShort();	int _loc5_ = 0;
         while(_loc5_ < _loc4_)         {            _loc8_ = reader.readUnsignedShort();            _loc9_ = ProtocolTypeManager.getInstance(GameFightFighterLightInformations,_loc8_);            _loc9_.deserialize(reader);            this->defenders.push_back(_loc9_);            _loc5_++;         }      }
}