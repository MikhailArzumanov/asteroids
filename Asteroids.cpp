#include "init_sprites.hpp"
#include "environment.hpp"

const point spacecraft_start = { 615.f,335.f };
Spacecraft* spacecraft = new Spacecraft(spacecraft_start);


void draw();
void event_handler();
void cycle();

int main(){
	init_sprites();
	while (window.isOpen())
		cycle();
}

void draw() {
	window.clear();

	spacecraft->draw();
	window.display();
}

void event_handler() {
	sf::Event e;
	while (window.pollEvent(e)) {
		switch (e.type) {
		case sf::Event::Closed:
			window.close();
			break;
		case sf::Event::KeyPressed:
			is_key_pressed[e.key.code] = true;
			break;
		case sf::Event::KeyReleased:
			is_key_pressed[e.key.code] = false;
			break;
		}
	}
}

void interact() {
	if (is_key_pressed[sf::Keyboard::Left])
		spacecraft->thrust(Directions::left);
	else if (is_key_pressed[sf::Keyboard::Right])
		spacecraft->thrust(Directions::right);
	if (is_key_pressed[sf::Keyboard::Up])
		spacecraft->thrust(Directions::up);
	else if (is_key_pressed[sf::Keyboard::Down])
		spacecraft->thrust(Directions::down);

}

void tick() {
	the_clock.restart();
	event_handler();
	interact();
	draw();
	spacecraft->move();
}

void cycle() {
	float time = the_clock.getElapsedTime().asSeconds();
	if (time > 1 / 60.f)
		tick();
}
