#include "Button.h"

Button::Button(float pos_x, float pos_y, float width, float height, 
	sf::Font* font, std::string text, sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor)
{
	this->shape.setSize(sf::Vector2f(width, height));
	this->shape.setPosition(pos_x, pos_y);

	this->font = font;
	this->text.setFont(*this->font);
	this->text.setString(text);
	this->text.setCharacterSize(16);
	this->text.setPosition(pos_x + width / 2.f - this->text.getGlobalBounds().width / 2.f,
		pos_y + height / 2.f - this->text.getGlobalBounds().height / 2.f);

	this->idleColor = idleColor;
	this->hoverColor = hoverColor;
	this->activeColor = activeColor;

	this->shape.setFillColor(this->idleColor);
}

Button::~Button()
{

}

void Button::update()
{

}

void Button::render(sf::RenderTarget* target)
{
	target->draw(this->text);
	target->draw(this->shape);
}
