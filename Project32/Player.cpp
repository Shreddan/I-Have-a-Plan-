#include "Player.h"

Player::Player()
{
	this->KingdomLevel = 1;
	this->KingdomMorale = 0;
	this->ALimit = 4;
	this->Money = 50;
	this->Materia = 5;
}

Player::Player(int Kl, int Km, int Al, int m, int Ma)
{
	this->KingdomLevel = Kl;
	this->KingdomMorale = Km;
	this->ALimit = Al;
	this->Money = m;
	this->Materia = Ma;
}

Player::~Player()
{
}
