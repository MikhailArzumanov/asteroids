#include "event_handling.hpp"
#include "window.hpp"
void handle_event(sf::Event event) {
	switch (event.type) {
	case sf::Event::Closed:
		window->close();
		break;
	case sf::Event::MouseButtonPressed:
		//...
		break;
	}
}