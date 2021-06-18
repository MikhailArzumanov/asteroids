#include "Spacecraft.hpp"
#include "environment.hpp"

void Spacecraft::draw() {
	Entity::draw();
	for (int i = 0; i < directions_amount; i++)
		if (is_thrust[i]) {
			sf::Sprite& thrust = sprites[thrust_right + i];
			thrust.setPosition(p.x - r, p.y - r);
			window.draw(thrust);
		}
}