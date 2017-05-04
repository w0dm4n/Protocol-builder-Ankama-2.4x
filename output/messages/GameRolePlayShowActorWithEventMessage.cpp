#include "GameRolePlayShowActorWithEventMessage.hpp"

GameRolePlayShowActorWithEventMessage::GameRolePlayShowActorWithEventMessage(int actorEventId)
{
	this->actorEventId = actorEventId;

}

GameRolePlayShowActorWithEventMessage::GameRolePlayShowActorWithEventMessage()
{

}

ushort GameRolePlayShowActorWithEventMessage::getId()
{
	return id;
}

std::string GameRolePlayShowActorWithEventMessage::getName()
{
	return "GameRolePlayShowActorWithEventMessage";
}

void GameRolePlayShowActorWithEventMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeByte(this->actorEventId);      
}

void GameRolePlayShowActorWithEventMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);         this->actorEventId = reader.readByte();      }
}