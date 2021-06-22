#include "AsteroidGenerator.hpp"
#include "environment.hpp"
#include "Asteroid.hpp"

float get_difficulty(float elapsed_time) {
	return 0.25f + sqrt(elapsed_time);
}

int get_ticks(float elapsed_time) {
	return 30;
}

void AsteroidGenerator::create_asteroid() {
	int ticks_needed = get_ticks(elapsed_time);
	if (++counter > ticks_needed){
		float difficulty = get_difficulty(elapsed_time);
		beings.push_back(new Asteroid(difficulty));
		elapsed_time += 0.01f;
		counter = 0;
	}
}