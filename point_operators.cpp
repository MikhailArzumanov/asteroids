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
point point::operator+(point another) {
	return {x+another.x, y+another.y};
}
point point::operator-(point another) {
	return {x-another.x, y-another.y};
}