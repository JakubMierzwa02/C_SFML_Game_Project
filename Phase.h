#pragma once

#include "Entity.h"

class Phase
{
protected:
	sf::RenderWindow* window;

	bool quit;

public:
	// Constructors / Destructors
	Phase(sf::RenderWindow*);
	virtual ~Phase();

	// Functions
	const bool getQuit() const;
	virtual void endPhase() = 0;

	virtual void update(const float&) = 0;
	virtual void render(sf::RenderTarget* = nullptr) = 0;

};

