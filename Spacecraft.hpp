#pragma once
#include "Entity.hpp"
#include "directions.hpp"
#include "PlayerStats.hpp"

class Spacecraft : public Entity {
	bool is_thrust[directions_amount] = {false};
	bool was_dead = false;
public:
	Spacecraft(point p_start);


	void thrust(int direction);
	void blast(point blast_target);

	void draw();
	void move();
	void collide(Entity* collidable);
	bool is_dead();

	point get_point();

};

