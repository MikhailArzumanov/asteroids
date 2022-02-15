#include <SFML/Graphics.hpp>
#include "the_spacecraft.hpp"
#include "initialization.hpp"
#include "window.hpp"
#include "event_handling.hpp"



int main() {

	initialize_environment();

	while (window->isOpen()) {
		handle_events();

		the_spacecraft.draw();
		the_spacecraft.tick();

		window->display();
	}
}

