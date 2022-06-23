#include "Player.h"

void Player::initVariables()
{
	
}

Player::Player(const float x, const float y, sf::Texture* texture, sf::Vector2f scale)
{
	this->initVariables();

	this->createSprite(texture, scale);
	this->createMovement(300.f);
	this->setPosition(x, y);
}

Player::~Player()
{

}
