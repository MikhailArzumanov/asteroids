#include "Explosion.hpp"
#include "environment.hpp"

Explosion::Explosion(point p_) {
	type = explosion_type;
	tilt_alpha = static_cast<float>(rand() % 360);
	sprite = &(sprites[explosion]);
	lifetime = 60;
	p = p_; r = 50.f;
	v = point{ 0,0 };

}

void Explosion::collide(Entity* collidable) {
	if (stats.is_reinforced())
		return;

	float radiuses = sqr(r + collidable->get_r());
	float dist = p.get_sqr_dist(collidable->get_p());
	if (radiuses < dist) return;

	switch (collidable->get_type()) {
	case spacecraft_type:
		lifetime = 0;
	}
}