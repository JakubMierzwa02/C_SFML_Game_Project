#include "GamePhase.h"

void GamePhase::initTextures()
{
	if (!this->textures["PLAYER"].loadFromFile("Resources/Images/player.png"))
		throw "GAMEPHASE::Could not load player.png";
}

void GamePhase::initPlayer()
{
	this->player = new Player(0, 0, &this->textures["PLAYER"]);
}

GamePhase::GamePhase(sf::RenderWindow* window, std::stack<Phase*>* phases)
	: Phase(window, phases)
{
	this->initTextures();
	this->initPlayer();

	// REMOVE LATER !!!
	std::cout << "Starting GamePhase \n";
}

GamePhase::~GamePhase()
{

}

void GamePhase::updateInput(const float& dt)
{
	// Update player input
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		this->player->move(dt, -1.f, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->player->move(dt, 1.f, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		this->player->move(dt, 0, -1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->player->move(dt, 0, 1.f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		this->endPhase();
}

void GamePhase::update(const float& dt)
{
	this->updateInput(dt);
}

void GamePhase::render(sf::RenderTarget* target)
{
	if (!target)
	{
		target = this->window;
	}

	this->player->render(target);
}
