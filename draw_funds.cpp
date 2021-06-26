#include "PlayerStats.hpp"
#include "environment.hpp"
#include "environment_functions.hpp"

const float FUNDS_X = 1060.f, FUNDS_Y = 230.f;

void PlayerStats::draw_funds() {
	text.setCharacterSize(48u);
	text.setString(str_from(funds));
	text.setPosition(FUNDS_X, FUNDS_Y);
	window.draw(text);
}