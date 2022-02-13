#include <SFML/Graphics.hpp>
#include "window.hpp"
#include "point.hpp"
#include "spacecraft.hpp"

int main() {
	sf::Texture texture; texture.loadFromFile("textures/spacecraft.png");
	sf::Sprite sprite(texture);
	sprite.setPosition(200, 200);
	float angle = 0.f;
	window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Window");
	auto spacecraft = Spacecraft(&sprite);
	while (window->isOpen()) {
		spacecraft.draw();
		spacecraft.tick();
		window->display();
	}
}

