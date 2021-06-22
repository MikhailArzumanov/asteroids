#pragma once
struct point {
	float x, y;
	point operator-(point another);
	point operator/(float divisor);
	point operator*(float multiplier);
	float get_sqr_dist(point another);

};