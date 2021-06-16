#pragma once
#include "libs.hpp"
#include "point.hpp"

class Entity{
protected:
	point p ={0,0}; point v = { 0,0 }; point a = { 0,0 };
	float tilt_alpha=0;
	float r=0;
	sf::Sprite* sprite=nullptr;
public:
	Entity();

	virtual void draw() = 0;
	virtual void move() = 0;
	virtual void collide(Entity* collidable) = 0;
};

