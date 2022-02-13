#include "spacecraft.hpp"
#include "window.hpp"

Spacecraft::Spacecraft(sf::Sprite* sprite_) {
	angle = 0;
	p = { WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f };
	r = 25.f;
	s_type = ShapeType::circle;
	b_type = BeingType::spacecraft;
	sprite = sprite_;
	v = { 0,0 };
}