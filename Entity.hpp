#pragma once
#include "libs.hpp"
#include "point.hpp"

enum EntityTypes {
	spacecraft_type,
	projectile_type,
	asteroid_type,
	entity_types_amount
};

class Entity{
protected:
	EntityTypes type = entity_types_amount;
	float lifetime = -1;
	point p ={0,0}; point v = { 0,0 }; point a = { 0,0 };
	float tilt_alpha=0;
	float r=0;
	sf::Sprite* sprite=nullptr;
public:
	Entity();

	EntityTypes get_type();
	bool is_dead();
	float get_r();
	point get_p();

	virtual void draw()	  = 0;
	virtual void move()   = 0;
	virtual void collide(Entity* collidable) = 0;
};

