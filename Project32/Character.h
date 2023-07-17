#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>

class Character
{
public:
	Character();
	Character(std::string name, int lvl, int Class);
	~Character();

	enum G
	{
		Male,
		Female,
		Other
	};

	void GenerateName();
	void Levelup();

	int GenderAssign();


	std::string Name;
	int ClassLevel;
	int Exp;
	int BaseDamage;
	int BaseDefence;
	int Class;
	int Gender;


};

