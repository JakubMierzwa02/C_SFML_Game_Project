#pragma once

#include "Player.h"

class Phase
{
protected:
	// Window
	sf::RenderWindow* window;

	// Phases
	std::stack<Phase*>* phases;

	bool quit;

	// Mouse positions
	sf::Vector2i mousePosScreen;
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;

	// Resources
	std::map<std::string, sf::Texture> textures;

public:
	// Constructors / Destructors
	Phase(sf::RenderWindow*, std::stack<Phase*>*);
	virtual ~Phase();

	// Functions
	const bool getQuit() const;
	void endPhase();

	void updateMousePositions();
	virtual void update(const float&) = 0;
	virtual void render(sf::RenderTarget* = nullptr) = 0;

};

