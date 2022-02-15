#include "initialization.hpp"
#include "sprites.hpp"

void initialize_sprites() {
	for (int i = 0; i < SpritesNamesCount; i++)
		sprites[i].setTexture(textures[i]);
}