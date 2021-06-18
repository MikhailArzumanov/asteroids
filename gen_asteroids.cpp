#include "environment.hpp"
#include "environment_functions.hpp"
#include "Asteroid.hpp"

void gen_asteroids() {
	if (++counter > 30) {
		beings.push_back(new Asteroid());
		counter = 0;
	}
}