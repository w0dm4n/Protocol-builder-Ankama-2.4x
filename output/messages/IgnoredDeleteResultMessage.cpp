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
         _loc2_ = BooleanByteWrapper::setFlag(_loc2_,0,this->success);
}

void IgnoredDeleteResultMessage::deserialize(BinaryReader& reader)
{
	      {
}