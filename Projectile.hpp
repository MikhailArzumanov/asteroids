#pragma once
#include "Entity.hpp"

class Projectile : public Entity{
	
public:
	Projectile(point start, point target);

	void collide(Entity* collidable);
};

