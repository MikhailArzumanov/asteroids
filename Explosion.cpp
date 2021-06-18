#include "Explosion.hpp"
#include "environment.hpp"

Explosion::Explosion(point p_) {
	type = explosion_type;
	tilt_alpha = static_cast<float>(rand() % 360);
	sprite = &(sprites[explosion]);
	lifetime = 60;
	p = p_; r = 0.f;
	v = point{ 0,0 };

}

void Explosion::collide(Entity* collidable) {
	//TODO
}