#include "FriendSpouseFollowWithCompassRequestMessage.hpp"

FriendSpouseFollowWithCompassRequestMessage::FriendSpouseFollowWithCompassRequestMessage(bool enable)
{
	this->enable = enable;

}

FriendSpouseFollowWithCompassRequestMessage::FriendSpouseFollowWithCompassRequestMessage()
{

}

ushort FriendSpouseFollowWithCompassRequestMessage::getId()
{
	return id;
}

std::string FriendSpouseFollowWithCompassRequestMessage::getName()
{
	return "FriendSpouseFollowWithCompassRequestMessage";
}

void FriendSpouseFollowWithCompassRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeBool(this->enable);      
}

void FriendSpouseFollowWithCompassRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->enable = reader.readBool();      }
}