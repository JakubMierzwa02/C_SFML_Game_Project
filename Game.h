#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"

#include <string>

class Game
{
private:
	// Window
	sf::VideoMode videoMode;
	std::string name;
	sf::RenderWindow* window;

	// Initializer functions
	void initVariables();
	void initWindow();

public:
	// Constructors / Destructors
	Game();
	virtual ~Game();

	// Update functions
	void updateEvents();
	void update();

	// Render
	void render();

	void run();
};

