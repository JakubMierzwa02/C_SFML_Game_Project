#include "Game.h"

// Initializer functions
void Game::initVariables()
{
	this->videoMode = sf::VideoMode(1280, 720);
	this->name = "SFML Project";
	this->dt = 0.f;
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

void Game::updateDt()
{
	// Updates the dt variable with the time it takes to update and render one frame
	this->dt = this->clock.restart().asSeconds();
}

void Game::update()
{
	this->updateEvents();

	// Update states
	if (!this->phases.empty())
	{
		this->phases.top()->update(this->dt);

		if (this->phases.top()->getQuit())
		{
			this->phases.top()->endPhase();
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
	if (!this->phases.empty())
	{
		this->phases.top()->render();
	}

	this->window->display();
}

void Game::run()
{
	// Game loop
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}
