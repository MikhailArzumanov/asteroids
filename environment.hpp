#pragma once
#include "libs.hpp"
#include "Spacecraft.hpp"
#include "sprite_names.hpp"

float sqr(float x);

extern const int SCREEN_WIDTH, SCREEN_HEIGHT;

extern std::string texture_paths[sprites_amount];
extern sf::Texture		textures[sprites_amount];
extern sf::Sprite		 sprites[sprites_amount];

extern bool is_key_pressed[sf::Keyboard::KeyCount];

extern sf::RenderWindow window;

extern std::vector<Entity*> beings;
extern sf::Clock the_clock;
extern Spacecraft* spacecraft;