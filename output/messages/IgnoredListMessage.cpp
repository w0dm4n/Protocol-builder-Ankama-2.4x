#include "IgnoredListMessage.hpp"

IgnoredListMessage::IgnoredListMessage(std::vector<IgnoredInformations> ignoredList)
{
	this->ignoredList = ignoredList;

}

IgnoredListMessage::IgnoredListMessage()
{

}

ushort IgnoredListMessage::getId()
{
	return id;
}

std::string IgnoredListMessage::getName()
{
	return "IgnoredListMessage";
}

void IgnoredListMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->ignoredList.size());
         while(_loc2_ < this->ignoredList.size())
}

void IgnoredListMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc5_ = 0;
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}