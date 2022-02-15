#include "initialization.hpp"

void initialize_environment() {
	initialize_clock();
	initialize_window();

	initialize_textues_names();
	initialize_textues();
	initialize_sprites();

	initialize_spacecraft();
}