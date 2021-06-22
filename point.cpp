#include "point.hpp"
#include "environment.hpp"

point point::operator-(point another) {
	return point{ x - another.x, y - another.y };
}
point point::operator/(float divisor) {
	return point{x/divisor, y/divisor};
}
point point::operator*(float multiplier) {
	return point{ x*multiplier, y*multiplier };
}
float point::get_sqr_dist(point another) {
	float dist_x = sqr(x - another.x);
	float dist_y = sqr(y - another.y);
	return dist_x + dist_y;
}