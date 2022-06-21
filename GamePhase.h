#pragma once

#include "Phase.h"

class GamePhase : public Phase
{
private:
	Entity player;

public:
	GamePhase(sf::RenderWindow*, std::stack<Phase*>*);
	virtual ~GamePhase();

	// Functions
	void updateInput(const float&);
	void update(const float&);
	void render(sf::RenderTarget* = nullptr);
};