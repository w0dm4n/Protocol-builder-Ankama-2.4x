#include "CheckIntegrityMessage.hpp"

CheckIntegrityMessage::CheckIntegrityMessage(ByteArray data)
{
	this->data = data;

}

CheckIntegrityMessage::CheckIntegrityMessage()
{

}

ushort CheckIntegrityMessage::getId()
{
	return id;
}

std::string CheckIntegrityMessage::getName()
{
	return "CheckIntegrityMessage";
}

void CheckIntegrityMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->data.size());	int _loc2_ = 0;
         while(_loc2_ < this->data.size())         {            writer.writeByte(this->data[_loc2_]);            _loc2_++;         }      
}

void CheckIntegrityMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	int _loc2_ = reader.readVarInt();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readByte();            this->data.push_back(_loc4_);            _loc3_++;         }      }
}