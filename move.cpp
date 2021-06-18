#include "environment.hpp"
#include "environment_functions.hpp"

#define in :

void move() {
	spacecraft->move();
	for (auto being in beings)
		being->move();
}
