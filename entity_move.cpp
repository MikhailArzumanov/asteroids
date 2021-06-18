#include "Entity.hpp"

void Entity::move() {
	float K = 1 / 60.f;
	p.x += K * v.x; p.y += K * v.y;
}