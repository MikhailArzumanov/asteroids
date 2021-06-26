#include "AsteroidGenerator.hpp"
#include "BorderAsteroid.hpp"
#include "environment.hpp"

void AsteroidGenerator::create_borders() {
	if (++border_counter > 30) {
		border_counter = 0;
		for (int direction = 0; direction < BorderAsteroid::directions_amount; direction++)
			beings.push_back(
				new BorderAsteroid(
					static_cast<BorderAsteroid::Directions>(direction)));
	}
}