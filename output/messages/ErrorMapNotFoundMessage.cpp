#include "ErrorMapNotFoundMessage.hpp"

ErrorMapNotFoundMessage::ErrorMapNotFoundMessage(int mapId)
{
	this->mapId = mapId;

}

ErrorMapNotFoundMessage::ErrorMapNotFoundMessage()
{

}

ushort ErrorMapNotFoundMessage::getId()
{
	return id;
}

std::string ErrorMapNotFoundMessage::getName()
{
	return "ErrorMapNotFoundMessage";
}

void ErrorMapNotFoundMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->mapId);      
}

void ErrorMapNotFoundMessage::deserialize(BinaryReader& reader)
{
	      {         this->mapId = reader.readInt();      }
}