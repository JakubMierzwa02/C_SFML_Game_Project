#pragma once

#include "Phase.h"

class Game
{
private:
	// Window
	sf::VideoMode videoMode;
	std::string name;
	sf::RenderWindow* window;

	// Delta time
	sf::Clock clock;
	float dt;

	// States
	std::stack<Phase*> phases;

	// Initializer functions
	void initVariables();
	void initWindow();
	void initPhases();

public:
	// Constructors / Destructors
	Game();
	virtual ~Game();

	void endApp();

	// Update functions
	void updateEvents();
	void updateDt();
	void update();

	// Render
	void render();

	void run();
};

