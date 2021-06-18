#include "Entity.hpp"

Entity::Entity() {
	p = point{ 0,0 };
	v = point{ 0,0 };
	a = point{ 0,0 };
}


bool Entity::is_dead() {
	if (lifetime == 0) return true;
	if (lifetime > 0)
		lifetime--;
	return false;
}

float Entity::get_r() {
	return r;
}

point Entity::get_p() {
	return p;
}

EntityTypes Entity::get_type() {
	return type;
}