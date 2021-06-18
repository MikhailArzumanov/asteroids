#include "environment.hpp"
#include "environment_functions.hpp"

void interact() {
	if (is_key_pressed[sf::Keyboard::Left] || is_key_pressed[sf::Keyboard::A])
		spacecraft->thrust(Directions::left);
	else if (is_key_pressed[sf::Keyboard::Right] || is_key_pressed[sf::Keyboard::D])
		spacecraft->thrust(Directions::right);
	if (is_key_pressed[sf::Keyboard::Up] || is_key_pressed[sf::Keyboard::W])
		spacecraft->thrust(Directions::up);
	else if (is_key_pressed[sf::Keyboard::Down] || is_key_pressed[sf::Keyboard::S])
		spacecraft->thrust(Directions::down);

}