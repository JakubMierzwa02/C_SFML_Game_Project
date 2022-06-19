#include "Game.h"

// Initializer functions
void Game::initVariables()
{

}

void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1280, 720), "SFML Project", sf::Style::Default);
}

// Constructors / Destructors
Game::Game()
{
	this->initVariables();
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

// Update functions
void Game::updateEvents()
{

}

void Game::update()
{

}

// Render
void Game::render()
{

}

void Game::run()
{
	// Game loop
	while (this->window->isOpen())
	{
		this->update();
		this->render();
	}
}
