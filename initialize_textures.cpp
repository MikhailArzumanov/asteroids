#include "initialization.hpp"
#include "sprites.hpp"

void initialize_textures() {
	for (int i = 0; i < SpritesNamesCount; i++)
		textures[i].loadFromFile("textures/"+textures_paths[i]);
}