#include "environment.hpp"

Spacecraft::Spacecraft(point p_start) {
	type = spacecraft_type;
	lifetime = -1;
	p = p_start;
	v = point{ 0,0 };
	r = 25.f; tilt_alpha = 0;
	sprite = &(sprites[spccraft]);
	stats = PlayerStats();
}

point Spacecraft::get_point() {return p;}

