#include "MainMenuPhase.h"

MainMenuPhase::MainMenuPhase(sf::RenderWindow* window, std::stack<Phase*>* phases)
	: Phase(window, phases)
{
	// REMOVE LATER !!!
	std::cout << "Starting MainMenuPhase \n";
	std::cout << "Press G to start GamePhase \n";
}

MainMenuPhase::~MainMenuPhase()
{

}

void MainMenuPhase::update(const float& dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		this->phases->push(new GamePhase(this->window, this->phases));
}

void MainMenuPhase::render(sf::RenderTarget* target)
{

}
