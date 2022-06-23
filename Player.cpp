#include "Player.h"

void Player::initVariables()
{
	
}

Player::Player(const float x, const float y, sf::Texture* texture)
{
	this->initVariables();

	this->createSprite(texture);
	this->setPosition(x, y);
}

Player::~Player()
{

}
