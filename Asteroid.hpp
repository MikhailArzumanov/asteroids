#pragma once
#include "Entity.hpp"

class Asteroid : public Entity{

public:
	Asteroid(float time_coef);
	
	void collide(Entity* collidable);
};

