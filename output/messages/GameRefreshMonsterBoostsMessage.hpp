#pragma once
#ifndef GAMEREFRESHMONSTERBOOSTSMESSAGE_THANADOLOS_HPP
#define GAMEREFRESHMONSTERBOOSTSMESSAGE_THANADOLOS_HPP

#include "imessage.h"


class GameRefreshMonsterBoostsMessage : public IMessage
{
public:
	GameRefreshMonsterBoostsMessage(std::vector<MonsterBoosts> monsterBoosts, std::vector<MonsterBoosts> familyBoosts);
	GameRefreshMonsterBoostsMessage();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int id = 6618;

	/*VARS*/
	std::vector<MonsterBoosts> monsterBoosts;
	std::vector<MonsterBoosts> familyBoosts;
};


#endif