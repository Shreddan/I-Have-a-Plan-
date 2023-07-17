#include "Character.h"

Character::Character()
{
	this->Name = "";
	this->ClassLevel = 1;
	this->Exp = 0;
	this->BaseDamage = 1;
	this->BaseDefence = 1;
	this->Class = 0;
	this->Gender = GenderAssign();
	
}

Character::Character(std::string name, int lvl, int Class)
{
	this->Name = name;
	this->ClassLevel = lvl;
	this->Class = Class;
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

int Character::GenderAssign()
{
	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<int> uid{ 0, 2 };

	return uid(mt);
}
