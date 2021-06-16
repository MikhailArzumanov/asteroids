#include "init_sprites.hpp"

std::string texture_paths[sprites_amount];
sf::Texture		textures[sprites_amount];
sf::Sprite		 sprites[sprites_amount];

void init_sprites() {
	init_textures_paths();
	init_textures();
	for (int i = 0; i < sprites_amount; i++)
		sprites[i].setTexture(textures[i]);
}