#include "Explosion.hpp"
#include "environment.hpp"

Explosion::Explosion(point p_) {
	tilt_alpha = static_cast<float>(rand() % 360);
	sprite = &(sprites[explosion]);
	lifetime = 60;
	p = p_; r = 0.f;
	v = point{ 0,0 };
	a = point{ 0,0 };

}

void Explosion::draw() {
	sprite->setRotation(tilt_alpha);
	sprite->setPosition(p.x, p.y);
	window.draw(*sprite);
}
void Explosion::move() {
	float K = 1 / 60.f;
	p.x += K * v.x; p.y += K * v.y;
}


void Explosion::collide(Entity* collidable) {
	//TODO
}