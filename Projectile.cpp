#include "Projectile.hpp"
#include "environment.hpp"
#include "Explosion.hpp"
#include <cmath>
#define PI 3.1415926f

float sgn(float x) {
	return x < 0 ? -1.f : 1.f;
}

float get_angle(point& dp) {
	float res = (dp.x <= 0) ? PI : 0;
	if (dp.x != 0)
		res += atan(dp.y / dp.x);
	else res += PI / 2.f * sgn(dp.y);
	return res;
}

Projectile::Projectile(point start, point target, float _proj_velocity) {
	type = projectile_type;
	sprite = &(sprites[prjctile]);
	lifetime = -1;
	r = 25.f;
	p = start;

	point target_vector = target - start;
	float angle = get_angle(target_vector);
	tilt_alpha = 90.f + angle * 180.f / PI;
	v.x = cos(angle)*_proj_velocity; 
	v.y = sin(angle)*_proj_velocity;
	
}


