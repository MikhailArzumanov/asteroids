#include <SFML/Graphics.hpp>
#include "the_spacecraft.hpp"
#include "initialization.hpp"
#include "window.hpp"

int main() {
	initialize_environment();
	while (window->isOpen()) {
		the_spacecraft.draw();
		the_spacecraft.tick();
		window->display();
	}
}

