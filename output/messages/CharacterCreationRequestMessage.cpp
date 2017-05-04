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
	         writer.writeUTF(this->name);         writer.writeByte(this->breed);         writer.writeBool(this->sex);	int _loc2_ = 0;
         while(_loc2_ < 5)         {            writer.writeInt(this->colors[_loc2_]);            _loc2_++;         }         writer.writeVarShort(this->cosmeticId);      
}

void CharacterCreationRequestMessage::deserialize(BinaryReader& reader)
{
	      {         this->name = reader.readUTF();         this->breed = reader.readByte();         this->sex = reader.readBool();	int _loc2_ = 0;
         this->cosmeticId = reader.readVarUhShort();      }
}