#include "GameRefreshMonsterBoostsMessage.hpp"

GameRefreshMonsterBoostsMessage::GameRefreshMonsterBoostsMessage(std::vector<MonsterBoosts> monsterBoosts, std::vector<MonsterBoosts> familyBoosts)
{
	this->monsterBoosts = monsterBoosts;
this->familyBoosts = familyBoosts;

}

GameRefreshMonsterBoostsMessage::GameRefreshMonsterBoostsMessage()
{

}

ushort GameRefreshMonsterBoostsMessage::getId()
{
	return id;
}

std::string GameRefreshMonsterBoostsMessage::getName()
{
	return "GameRefreshMonsterBoostsMessage";
}

void GameRefreshMonsterBoostsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->monsterBoosts.size());	int _loc2_ = 0;
         while(_loc2_ < this->monsterBoosts.size())         {            (this->monsterBoosts[_loc2_]).serialize(writer);
            _loc2_++;         }         writer.writeShort(this->familyBoosts.size());	int _loc3_ = 0;
         while(_loc3_ < this->familyBoosts.size())         {            (this->familyBoosts[_loc3_]).serialize(writer);
            _loc3_++;         }      
}

void GameRefreshMonsterBoostsMessage::deserialize(BinaryReader& reader)
{
	      {	MonsterBoosts _loc6_;
	MonsterBoosts _loc7_;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc6_.deserialize(reader);            this->monsterBoosts.push_back(_loc6_);            _loc3_++;         }	int _loc4_ = reader.readUnsignedShort();	int _loc5_ = 0;
         while(_loc5_ < _loc4_)         {            _loc7_.deserialize(reader);            this->familyBoosts.push_back(_loc7_);            _loc5_++;         }      }
}