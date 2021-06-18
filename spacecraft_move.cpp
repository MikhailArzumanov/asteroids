#include "Spacecraft.hpp"

void Spacecraft::move() {
	float K = 1 / 60.f;
	float kF = -1 / 20.f;

	p.x += K * v.x; p.y += K * v.y;
	v.x += K * a.x; v.y += K * a.y;
	v.x += kF * v.x; v.y += kF * v.y;
	a.x = 0; a.y = 0;

	for (int direction = 0; direction < directions_amount; direction++)
		is_thrust[direction] = false;
}