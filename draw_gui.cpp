#include "gui.hpp"
#include "environment.hpp"

const float BASE_WIDTH = 250.f, BASE_HEIGHT = 300.f;
const float BASE_X = 1030.f,    BASE_Y = 210.f;
sf::RectangleShape gui_base = 
sf::RectangleShape(sf::Vector2f(BASE_WIDTH, BASE_HEIGHT));

void draw_gui_base() {
	gui_base.setPosition(BASE_X, BASE_Y);
	gui_base.setFillColor(sf::Color(85, 85, 85, 255));
	window.draw(gui_base);
}

void draw_gui() {
	draw_gui_base();
	stats.draw_hp();
	stats.draw_upgrades();
	stats.draw_funds();
}