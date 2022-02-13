#pragma once
#include "being.hpp"

class Spacecraft : public Being {
public:
	Spacecraft(sf::Sprite* sprite_);
	void collide(Being* collidable);
	bool is_living();
	void tick();
	void draw();
};