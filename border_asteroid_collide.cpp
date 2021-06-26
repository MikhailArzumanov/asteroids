#include "BorderAsteroid.hpp"
#include "environment.hpp"

void BorderAsteroid::collide(Entity* collidable) {
	float radiuses = sqr(r + collidable->get_r());
	float dist = p.get_sqr_dist(collidable->get_p());
	if (radiuses < dist) return;
	switch (collidable->get_type()) {
	case spacecraft_type:
		lifetime = 0;
	}
}