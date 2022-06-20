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

void Game::initPhases()
{

}

// Constructors / Destructors
Game::Game()
{
	this->initVariables();
	this->initWindow();
	this->initPhases();
}

Game::~Game()
{
	delete this->window;
}

void Game::endApp()
{
	std::cout << "Ending application \n";
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

	// Update states
	if (!this->phases.empty())
	{
		this->phases.top()->update();

		if (this->phases.top()->getQuit())
		{
			delete this->phases.top();
			this->phases.pop();
		}
	}
	// App end
	else
	{
		this->endApp();
		this->window->close();
	}
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
