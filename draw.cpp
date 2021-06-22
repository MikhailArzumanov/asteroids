#include "environment.hpp"
#include "environment_functions.hpp"
#include "gui.hpp"


#define in :


void draw() {
	window.clear();
	for (auto being in beings)
		being->draw();
	spacecraft->draw();
	draw_gui();
	window.display();
}