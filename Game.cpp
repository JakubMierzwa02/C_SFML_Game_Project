#include "Game.h"

// Initializer functions
void Game::initVariables()
{
	this->videoMode = sf::VideoMode(1280, 720);
	this->name = "SFML Project";
}

void Game::initWindow()
{
	this->window = new sf::RenderWindow(this->videoMode, this->name, sf::Style::Default);
	this->window->setFramerateLimit(120);
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
	sf::Event ev;
	while (this->window->pollEvent(ev))
	{
		switch (ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
		}
	}
}

void Game::update()
{
	this->updateEvents();
}

// Render
void Game::render()
{
	this->window->clear();

	// Render stuff

	this->window->display();
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
