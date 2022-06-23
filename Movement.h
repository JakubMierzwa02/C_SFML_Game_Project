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

class Movement
{
private:
	float maxVelocity;
	sf::Vector2f velocity;

public:
	Movement(float);
	virtual ~Movement();

	// Accessors
	const sf::Vector2f& getVelocity() const;

	// Functions
	void update(const float x, const float y);
};