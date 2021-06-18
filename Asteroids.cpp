#include "init_sprites.hpp"
#include "environment.hpp"
#include "Asteroid.hpp"
#include <vector>

#define in :

const point spacecraft_start = { 615.f,335.f };
Spacecraft* spacecraft = new Spacecraft(spacecraft_start);
int counter;


void draw();
void event_handler();
void cycle();

int main(){
	counter = 0;
	init_sprites();
	srand(time(0));
	while (window.isOpen())
		cycle();
}

void draw() {
	window.clear();
	for (auto being in beings)
		being->draw();
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
		case sf::Event::MouseButtonPressed:
			float x = e.mouseButton.x, y = e.mouseButton.y;
			spacecraft->blast(point{x, y});
			break;
		}
	}
}

void interact() {
	if (is_key_pressed[sf::Keyboard::Left] || is_key_pressed[sf::Keyboard::A])
		spacecraft->thrust(Directions::left);
	else if (is_key_pressed[sf::Keyboard::Right] || is_key_pressed[sf::Keyboard::D])
		spacecraft->thrust(Directions::right);
	if (is_key_pressed[sf::Keyboard::Up] || is_key_pressed[sf::Keyboard::W])
		spacecraft->thrust(Directions::up);
	else if (is_key_pressed[sf::Keyboard::Down] || is_key_pressed[sf::Keyboard::S])
		spacecraft->thrust(Directions::down);

}

void collide() {
	for (auto being in beings)
	for (auto another_being in beings)
		being->collide(another_being);
}

void live() {
	for (auto itr = beings.begin(); (beings.size()>1) && (itr!=beings.end()); itr++) {
		auto& being = *itr;
		if (being->is_dead()) {
			delete being;
			beings.erase(itr);
		}
	}
}

void tick() {
	the_clock.restart();

	interact();
	live();
	collide();
	if (++counter > 30) {
		beings.push_back(new Asteroid());
		counter = 0;
	}
	draw();
	spacecraft->move();
	for (auto being in beings)
		being->move();
}

void cycle() {
	event_handler();
	float time = the_clock.getElapsedTime().asSeconds();
	if (time > 1 / 60.f)
		tick();
}
