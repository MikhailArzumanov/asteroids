#include "point.hpp"
#include <cmath>


float point::get_angle() {
	return atan2f(y, x);
}