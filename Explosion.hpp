#pragma once
#include "Entity.hpp"

class Explosion : public Entity{
public:
	Explosion(point p_);

	void collide(Entity* collidable);
};

