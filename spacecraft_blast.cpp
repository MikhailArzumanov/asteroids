#include "Spacecraft.hpp"
#include "Projectile.hpp"
#include "environment.hpp"

void Spacecraft::blast(point blast_target) {
	beings.push_back(new Projectile(p, blast_target));
}
