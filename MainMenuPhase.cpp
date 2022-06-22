#include "MainMenuPhase.h"

void MainMenuPhase::initFonts()
{
	if (!this->font.loadFromFile("Resources/Fonts/font.ttf"))
		throw "MAINMENUPHASE::Could not load font.ttf";
}

void MainMenuPhase::initButtons()
{
	this->buttons["NEW_GAME"] = new Button(300.f, 200.f, 200.f, 80.f, 
		&this->font, "New Game", sf::Color(100, 100, 100), sf::Color(70, 70, 70), sf::Color(20, 20, 20));

	this->buttons["EXIT"] = new Button(300.f, 400.f, 200.f, 80.f,
		&this->font, "Exit", sf::Color(100, 100, 100), sf::Color(70, 70, 70), sf::Color(20, 20, 20));
}

MainMenuPhase::MainMenuPhase(sf::RenderWindow* window, std::stack<Phase*>* phases)
	: Phase(window, phases)
{
	// REMOVE LATER !!!
	std::cout << "Starting MainMenuPhase \n";

	this->initFonts();
	this->initButtons();
}

MainMenuPhase::~MainMenuPhase()
{

}

void MainMenuPhase::updateButtons()
{
	// Update all the buttons
	for (auto& i : this->buttons)
	{
		i.second->update(this->mousePosView);
	}

	// New game
	if (this->buttons["NEW_GAME"]->isPressed())
	{
		this->phases->push(new GamePhase(this->window, this->phases));
	}

	// Exit
	if (this->buttons["EXIT"]->isPressed())
	{
		this->endPhase();
	}
}

void MainMenuPhase::update(const float& dt)
{
	this->updateMousePositions();
	this->updateButtons();
}

void MainMenuPhase::renderButtons(sf::RenderTarget* target)
{
	for (auto& i : this->buttons)
	{
		i.second->render(target);
	}
}

void MainMenuPhase::render(sf::RenderTarget* target)
{
	if (!target)
	{
		target = this->window;
	}

	this->renderButtons(target);
}
