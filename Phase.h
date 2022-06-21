#pragma once

#include "Entity.h"

class Phase
{
protected:
	// Window
	sf::RenderWindow* window;

	// Phases
	std::stack<Phase*>* phases;

	bool quit;

public:
	// Constructors / Destructors
	Phase(sf::RenderWindow*, std::stack<Phase*>*);
	virtual ~Phase();

	// Functions
	const bool getQuit() const;
	void checkQuit();
	virtual void endPhase() = 0;

	virtual void update(const float&) = 0;
	virtual void render(sf::RenderTarget* = nullptr) = 0;

};

