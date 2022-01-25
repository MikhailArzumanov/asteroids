#include "being.hpp"
#include "window.hpp"
bool Being::is_living() {
	bool vertical   = p.y < -2*r || WINDOW_HEIGHT + 2*r < p.y;
	bool horizontal = p.x < -2*r || WINDOW_WIDTH  + 2*r < p.x;
	return vertical || horizontal;
}