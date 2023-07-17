#include "Engine.h"

Engine::Engine()
{
	this->tp1 = std::chrono::system_clock::now();
	this->tp2 = std::chrono::system_clock::now();
	this->fTime = 0.f;
	this->lElapsed = 0.f;
	
}

Engine::~Engine()
{
}

void Engine::Update()
{
	Running = true;
	while (Running)
	{
		AccumulateTime();
		 
	}
}

void Engine::AccumulateTime()
{
	this->tp2 = std::chrono::system_clock::now();
	std::chrono::duration<float> elapsedTime = this->tp2 - this->tp1;
	this->tp1 = this->tp2;

	this->fTime = elapsedTime.count();
	lElapsed = fTime;
}

int Engine::Diceroll()
{
	std::random_device rd;
	std::seed_seq sds{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937_64 mt{ sds };

	std::uniform_int_distribution<int> uid{ 0, 20 };

	return uid(mt);
}
