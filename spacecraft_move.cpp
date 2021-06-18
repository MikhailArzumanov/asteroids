#include "Spacecraft.hpp"

void Spacecraft::move() {
	Entity::move();

	float kF = -1 / 20.f;
	v.x += kF * v.x; v.y += kF * v.y;
	for (int direction = 0; direction < directions_amount; direction++)
		is_thrust[direction] = false;
}