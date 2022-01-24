#pragma once
#include "shape.hpp"

class Circle : public Shape {
protected:
	float r;
public:
	bool is_collides_with(Shape* another);
};