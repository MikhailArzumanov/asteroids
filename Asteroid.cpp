#include "Asteroid.hpp"
#include "environment.hpp"
#include <iostream>

float gen_rand_coord(const int DIM, int r) {
	int res = rand() % (DIM + 4*r) - 2*r;
	if (0 <= res  && res <= SCREEN_WIDTH) {
		if (res < DIM/2)
			 res = -2*r;
		else res = DIM+2*r;
	}
	return static_cast<float>(res);
}

Asteroid::Asteroid(float speed_coef) {
	type = asteroid_type;
	lifetime = -1; r = 50;
	sprite = &(sprites[astroid]);
	float start_X = rand() % (SCREEN_WIDTH + static_cast<int>(4*r)) - static_cast<int>(2*r);
	float start_Y = gen_rand_coord(SCREEN_HEIGHT, static_cast<int>(r));
	p = { start_X, start_Y };
	point spacecraft_point = spacecraft->get_point();
	v = (spacecraft_point - p)*speed_coef;

}

