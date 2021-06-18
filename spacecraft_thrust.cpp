#include "Spacecraft.hpp"


void Spacecraft::thrust(int direction) {
	float thrust_power = 200.f;
	float kt = 1/60.f;
	is_thrust[direction] = true;
	if (direction % 2 == 0)
		v.x += kt*((direction / 2 == 0) ? thrust_power : -thrust_power);
	else v.y += kt*((direction / 2 == 0) ? thrust_power : -thrust_power);
}