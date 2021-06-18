#pragma once
#include "Entity.hpp"

class Projectile : public Entity{
	
public:
	Projectile(point start, point target);

	void draw();
	void move();
	void collide(Entity* collidable);
};

