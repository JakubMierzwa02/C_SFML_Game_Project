#include "GamePhase.h"

GamePhase::GamePhase(sf::RenderWindow* window, std::stack<Phase*>* phases)
	: Phase(window, phases)
{
	// REMOVE LATER !!!
	std::cout << "Starting GamePhase \n";
}

GamePhase::~GamePhase()
{

}

void GamePhase::endPhase()
{
	std::cout << "Ending GamePhase \n";
}

void GamePhase::updateInput(const float& dt)
{
	// Update player input
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		this->player.move(dt, -1.f, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->player.move(dt, 1.f, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		this->player.move(dt, 0, -1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->player.move(dt, 0, 1.f);
}

void GamePhase::update(const float& dt)
{
	this->updateInput(dt);
}

void GamePhase::render(sf::RenderTarget* target)
{
	if (!target)
	{
		target = this->window;
	}

	this->player.render(target);
}
