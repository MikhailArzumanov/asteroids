#include "initialization.hpp"
#include "window.hpp"
void initialize_window() {
	WINDOW_HEIGHT = 720; WINDOW_WIDTH = 1280;
	std::string window_name = "Asteroids";
	window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), window_name);
}