#include "Movement.h"

Movement::Movement(float maxVelocity)
	: maxVelocity(maxVelocity)
{

}

Movement::~Movement()
{

}

const sf::Vector2f& Movement::getVelocity() const
{
	return this->velocity;
}

void Movement::update(const float x, const float y)
{
	this->velocity.x = this->maxVelocity * x;
	this->velocity.y = this->maxVelocity * y;
}
