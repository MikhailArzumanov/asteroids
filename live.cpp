#include "environment.hpp"
#include "environment_functions.hpp"

const sf::Color HALF_TRANSPARENT(255u, 255u, 255u, 127u);

void gameover() {
	sprites[spccraft].setColor(HALF_TRANSPARENT);
}

void live() {
	if (spacecraft->is_dead())
		gameover();
	for (auto itr = beings.begin(); (beings.size() > 1) && (itr < beings.end()); itr++) {
		auto& being = *itr;
		if (being->is_dead()) {
			delete being;
			beings.erase(itr);
		}
	}
}