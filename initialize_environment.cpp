#include "initialization.hpp"

void initialize_environment() {
	initialize_clock();
	initialize_window();

	initialize_textures_paths();
	initialize_textures();
	initialize_sprites();

	initialize_spacecraft();
}