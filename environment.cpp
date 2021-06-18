#include "environment.hpp"

float sqr(float x) {
	return x * x;
}

const int SCREEN_WIDTH = 1280, SCREEN_HEIGHT = 720;

sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "test");
sf::Clock the_clock;

bool is_key_pressed[sf::Keyboard::KeyCount];


std::vector<Entity*> beings;