#include "init_sprites.hpp"
#include "environment.hpp"
#include "environment_functions.hpp"
#include "Asteroid.hpp"
#include <vector>

const point spacecraft_start = {615.f, 335.f};
Spacecraft* spacecraft = new Spacecraft(spacecraft_start);
PlayerStats stats = PlayerStats();
AsteroidGenerator generator = AsteroidGenerator();
bool is_gameover;

void tick();
void cycle();

void set_seed() {
	srand(static_cast<unsigned int>(time(0)));
}

int main(){
	is_gameover = false;
	beings.push_back(spacecraft);
	init_sprites();
	set_seed();
	while(window.isOpen())
		cycle();
}

void cycle() {
	event_handler();
	float time = the_clock.getElapsedTime().asSeconds();
	if (time > 1/60.f)
		tick();
}

void tick() {
	stats.tick();

	the_clock.restart();
	
	generator.create_asteroid();
	generator.create_borders();

	interact();
	live();
	collide();
	draw();
	move();
}

