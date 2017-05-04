#include "IgnoredDeleteResultMessage.hpp"

IgnoredDeleteResultMessage::IgnoredDeleteResultMessage(bool success, std::string name, bool session)
{
	this->success = success;
this->name = name;
this->session = session;

}

IgnoredDeleteResultMessage::IgnoredDeleteResultMessage()
{

}

ushort IgnoredDeleteResultMessage::getId()
{
	return id;
}

std::string IgnoredDeleteResultMessage::getName()
{
	return "IgnoredDeleteResultMessage";
}

void IgnoredDeleteResultMessage::serialize(BinaryWriter& writer)
{
		int _loc2_ = 0;
         _loc2_ = BooleanByteWrapper::setFlag(_loc2_,0,this->success);         _loc2_ = BooleanByteWrapper::setFlag(_loc2_,1,this->session);         writer.writeByte(_loc2_);         writer.writeUTF(this->name);      
}

void IgnoredDeleteResultMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readByte();         this->success = BooleanByteWrapper::getFlag(_loc2_,0);         this->session = BooleanByteWrapper::getFlag(_loc2_,1);         this->name = reader.readUTF();      }
}