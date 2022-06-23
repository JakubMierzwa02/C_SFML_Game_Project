#include "Entity.h"

void Entity::initVariables()
{
	this->texture = nullptr;
	this->sprite = nullptr;

	this->movement = nullptr;
}

Entity::Entity()
{
	this->initVariables();
}

Entity::~Entity()
{

}

void Entity::createSprite(sf::Texture* texture, sf::Vector2f scale)
{
	this->texture = texture;
	this->sprite = new sf::Sprite(*this->texture);
	this->sprite->setScale(scale);
}

void Entity::createMovement(const float maxVelocity)
{
	this->movement = new Movement(maxVelocity);
}

void Entity::setPosition(const float x, const float y)
{
	if (this->sprite)
	{
		this->sprite->setPosition(x, y);
	}
}

void Entity::move(const float& dt, const float dirX, const float dirY)
{
	if (this->sprite && this->movement)
	{
		this->movement->update(dirX, dirY);
		this->sprite->move(this->movement->getVelocity() * dt);
	}
}

void Entity::update(const float& dt)
{

}

void Entity::render(sf::RenderTarget* target)
{
	if (this->sprite)
	{
		target->draw(*this->sprite);
	}
}
