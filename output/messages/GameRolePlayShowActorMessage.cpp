#include "GameRolePlayShowActorMessage.hpp"

GameRolePlayShowActorMessage::GameRolePlayShowActorMessage(GameRolePlayActorInformations& informations)
{
	this->informations = informations;

}

GameRolePlayShowActorMessage::GameRolePlayShowActorMessage()
{

}

ushort GameRolePlayShowActorMessage::getId()
{
	return id;
}

std::string GameRolePlayShowActorMessage::getName()
{
	return "GameRolePlayShowActorMessage";
}

void GameRolePlayShowActorMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->informations.getId());         this->informations.serialize(writer);      
}

void GameRolePlayShowActorMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readUnsignedShort();         this->informations.deserialize(reader);      }
}