#include "point.hpp"
#include <cmath>

point point::shift_at_angle(float tilt_angle) {
	float module	 = sqrt(get_sqr_dist({0, 0}));
	float prev_angle = get_angle();
	float new_angle  = prev_angle+tilt_angle;
	point new_point  = {module*cos(new_angle), module*sin(new_angle)};
	return new_point;
}