#include "circle.hpp"

bool Circle::is_collides_with(Shape* another) {
	switch (another->type) {
	case circle:
		auto another_ = static_cast<Circle*>(another);
		
		float r_sum = r+another_->r;
		float dist  = p.get_sqr_dist(another->p);

		return dist <= r_sum*r_sum;
	default:
		return false;
	}
}