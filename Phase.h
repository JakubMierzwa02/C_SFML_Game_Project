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
private:

protected:
	sf::RenderWindow* window;

	bool quit;

public:
	Phase(sf::RenderWindow* window);
	virtual ~Phase();

	const bool getQuit() const;

	virtual void update() = 0;
	virtual void render() = 0;

};

