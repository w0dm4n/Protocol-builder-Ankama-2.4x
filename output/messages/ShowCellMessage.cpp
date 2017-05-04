#include "ShowCellMessage.hpp"

ShowCellMessage::ShowCellMessage(int sourceId, int cellId)
{
	this->sourceId = sourceId;
this->cellId = cellId;

}

ShowCellMessage::ShowCellMessage()
{

}

ushort ShowCellMessage::getId()
{
	return id;
}

std::string ShowCellMessage::getName()
{
	return "ShowCellMessage";
}

void ShowCellMessage::serialize(BinaryWriter& writer)
{
	         writer.writeDouble(this->sourceId);         writer.writeVarShort(this->cellId);      
}

void ShowCellMessage::deserialize(BinaryReader& reader)
{
	      {         this->sourceId = reader.readDouble();         this->cellId = reader.readVarUhShort();      }
}