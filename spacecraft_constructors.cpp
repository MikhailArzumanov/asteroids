#include "spacecraft.hpp"
#include "sprites.hpp"
#include "window.hpp"
Spacecraft::Spacecraft() {
	angle = 0;
	p = { WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f };
	r = 25.f;
	s_type = ShapeType::circle;
	b_type = BeingType::spacecraft;
	sprite = &sprites[spacecraft_sprite];
	v = { 0,0 };
}