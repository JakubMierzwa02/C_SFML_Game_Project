#pragma once

#include "Entity.h"

class Player : public Entity
{
private:

	// Initializer functions
	void initVariables();

public:
	Player(const float, const float, sf::Texture*);
	virtual ~Player();
};