#pragma once
#include "Entity.hpp"

class Explosion : public Entity{
public:
	Explosion(point p_);

	void draw();
	void move();
	void collide(Entity* collidable);
};

