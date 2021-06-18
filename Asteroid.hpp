#pragma once
#include "Entity.hpp"

class Asteroid : public Entity{

public:
	Asteroid();
	
	void collide(Entity* collidable);
};

