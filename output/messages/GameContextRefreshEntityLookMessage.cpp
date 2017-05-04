#include "GameContextRefreshEntityLookMessage.hpp"

GameContextRefreshEntityLookMessage::GameContextRefreshEntityLookMessage(int id, EntityLook& look)
{
	this->id = id;
this->look = look;

}

GameContextRefreshEntityLookMessage::GameContextRefreshEntityLookMessage()
{

}

ushort GameContextRefreshEntityLookMessage::getId()
{
	return id;
}

std::string GameContextRefreshEntityLookMessage::getName()
{
	return "GameContextRefreshEntityLookMessage";
}

void GameContextRefreshEntityLookMessage::serialize(BinaryWriter& writer)
{
	         writer.writeDouble(this->id);         this->look.serialize(writer);
      
}

void GameContextRefreshEntityLookMessage::deserialize(BinaryReader& reader)
{
	      {         this->id = reader.readDouble();         this->look.deserialize(reader);      }
}