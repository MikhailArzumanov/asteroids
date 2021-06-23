#include "Asteroid.hpp"
#include "environment.hpp"
#include <iostream>

int get_rand(int from, int to) {
	int res = (rand() % (to-from)) + from;
	return res;
}

float gen_rand_X(int r) {
	int res = get_rand(-2*r,SCREEN_WIDTH+2*r);
	return static_cast<float>(res);
}

float gen_rand_Y(int r) {
	int res = get_rand(-2*r,SCREEN_HEIGHT+2*r);
	if (0 <= res  && res <= SCREEN_HEIGHT) {
		if (res < SCREEN_HEIGHT /2)
			 res = -2*r;
		else res = SCREEN_HEIGHT +2*r;
	}
	return static_cast<float>(res);
}

Asteroid::Asteroid(float speed_coef) {
	type = asteroid_type;
	lifetime = -1; r = 50;
	sprite = &(sprites[astroid]);
	float start_X = gen_rand_X(static_cast<int>(r));
	float start_Y = gen_rand_Y(static_cast<int>(r));
	p = { start_X, start_Y };
	point spacecraft_point = spacecraft->get_point();
	v = (spacecraft_point - p)*speed_coef;

}

