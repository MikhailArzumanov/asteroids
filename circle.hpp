#pragma once
#include "shape.hpp"

class Circle : public Shape {
private:
	bool is_collides_with_circle(Shape* another);
protected:
	float r;
public:
	bool is_collides_with(Shape* another);
};