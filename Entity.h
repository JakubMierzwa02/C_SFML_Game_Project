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
	sf::Texture* texture;
	sf::Sprite* sprite;

	float movementSpeed;

	// Initializer functions
	void initVariables();

public:
	// Constructors / Destructors
	Entity();
	virtual ~Entity();

	void createSprite(sf::Texture*, sf::Vector2f);

	// Functions
	void setPosition(const float x, const float y);
	void move(const float&, const float, const float);

	virtual void update(const float&);
	virtual void render(sf::RenderTarget*);

};