#include "Asteroid.hpp"
#include "environment.hpp"

Asteroid::Asteroid() {
	type = asteroid_type;
	lifetime = -1;
	r = 50;
	sprite = &(sprites[astroid]);
	float start_X = rand() % (static_cast<int>(2 * r)) - r;
	if (start_X > 0)
		start_X += SCREEN_WIDTH; 
	float start_Y = rand() % (static_cast<int>(2 * r)) - r;
	if (start_Y > 0)
		start_Y += SCREEN_HEIGHT;
	p.x = start_X; p.y = start_Y;
	
	point spacecraft_point = spacecraft->get_point();
	float speed_coefficient = 4.f;
	v = (spacecraft_point - p) / speed_coefficient;

}


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