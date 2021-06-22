#include "environment.hpp"
#include "environment_functions.hpp"


void event_handler() {
	sf::Event e;
	while (window.pollEvent(e)) {
		switch (e.type) {
		case sf::Event::Closed:
			window.close();
			break;
		case sf::Event::KeyPressed:
			key_pressed(e.key.code);
			is_key_pressed[e.key.code] = true;
			break;
		case sf::Event::KeyReleased:
			is_key_pressed[e.key.code] = false;
			break;
		case sf::Event::MouseButtonPressed:
			if (stats.is_able_to_blast()) {
				float x = e.mouseButton.x, y = e.mouseButton.y;
				spacecraft->blast(point{ x, y });
				stats.blast();
			}
			break;
		}
	}
}