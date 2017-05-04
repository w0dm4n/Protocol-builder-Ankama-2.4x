#include "ShowCellRequestMessage.hpp"

ShowCellRequestMessage::ShowCellRequestMessage(int cellId)
{
	this->cellId = cellId;

}

ShowCellRequestMessage::ShowCellRequestMessage()
{

}

ushort ShowCellRequestMessage::getId()
{
	return id;
}

std::string ShowCellRequestMessage::getName()
{
	return "ShowCellRequestMessage";
}

void ShowCellRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarShort(this->cellId);      
}

void ShowCellRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->cellId = reader.readVarUhShort();      }
}