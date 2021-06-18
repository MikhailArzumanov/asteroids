#pragma once
#include "Entity.hpp"
#include "directions.hpp"


class Spacecraft : public Entity {
	bool is_thrust[directions_amount] = {false};
public:
	Spacecraft(point p_start);
	
	void thrust(int direction);
	void blast(point blast_target);

	void draw();
	void move();
	void collide(Entity* collidable);

	point get_point();

};

