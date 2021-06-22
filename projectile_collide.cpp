#include "Projectile.hpp"
#include "Explosion.hpp"
#include "environment.hpp"

void Projectile::collide(Entity* collidable) {
	float radiuses = sqr(r + collidable->get_r());
	float dist = p.get_sqr_dist(collidable->get_p());
	if (radiuses < dist) return;
	switch (collidable->get_type()) {
	case asteroid_type:
		lifetime = 0;
		stats.asteroid_destoyed();
		for (int i = 0; i < 10; i++)
			beings.push_back(new Explosion(p));
		break;
	}
}