#include "environment.hpp"

void Spacecraft::collide(Entity* collidable) {
	float radiuses = sqr(r + collidable->get_r());
	float dist = p.get_sqr_dist(collidable->get_p());
	if (radiuses < dist) return;
	switch (collidable->get_type()) {
	case asteroid_type:
		stats.hit(10.f);
		break;
	case explosion_type:
		if (!stats.is_reinforced())
			stats.hit(0.25f);
	}
}