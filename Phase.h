#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"

#include <iostream>
#include <string>
#include <stack>

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

