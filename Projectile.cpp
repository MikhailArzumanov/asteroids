#include "Projectile.hpp"
#include "environment.hpp"
#include "Explosion.hpp"
#include <cmath>
#define PI 3.1415926f

float sgn(float x) {
	return x < 0 ? -1.f : 1.f;
}

Projectile::Projectile(point start, point target) {
	type = projectile_type;
	lifetime = -1;
	point dp = target - start;
	float angle = (dp.x <= 0) ? PI : 0;
	if (dp.x != 0)
		angle += atan(dp.y / dp.x);
	else angle += PI / 2.f * sgn(dp.y);
	const float speed = 100;
	v.x = cos(angle) * speed;
	v.y = sin(angle) * speed;
	tilt_alpha = 90.f + angle*180.f/PI;

	p = start;
	a = point{ 0,0 };
	sprite = &(sprites[prjctile]);
	
	r = 25.f;
}

void Projectile::draw() {
	sprite->setRotation(tilt_alpha);
	sprite->setPosition(p.x, p.y);
	window.draw(*sprite);
}
void Projectile::move() {
	float K = 1 / 60.f;
	p.x += K * v.x; p.y += K * v.y;
}


void Projectile::collide(Entity* collidable) {
	float radiuses = sqr(r + collidable->get_r()); 
	float dist = p.get_sqr_dist(collidable->get_p());
	if (radiuses < dist) return;
	switch (collidable->get_type()) {
	case asteroid_type:
		lifetime = 0;
		for(int i=0;i<10;i++)
			beings.push_back(new Explosion(p));
		break;
	}
}