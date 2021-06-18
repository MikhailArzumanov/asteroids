#pragma once
struct point {
	float x, y;
	point operator-(point another);
	point operator/(float divisor);
	float get_sqr_dist(point another);

};