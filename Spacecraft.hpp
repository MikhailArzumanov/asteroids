#pragma once
#include "Entity.hpp"
#include "directions.hpp"


class Spacecraft : public Entity {
	bool is_thrust[directions_amount];
public:
	Spacecraft();
	Spacecraft(point p_start);
	
	void thrust(int direction);

	void draw();
	void move();
	void collide(Entity* collidable);

};

