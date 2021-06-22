#pragma once
#include "Entity.hpp"

class Projectile : public Entity{
	
public:
	Projectile(point start, point target, float _proj_velocity);

	void collide(Entity* collidable);
};

