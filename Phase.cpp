#include "Phase.h"

Phase::Phase(sf::RenderWindow* window, std::stack<Phase*>* phases)
{
	this->window = window;
	this->phases = phases;
	this->quit = false;
}

Phase::~Phase()
{

}

const bool Phase::getQuit() const
{
	return this->quit;
}

