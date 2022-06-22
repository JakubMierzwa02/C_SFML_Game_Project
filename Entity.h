#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <map>

class Entity
{
private:
	sf::RectangleShape shape;
	float movementSpeed;

public:
	// Constructors / Destructors
	Entity();
	virtual ~Entity();

	// Functions
	void move(const float&, const float, const float);

	virtual void update(const float&);
	virtual void render(sf::RenderTarget*);

};