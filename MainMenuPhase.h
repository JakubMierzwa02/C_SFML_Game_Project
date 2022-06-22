#pragma once

#include "GamePhase.h"
#include "Button.h"

class MainMenuPhase : public Phase
{
private:
	sf::Font font;

	std::map<std::string, Button*> buttons;

	// Initializer functions
	void initFonts();
	void initButtons();

public:
	// Constructors / Destructors
	MainMenuPhase(sf::RenderWindow*, std::stack<Phase*>*);
	virtual ~MainMenuPhase();

	// Functions
	void updateButtons();
	void update(const float&);
	void renderButtons(sf::RenderTarget*);
	void render(sf::RenderTarget* = nullptr);
};