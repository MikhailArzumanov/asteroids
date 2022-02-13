#pragma once
struct point {
	float x, y;

	float get_angle();
	float get_sqr_dist(point another);
	point shift_at_angle(float tilt_angle);

	void operator/=(float scalar);
	void operator+=(point another);
	point operator*(float scalar);
	point operator+(point another);
	point operator-(point another);
};