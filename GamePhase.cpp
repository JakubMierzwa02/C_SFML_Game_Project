#include "GamePhase.h"

GamePhase::GamePhase(sf::RenderWindow* window)
	: Phase(window)
{

}

GamePhase::~GamePhase()
{

}

void GamePhase::endPhase()
{
	std::cout << "Ending GamePhase \n";
}

void GamePhase::update(const float& dt)
{

}

void GamePhase::render(sf::RenderTarget* target)
{
	if (!target)
	{
		target = this->window;
	}
}
