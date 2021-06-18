#include "Spacecraft.hpp"


void Spacecraft::thrust(int direction) {
	float thrust_power = 200.f;
	is_thrust[direction] = true;
	if (direction % 2 == 0)
		a.x = (direction / 2 == 0) ? thrust_power : -thrust_power;
	else a.y = (direction / 2 == 0) ? thrust_power : -thrust_power;
}