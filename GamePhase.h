#pragma once

#include "Phase.h"

class GamePhase : public Phase
{
private:
	

public:
	GamePhase(sf::RenderWindow*);
	virtual ~GamePhase();

	void endPhase();

	void update(const float&);
	void render(sf::RenderTarget* = nullptr);
};