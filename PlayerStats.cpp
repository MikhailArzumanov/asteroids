#include "PlayerStats.hpp"

const float HP_BAR_X = 1050.f, HP_BAR_Y = 440.f;


PlayerStats::PlayerStats(){
	hp_bar.setPosition(HP_BAR_X, HP_BAR_Y);
	sf::Font* font = new sf::Font;
	font->loadFromFile("fonts\\\\ar-destine.ttf");
	text.setFont(*font);
	text.setCharacterSize(24u);
	rectangle = sf::RectangleShape({ 40,40 });
}