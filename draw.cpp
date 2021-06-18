#include "environment.hpp"
#include "environment_functions.hpp"

#define in :

void draw() {
	window.clear();
	for (auto being in beings)
		being->draw();
	spacecraft->draw();
	window.display();
}