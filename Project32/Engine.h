#pragma once
#include <chrono>
#include "Character.h"

class Engine
{
public:
	Engine();
	~Engine();



	void Update();
	void AccumulateTime();

	int Diceroll();

	float fTime;
	float lElapsed;

private:
	bool Running = false;

	std::chrono::time_point<std::chrono::system_clock> tp1;
	std::chrono::time_point<std::chrono::system_clock> tp2;
};

