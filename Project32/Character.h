#pragma once
#include <iostream>
#include <string>
#include <vector>

class Character
{
public:
	Character();
	Character(std::string name, int lvl);
	~Character();

	void GenerateName();
	void Levelup();


	std::string Name;
	int Level;
	int Exp;
	int BaseDamage;
	int BaseDefence;
	int Class;
	
};

