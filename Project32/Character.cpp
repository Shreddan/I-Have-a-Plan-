#include "Character.h"

Character::Character()
{
	this->Name = "";
	this->Level = 1;
	this->Exp = 0;
	this->BaseDamage = 1;
	this->BaseDefence = 1;
	this->Class = 0;

	
}

Character::Character(std::string name, int lvl)
{
	this->Name = name;
	this->Level = lvl;
}

Character::~Character()
{
}

void Character::GenerateName()
{

}

void Character::Levelup()
{
}
