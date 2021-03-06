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
	         writer.writeShort(this->ignoredList.size());	int _loc2_ = 0;
         while(_loc2_ < this->ignoredList.size())         {            writer.writeShort((this->ignoredList[_loc2_]).getId());            (this->ignoredList[_loc2_]).serialize(writer);            _loc2_++;         }      
}

void IgnoredListMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	IgnoredInformations _loc5_;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readUnsignedShort();            _loc5_.deserialize(reader);            this->ignoredList.push_back(_loc5_);            _loc3_++;         }      }
}