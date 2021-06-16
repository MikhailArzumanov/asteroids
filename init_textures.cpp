#include "init_sprites.hpp"

void init_textures(){
	for (int i = 0; i < sprites_amount; i++)
		textures[i].loadFromFile("textures\\"+texture_paths[i]+".png");
}