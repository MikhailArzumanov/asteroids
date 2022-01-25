#include "circle.hpp"

bool Circle::is_collides_with(Shape* another) {
	Circle* circle_;
	float r_sum,dist;
	switch(another->type){
	case circle:
		circle_ = static_cast<Circle*>(another);
		r_sum	= r + circle_->r;
		dist	= p.get_sqr_dist(another->p);
		return dist <= r_sum*r_sum;
	default:
		return false;
	}
}