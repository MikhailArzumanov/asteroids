#pragma once
#include "shape_type.hpp"
#include "point.hpp"

class Shape {
public:
	point p;
	ShapeType type;
	virtual bool is_collides_with(Shape* another) = 0;
};