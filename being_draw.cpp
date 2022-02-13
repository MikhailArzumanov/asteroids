#include "being.hpp"
#include "window.hpp"
const float PI = 3.1415926f;
const float rad_to_degree = 180.f/PI;
void Being::draw() {
	point src = {r, r};
	point shifted = src.shift_at_angle(angle);
	point required_position = p - shifted;
	sprite->setPosition(required_position.x, required_position.y);
	sprite->setRotation(angle*rad_to_degree);
	window->draw(*sprite);
}