#include "Asteroid.hpp"
#include "environment.hpp"

void Asteroid::collide(Entity* collidable) {
	float radiuses = sqr(r + collidable->get_r());
	float dist = p.get_sqr_dist(collidable->get_p());
	if (radiuses < dist) return;
	switch (collidable->get_type()) {
	case projectile_type:
		lifetime = 0;
		break;
	}
}