#pragma once
#include "libs.hpp"
#include "sprite_names.hpp"
#include "Spacecraft.hpp"





//extern std::vector<entity*> beings;

extern std::string texture_paths[sprites_amount];
extern sf::Texture		textures[sprites_amount];
extern sf::Sprite		 sprites[sprites_amount];

extern bool is_key_pressed[sf::Keyboard::KeyCount];

extern sf::RenderWindow window;
extern sf::Clock the_clock;
extern Spacecraft* spacecraft;