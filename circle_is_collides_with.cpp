#include "circle.hpp"

bool Circle::is_collides_with_circle(Shape* another) {
	Circle* circle_ = static_cast<Circle*>(another);
	float r_sum = r + circle_->r;
	float dist = p.get_sqr_dist(another->p);
	return dist <= r_sum * r_sum;
}

bool Circle::is_collides_with(Shape* another) {
	switch(another->type){
	case circle:
		return is_collides_with_circle(another);
	default:
		return false;
	}
}