#include "Entity.hpp"
#include "environment.hpp"

void Entity::draw() {
	sprite->setRotation(tilt_alpha);
	sprite->setPosition(p.x - r, p.y - r);
	window.draw(*sprite);
}