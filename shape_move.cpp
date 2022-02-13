#include "shape.hpp"
const float speed_scale = 1/60.f;
void Shape::move() {
	p += v*speed_scale;
}