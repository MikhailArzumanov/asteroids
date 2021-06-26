#pragma once
#include <SFML/Graphics.hpp>

void draw();
void event_handler();
void key_pressed(sf::Keyboard::Key key_code);
void interact();
void collide();
void live();
void tick();
void cycle();
void move();

std::string str_from(int x);

void draw_buy_error();
void draw_buy_success();