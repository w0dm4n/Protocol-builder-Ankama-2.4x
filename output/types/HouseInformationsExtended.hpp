#pragma once
#ifndef HOUSEINFORMATIONSEXTENDED_THANADOLOS_HPP
#define HOUSEINFORMATIONSEXTENDED_THANADOLOS_HPP

#include "IType.hpp"
#include "GuildInformations.hpp" 


class HouseInformationsExtended : public IType
{
public:
	HouseInformationsExtended(GuildInformations& guildInfo);
	HouseInformationsExtended();
	ushort getId();
	std::string getName();
	void serialize(BinaryWriter& writer);
	void deserialize(BinaryReader& reader);

	static const int __id = 112;

	/*VARS*/
	GuildInformations guildInfo;
};


#endif