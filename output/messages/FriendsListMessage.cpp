#include "FriendsListMessage.hpp"

FriendsListMessage::FriendsListMessage(std::vector<FriendInformations> friendsList)
{
	this->friendsList = friendsList;

}

FriendsListMessage::FriendsListMessage()
{

}

ushort FriendsListMessage::getId()
{
	return id;
}

std::string FriendsListMessage::getName()
{
	return "FriendsListMessage";
}

void FriendsListMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->friendsList.size());	int _loc2_ = 0;
         while(_loc2_ < this->friendsList.size())         {            writer.writeShort((this->friendsList[_loc2_]).getId());            (this->friendsList[_loc2_]).serialize(writer);            _loc2_++;         }      
}

void FriendsListMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc4_ = 0;
	FriendInformations _loc5_;
	int _loc2_ = reader.readUnsignedShort();	int _loc3_ = 0;
         while(_loc3_ < _loc2_)         {            _loc4_ = reader.readUnsignedShort();            _loc5_.deserialize(reader);            this->friendsList.push_back(_loc5_);            _loc3_++;         }      }
}