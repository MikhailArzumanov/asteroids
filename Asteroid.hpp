#pragma once
#include "Entity.hpp"

class Asteroid : public Entity{

public:
	Asteroid();
	
	void draw();
	void move();
	void collide(Entity* collidable);
};

