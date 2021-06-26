#pragma once
#include "Entity.hpp"

class BorderAsteroid : public Entity {
public:
	enum Directions {
		right, up, 
		left, down,
		directions_amount
	};

public:
	BorderAsteroid(Directions direction);

	void collide(Entity* collidable);

};