#pragma once
class Player
{
public:
	Player();
	Player(int KL, int Km, int AL, int M, int Ma);
	~Player();


	int KingdomLevel;
	int KingdomMorale;
	int ALimit;
	int Money;
	int Materia;
};

