#include "RawDataMessage.hpp"

RawDataMessage::RawDataMessage(ByteArray& content)
{
	this->content = content;

}

RawDataMessage::RawDataMessage()
{

}

ushort RawDataMessage::getId()
{
	return id;
}

std::string RawDataMessage::getName()
{
	return "RawDataMessage";
}

void RawDataMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->content.size());	int _loc2_ = 0;
         while(_loc2_ < this->content.size())         {            writer.writeByte(this->content[_loc2_]);            _loc2_++;         }      
}

void RawDataMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readVarInt();         reader.readBytes(this->content,0,_loc2_);      }
}