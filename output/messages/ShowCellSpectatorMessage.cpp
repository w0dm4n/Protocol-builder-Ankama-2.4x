#include "ShowCellSpectatorMessage.hpp"

ShowCellSpectatorMessage::ShowCellSpectatorMessage(std::string playerName)
{
	this->playerName = playerName;

}

ShowCellSpectatorMessage::ShowCellSpectatorMessage()
{

}

ushort ShowCellSpectatorMessage::getId()
{
	return id;
}

std::string ShowCellSpectatorMessage::getName()
{
	return "ShowCellSpectatorMessage";
}

void ShowCellSpectatorMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeUTF(this->playerName);      
}

void ShowCellSpectatorMessage::deserialize(BinaryReader& reader)
{
	      {         super.deserialize(reader);         this->playerName = reader.readUTF();      }
}