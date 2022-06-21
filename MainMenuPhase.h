#pragma once

#include "GamePhase.h"

class MainMenuPhase : public Phase
{
private:

public:
	// Constructors / Destructors
	MainMenuPhase(sf::RenderWindow*, std::stack<Phase*>*);
	virtual ~MainMenuPhase();

	void endPhase();

	// Functions
	void update(const float&);
	void render(sf::RenderTarget* = nullptr);
};