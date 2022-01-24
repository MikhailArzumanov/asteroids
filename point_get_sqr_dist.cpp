#include "point.hpp"

float point::get_sqr_dist(point another) {
	float dx = x-another.x, 
		  dy = y-another.y;

	return dx*dx + dy*dy;
}