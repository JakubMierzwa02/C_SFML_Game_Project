#pragma once

#include "Movement.h"

class Entity
{
private:
	sf::Texture* texture;
	sf::Sprite* sprite;

	Movement* movement;

	// Initializer functions
	void initVariables();

public:
	// Constructors / Destructors
	Entity();
	virtual ~Entity();

	void createSprite(sf::Texture*, sf::Vector2f);
	void createMovement(const float);

	// Functions
	void setPosition(const float, const float);
	void move(const float&, const float, const float);

	virtual void update(const float&);
	virtual void render(sf::RenderTarget*);

};