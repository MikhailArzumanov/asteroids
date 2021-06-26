#include "BorderAsteroid.hpp"
#include "init_sprites.hpp"

const float BORDER_ASTEROID_SPEED = 1000.f;

point start_positions[BorderAsteroid::directions_amount] = {
	{-50.f,720.f},{1280.f,770.f}, ///LD, RD
	{1340.f,0.f},{0.f,-50.f}		///RU, LU
};
point start_velocities[BorderAsteroid::directions_amount] = {
	{BORDER_ASTEROID_SPEED,0.f},{0.f,-BORDER_ASTEROID_SPEED},
	{-BORDER_ASTEROID_SPEED,0.f},{0.f,BORDER_ASTEROID_SPEED}
};

BorderAsteroid::BorderAsteroid(Directions direction) {
	type = border_asteroid_type;
	lifetime = -1; r = 50;
	sprite = &(sprites[astroid]);
	p =  start_positions[direction];
	v = start_velocities[direction];
}