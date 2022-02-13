#include "point.hpp"
void point::operator/=(float scalar) {
	x /= scalar; y /= scalar;
}
void point::operator+=(point another) {
	x += another.x; y += another.y;
}
point point::operator*(float scalar) {
	return {x*scalar, y*scalar};
}