#include "Spacecraft.hpp"
#include "Projectile.hpp"
#include "environment.hpp"

void Spacecraft::blast(point blast_target) {
	if(!was_dead) {
		float velocity = stats.get_projs_velocity();
		beings.push_back(new Projectile(p, blast_target, velocity));
	}
}
