#include "init_sprites.hpp"

void init_textures_paths() {
	texture_paths[spccraft]		= "spacecraft";
	texture_paths[thrust_right] = "thrust_ld";
	texture_paths[thrust_down]	= "thrust_lu";
	texture_paths[thrust_left]	= "thrust_ru";
	texture_paths[thrust_up]	= "thrust_rd";
	texture_paths[prjctile]		= "projectile";
	texture_paths[astroid]		= "asteroid";
	texture_paths[explosion]	= "explosion";
	texture_paths[guide_sprite] = "guide";
}
