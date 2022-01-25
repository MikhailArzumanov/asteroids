#include <SFML/Graphics.hpp>
#include "window.hpp"

int main() {
	sf::Texture texture; texture.loadFromFile("textures/spacecraft.png");
	sf::Sprite sprite(texture);
	float angle = 0.f;
	window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Window");
	while (window->isOpen()) {
		sprite.setRotation(angle);
		window->draw(sprite);
		angle += 0.01f;
		window->display();
	}
}

