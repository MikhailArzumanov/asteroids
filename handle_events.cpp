#include "event_handling.hpp"
#include "window.hpp"
void handle_events() {
	sf::Event event;
	while (window->pollEvent(event))
		handle_event(event);
}