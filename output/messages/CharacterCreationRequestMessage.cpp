#include "CharacterCreationRequestMessage.hpp"

CharacterCreationRequestMessage::CharacterCreationRequestMessage(std::string name, int breed, bool sex, ByteArray colors, int cosmeticId)
{
	this->name = name;
this->breed = breed;
this->sex = sex;
this->colors = colors;
this->cosmeticId = cosmeticId;

}

CharacterCreationRequestMessage::CharacterCreationRequestMessage()
{

}

ushort CharacterCreationRequestMessage::getId()
{
	return id;
}

std::string CharacterCreationRequestMessage::getName()
{
	return "CharacterCreationRequestMessage";
}

void CharacterCreationRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeUTF(this->name);
         while(_loc2_ < 5)
}

void CharacterCreationRequestMessage::deserialize(BinaryReader& reader)
{
	      {

}