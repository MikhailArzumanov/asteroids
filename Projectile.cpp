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
	sprite = &(sprites[prjctile]);
	
	r = 25.f;
}


