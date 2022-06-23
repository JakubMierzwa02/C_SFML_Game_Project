#include "Entity.h"

void Entity::initVariables()
{
	this->texture = nullptr;
	this->sprite = nullptr;

	this->movementSpeed = 200.f;
}

Entity::Entity()
{
	this->initVariables();
}

Entity::~Entity()
{

}

void Entity::createSprite(sf::Texture* texture)
{
	this->texture = texture;
	this->sprite = new sf::Sprite(*this->texture);
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
	if (this->sprite)
	{
		this->sprite->move(dt * dirX * this->movementSpeed, dt * dirY * this->movementSpeed);
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
