#include "Entity.hpp"
#include "environment.hpp"

bool Entity::is_dead() {
	if (lifetime == 0) return true;
	if (lifetime > 0)
		lifetime--;
	if (p.x < -3*r || SCREEN_WIDTH  + 3*r < p.x)  return true;
	if (p.y < -3*r || SCREEN_HEIGHT + 3*r < p.y)  return true;
	return false;
}
