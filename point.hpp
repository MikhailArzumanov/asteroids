#pragma once
struct point {
	float x, y;

	float get_sqr_dist(point another);

	void operator/=(float scalar);
	void operator+=(point another);
	point operator*(float scalar);
};