#include "Engine.h"

Engine::Engine()
{
	this->tp1 = std::chrono::system_clock::now();
	this->tp2 = std::chrono::system_clock::now();

	
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
